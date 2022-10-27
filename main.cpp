#include <iostream>
#include <fstream>

using namespace std;
class album
{
    private:
        string nombre;
        int id;
    public:
        album(string nom, int id);
        album();

        void setId(int);
        int getId();
        void setNom(string);
        string getNom();
};

album::album()
{
}

album::album(string _nombre,int _id)
{
    nombre = _nombre;
    id = _id;
}

string album::getNom()
{
    return nombre;
}

int main()
{
    album alb("Born",15);
    album albin;
    string g;
    //int i = 1254, j;
    fstream myFile("Alb", ios::binary | ios::in | ios::out);
    //fstream file("album1.bin",  ios::in | ios::binary);
    //fstream myFile ("C:/Users/Usuario/Pictures/Saved Pictures/Feliz.jpg", ios::in);
    //fstream file ("cara1.jpg",  ios::out);

    myFile.write((char*)&alb, sizeof(album));
    myFile.seekg(0);
    myFile.read((char*)&albin, sizeof(album));
    g = albin.getNom();
    cout<<"Nombre: "<<g<<endl;


    /*
    myFile.write((char*)&i, sizeof(i));
    //myFile.close();
    myFile.seekg (ios::beg);

    myFile.read((char *)&j, sizeof(i));

    cout<<"Archivo: "<<j<<endl;


    while( !myFile.eof() && !file.eof())
    {
        myFile.read((char *) &byte, sizeof(char));
        //cout<<"Copiando..."<<endl;
        file.write((char *) &byte, sizeof(char));

    }*/


    cout << "Exito" << endl;
    return 0;
}
