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
