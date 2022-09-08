<<<<<<< HEAD
#include "album.h"


class admin
{
private:
    int i;//Limite de albums
    int *pi;//apuntador a i
    album albums[20];
public:
    admin();
    ~admin();
    void agregar();
    void mostrar();
    void eliminar(int*);
    void buscar();
};

=======
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
>>>>>>> 50031d3e908f917eaa9282c6727a40b1be2eddfb
