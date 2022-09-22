#pragma once
#include <iostream>
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

