#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "album.h"
using namespace std;

class Admin
{
    private:
        Album arregloAlbumes[20];
        int cont = 0;
    public:
        Admin();
        ~Admin();
        Album capturar();
        void agregar(Album& album);
        void mostrar();
        void eliminar();
        void buscar();
        void leer();
};

Admin::Admin()
{
}

Admin::~Admin()
{
}

void Admin::agregar(Album& album)
{
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
    for(int i = 0; i <= cont; i++)
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
    Album album;
    ifstream myFile;
    myFile.open("Album.txt",ios::in);
    string buffer = "", palabra = "";
    int largo,c = 0,aux;
    
    while(!myFile.eof())
    {
        getline(myFile, buffer);
        largo = buffer.length();
        c = 0;
        //cout<<"Buffer: "<<buffer<<endl;
        for(int i = 0; i<=largo; i++)
        {
            if(buffer[i] == ';' || buffer[i] == '\0')
            {
                //cout<<"Palabra: "<<palabra<<endl;
                if(c == 0)
                {
                    //aux = atoi(palabra);
                    album.setId(cont + 1);
                }
                if(c == 1)
                    album.setNombre(palabra);
                if(c == 2)
                    album.setArtista(palabra);
                if(c == 3)
                    album.setNum_canc(palabra);
                palabra = "";
                c++;
            }
            else
            {
                palabra += buffer[i];
            }
            
        }
       //cout<<"#"<<album.ToString()<<endl;
       agregar(album);
    }
    myFile.close();
}

