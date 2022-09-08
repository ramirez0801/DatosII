<<<<<<< HEAD
#include "admin.h"

admin::admin()
{
}

admin::~admin()
{
}

void admin::agregar()
{
    int id;
    char tmp[25];
    pi =  &i;
    cout<<"Ingrese el nombre del album: ";
    cin>>tmp;
    albums[i].setNombre(tmp[25]);
    cout<<"Ingrese el numero de canciones del album: ";
    cin>>tmp;
    albums[i].setCanc(tmp[5]);
    cout<<"Ingrese el nombre del artista: ";
    cin>>tmp;
    albums[i].setArtista(tmp[25]);
    albums[i].setId(*pi+1);
    *pi += 1; 
}
=======
#include "admin.h"

void admin::agregar()
{
	
}

void admin::eliminar()
{
	
}

void admin::mostrar()
{
	
}
>>>>>>> 50031d3e908f917eaa9282c6727a40b1be2eddfb
