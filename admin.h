#ifndef ADMIN_H
#define ADMIN_H
#include "album.h"


class admin
{
private:
    int i = 0;//Limite de albums
    int *pi;//apuntador a i
    album albums[20];
public:
    admin();
    ~admin();
    void agregar();
    void mostrar();
    void eliminar();
    void buscar();
    void menu();
    
};

#endif
