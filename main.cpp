//Emmanuel Ramirez Garcia
//23 de agosto 2022
//Seminario de Estructura de Datos 2

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct album{
    int id;
    char nombre[25], artista[25], num_canc[3];
}alb[20];

void salto(){
    cout<<"Presione enter para continuar..";
    getch();
    system("cls");
}

void agregar(int i){
    cout<<"Ingrese el nombre del album: ";
    cin.getline(alb[i].nombre,25);
    cout<<"Ingrese el numero de canciones del album: ";
    cin.getline(alb[i].num_canc,5);
    cout<<"Ingrese el nombre del artista: ";
    cin.getline(alb[i].artista,25);
    alb[i].id = i + 1;
    salto();
}

void eliminar(){

}

void buscar(int c){
    int bus;
    cout<<"Ingrese el id a buscar: ";
    cin>>bus;

    for(int i = 0; i< c; i++){
        if(alb[i].id == bus)
        {
            cout<<"ID: "<<alb[i].id<<endl;
            cout<<"Nombre del album: "<<alb[i].nombre<<endl;
            cout<<"Artista: "<<alb[i].artista<<endl;
            cout<<"Numero de canciones: "<<alb[i].num_canc<<endl;
            salto();
            break;
        }
        else
        {
            cout<<"No encontrado";
            break;
        }
            
    }
}

void mostrar(int c){

    for(int i = 0; i < c; i++){
        cout<<"ID: "<<alb[i].id<<endl;
        cout<<"Nombre del album: "<<alb[i].nombre<<endl;
        cout<<"Artista: "<<alb[i].artista<<endl;
        cout<<"Numero de canciones: "<<alb[i].num_canc<<endl;
    }
    salto();
}




int main()
{
    int opc;
    
    
    int i = 0;
    int c = 0;
    while(opc != 0){
        cout<<"\n\t1) Ingresar \n\t2) Eliminar\n\t3) Buscar por id\n\t4) Mostrar\n\t0 para salir \n Opc: ";
        cin>>opc;
        fflush(stdin);
        switch(opc){
            case 1:
            {   
                agregar(i);
                i++;
                c++;
                break;
            }
            case 2:
            {
                eliminar();
                break;
            }
            case 3:
            {
                buscar(c);
                break;
            }
            case 4:
            {
                mostrar(c);
                break;
            }
            default:
            {
                if(opc == 0)
                    cout<<"Saliendo...";
                else
                    cout<<"Opcion no valida";
                break;
            }
        }

        }


    return 0;
}
