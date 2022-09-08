#include "album.h"

album::album()
{
}

album::~album()
{
}

void album::setArtista(char artista)
{
    artista = artista;
}

void album::setCanc(char num_canc)
{
    num_canc = num_canc;
}

void album::setId(int id)
{
    id = id;
}

void album::setNombre(char nombre)
{
    nombre = nombre;
}

int album::getId()
{
    return id;
}

char album::getArtista()
{
    return artista[25];
}

char album::getCanc()
{
    return num_canc[5];
}

char album::getNombre()
{
    return nombre[25];
}