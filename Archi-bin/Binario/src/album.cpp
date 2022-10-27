#include "album.h"

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
