#ifndef ADMIN_H
#define ADMIN_H
#include "album.h"

class admin
{
	private:
		int cont = 0;
		int *pc;
		album albumes[30];
		
	public:
		void agregar(album, int*);
		void eliminar(int*);
		void mostrar();
	
	
};

#endif
