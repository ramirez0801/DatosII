#include <iostream>
#include "album.h"
#include "admin.h"
using namespace std;

int main()
{
    Admin admin;
    Album album;
    // Menu menu;
    // menu.MostrarMenu();
    album = admin.Capturar();
    admin.Agregar(album);
    album = admin.Capturar();
    admin.Agregar(album);
    admin.MostrarTodo();

    cout<<"Exito!";
    return 0;
}
