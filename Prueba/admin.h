#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "album.h"
using namespace std;

class Admin
{
private:
    Album arregloAlbumes[20];
    int cont = 0;
public:
    Admin(/* args */);
    ~Admin();
    Album Capturar();
    void Agregar(Album& album);
    void MostrarTodo();
};

Admin::Admin(/* args */)
{
}

Admin::~Admin()
{
}

void Admin::Agregar(Album& album)
{
    arregloAlbumes[cont] = album;
    cont++;
}

Album Admin::Capturar()
{
    Album album;
    string cadena;
    cout<<"Ingrea nombre: ";
    getline(cin,cadena);
    album.setNombre(cadena);
    cout<<"Ingrea artista: ";
    getline(cin,cadena);
    album.setArtista(cadena);
    return album;
}

void Admin::MostrarTodo()
{
    for(int i = 0; i<cont; i++)
    {
        cout<<"Album["<<i<<"]: "<<arregloAlbumes[i].ToString()<<endl;
    }
}
