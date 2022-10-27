#include "admin.h"

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
    string g;
    fstream myFile("Album.bin", ios::binary | ios::out | ios::in);//Opening the file
    cout<<"LEER\n";
    if(!myFile.fail())
    {
        myFile.seekg(0);//se posiciona al inicio del archivo
        myFile.read((char*)&alb, sizeof(Album));
        g = alb.getNombre();
        cout<<"Nombre: "<<g;
        //agregar(alb);
    }
    else
        cout<<"Error al leer el archivo"<<endl;

    cout<<"LEER1\n";
    myFile.close();
}

void Admin::guardar()
{
    fstream myFile("Album.bin", ios::binary | ios::in | ios::out);
    for(int i = 0; i<cont; i++)
        myFile.write((char*)&arregloAlbumes[i], sizeof(Album));//Guardamos un por uno
    myFile.close();
}
