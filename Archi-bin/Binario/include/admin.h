#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "album.h"
using namespace std;


class Admin
{
    private:
        Album arregloAlbumes[20];
        int cont = 0;
    public:
        Admin();
        ~Admin();
        Album capturar();
        void agregar(Album album);
        void mostrar();
        void eliminar();
        void buscar();
        void leer();
        void guardar();
};


#endif // ADMIN_H
