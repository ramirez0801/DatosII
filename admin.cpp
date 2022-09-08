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
