#include "album.h"

album::album()
{
}

album::~album()
{
}

void album::setArtista(string artista)
{
    artista = artista;
}

void album::setCanc(string num_canc)
{
    num_canc = num_canc;
}

void album::setId(int id)
{
    id = id;
}

void album::setNombre(string nombre)
{
    nombre = nombre;
}

int album::getId()
{
    return id;
}

string album::getArtista()
{
    return artista;
}

string album::getCanc()
{
    return num_canc;
}

string album::getNombre()
{
    return nombre;
}
