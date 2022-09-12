#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Album
{
private:
    string nombre;
    string artista;
public:
    
    Album(/* args */);
    ~Album();
    string getNombre();
    void setNombre(string& value);
    string getArtista();
    void setArtista(string& value);

    string ToString();
};

Album::Album(/* args */)
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

string Album::ToString()
{
    stringstream ss;
    ss<<"Nombre: "<<nombre<<" Artista: "<<artista<<"\n";
    return ss.str();
}