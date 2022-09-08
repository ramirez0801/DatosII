<<<<<<< HEAD
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
=======
#include "album.h"

album::album(char _nombre[25], char _artista[25], char _num_canc[25], int _id)
{
	nombre = _nombre;
	artista = _artista;
	num_canc = _num_canc;
	id = _id;
}

int album::getId()
{
	return id;
}

char album::getArtista()
{
	return artista;
}

char album::getCanc()
{
	return num_canc;
}

char album::getNombre()
{
	return nombre;
}
>>>>>>> 50031d3e908f917eaa9282c6727a40b1be2eddfb
