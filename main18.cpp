#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Album
{
    private:
        string nombre, artista, num_canc;
        int id;
    public:
        Album();
        ~Album();
        string getNombre();
        void setNombre(string& value);
        string getArtista();
        void setArtista(string& value);
        string getNum_canc();
        void setNum_canc(string& value);
        int getId();
        void setId(int value);
        string ToString();
};

class Admin
{
    private:
        Album arregloAlbumes[20];
        int cont = 0;
    public:
        Admin();
        ~Admin();
        Album capturar();
        void agregar(Album album);
        void mostrar();
        void eliminar();
        void buscar();
        void leer();
        void guardar();
};





int main()
{
    Admin admin;
    Album album;
    //cout<<"inicio"<<endl;
    admin.leer();
    int opc;
    do{

        cout<<"\n\t1)Agregar\n\t2)Mostrar\n\t3)Buscar\n\t4)Eliminar\n\t5)Guardar\n\tOpc: ";
        cin>>opc;
        switch (opc)
        {
        case 1:
            album = admin.capturar();
            admin.agregar(album);
            system("pause");
            system("cls");
            break;
        case 2:
            admin.mostrar();
            system("pause");
            system("cls");
            break;
        case 3:
            admin.buscar();
            system("pause");
            system("cls");
            break;
        case 4:
            admin.eliminar();
            system("pause");
            system("cls");
            break;
        case 5:
            admin.guardar();
            break;
        default:
            if(opc == 0) cout<<"SALIENDO"<<endl;
            else cout<<"\n\tOpcion no valida"<<endl;
            system("pause");
            system("cls");
            break;
        }
    }while(opc != 0);

    cout<<"Exito!";
    return 0;
}


//Metodos de la clase album

Album::Album()
{
}

Album::~Album()
{
}

string Album::getNombre()
{
    return nombre;
}

void Album::setNombre(string& value)
{
    nombre = value;
}

string Album::getArtista()
{
    return artista;
}

void Album::setArtista(string& value)
{
    artista = value;
}

string Album::getNum_canc()
{
    return num_canc;
}

void Album::setNum_canc(string& value)
{
    num_canc = value;
}

int Album::getId()
{
    return id;
}

void Album::setId(int value)
{
    id = value;
}

string Album::ToString()
{
    stringstream ss;
    ss<<"ID: "<<id<<" -Nombre: "<<nombre<<" -Artista: "<<artista<<" -Numero de canciones: "<<num_canc<<endl;
    return ss.str();
}

//Metodos de la clase admin
Admin::Admin()
{
}

Admin::~Admin()
{
}

void Admin::agregar(Album album)
{
    //cout<<"cont"<<cont<<endl;
    arregloAlbumes[cont] = album;
    cont++;
}

Album Admin::capturar()
{
    cin.ignore();
    Album album;
    string cadena;
    int c;
    cout<<"Ingrea nombre: ";
    getline(cin,cadena);
    album.setNombre(cadena);
    cout<<"Ingrea artista: ";
    getline(cin,cadena);
    album.setArtista(cadena);
    cout<<"Ingrea numero de canciones: ";
    getline(cin,cadena);
    album.setNum_canc(cadena);
    c = cont;
    album.setId(c + 1);
    return album;
}

void Admin::mostrar()
{
    for(int i = 0; i<cont; i++)
    {
        cout<<arregloAlbumes[i].ToString()<<endl;
    }
}

void Admin::buscar()
{
    int b = 0, bus;
    cout<<"Escriba el id a buscar: ";
    cin>>bus;
    for(int i = 0; i < cont; i++)
    {
        if(bus == arregloAlbumes[i].getId())
        {
            cout<<arregloAlbumes[i].ToString()<<endl;
            b = 1;
        }
    }
    if(b == 0)
        cout<<"\t--No se encontro--"<<endl;
}

void Admin::eliminar()
{
    int e;
    cout<<"Escriba el id a eliminar: ";
    cin>>e;
    for(int i = 0; i <= cont; i++)
    {
        if(e == arregloAlbumes[i].getId())
        {
            for(int j = i; j <= cont; j++)
                arregloAlbumes[j] = arregloAlbumes[j + 1];
            cout<<"Registro eliminado"<<endl;
            cont--;
        }
    }
}

void Admin::leer()
{
    Album alb;
    string nom,art,nu;
    int id;
    fstream myFile("Album", ios::binary | ios::in);//Opening the file
    //cout<<"LEER\n";
    if(!myFile.fail())
    {
        myFile.seekg(0, ios::beg);//se posiciona al inicio del archivo
        while(!miFile.eof())
        {
            myFile.read((char*)&alb, sizeof(Album));
            agregar(alb);

        }
    }
    else
        cout<<"Error al leer el archivo"<<endl;
    myFile.close();
}

void Admin::guardar()
{
    Album albin;
    fstream myFile("Album", ios::binary | ios::out);
    if(myFile.is_open())
    {

        for(int i = 0; i<cont; i++)
            myFile.write((char*)&arregloAlbumes[i], sizeof(Album));//Guardamos un por uno
        myFile.close();
    }
}



 /*fstream myFile("Album.bin",ios::in|ios::binary);
    char byte;
    while( !myFile.eof())
    {
        myFile.read((char *)&byte, sizeof(char));
        if(myFile.good())
        {
            cout<<byte;
        }
    }
        //myFile.write()
        //myFile.seekg(0,ios::beg);
        //cout << "the entire file";


    //cout << "Exito" << endl;*/
