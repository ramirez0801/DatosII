#include "album.h"

void salto()
{
    system("PAUSE");
    system("cls");
}

void Album::eliminar(int *pi, Album alb[])
{
    int bus, b = 0,ide;
    cout<<"Escriba el id a eliminar: ";
    cin>>bus;
    for(int j = 0; j < *pi; j++)
    {
        ide = alb[j].getId();
        if(bus == ide)
        {
            for(int k = j; k < *pi; k++)
            {
                alb[k] = alb[k+1];
            }
            cout<<"Album eliminado"<<endl;
            b = 1;
            *pi = *pi - 1;
            salto();
            break;
        }
    }
    if(b == 0)
        cout<<"Album no encontrado";
}

Album::Album()
{
    id = 0;
    nombre = "";
    artista = "";
    num_canc = "";
}

void Album::agrgar(int *p)
{
    cout<<"Ingrese el nombre del album: ";
    cin>>nombre;
    cout<<"Ingrese el numero de canciones del album: ";
    cin>>num_canc;
    cout<<"Ingrese el nombre del artista: ";
    cin>>artista;
    *p = *p + 1;
    id = *p;
    salto();
}

int Album::getId()
{

    return id;
}

void Album::mostrar()
{
        cout<<"ID: "<<id<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Artista: "<<artista<<endl;
        cout<<"Numero de canciones: "<<num_canc<<endl;
}

