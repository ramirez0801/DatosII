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
};

void salto(){
    cout<<"Presione enter para continuar..";
    getch();
    system("cls");
}

int agregar(int c, album alb[], int i){
    cout<<"Ingrese el nombre del album: ";
    cin.getline(alb[i].nombre,25);
    cout<<"Ingrese el numero de canciones del album: ";
    cin.getline(alb[i].num_canc,5);
    cout<<"Ingrese el nombre del artista: ";
    cin.getline(alb[i].artista,25);
    alb[i].id = i + 1;
    c++;
    return c;
    salto();
}

int eliminar(int c, album alb[]){
	int bus,b =0 ;
    cout<<"Ingrese el id a eliminar: ";
    cin>>bus;

    for(int i = 0; i <= c; i++)
    {
        if(alb[i].id == bus)
        {
            for(int j = i; j < c; j++)
        	    alb[j] = alb[j+1];
        	cout<<"Registro eliminado";
            c--;
            b = 1;
        	break;
        }
    }
    if(b == 0)
    {
        cout<<"No se encontro";
        salto();
    }
    return c;
    
}

void buscar(int c, album alb[]){
    int bus, encontrado = 0;
    cout<<"Ingrese el id a buscar: ";
    cin>>bus;
    for(int i = 0; i < c; i++){
        if(alb[i].id == bus)
        {
            cout<<"ID: "<<alb[i].id<<endl;
            cout<<"Nombre del album: "<<alb[i].nombre<<endl;
            cout<<"Artista: "<<alb[i].artista<<endl;
            cout<<"Numero de canciones: "<<alb[i].num_canc<<endl;
            salto();
            encontrado = 1;
            break;
        }        
    }
    if(encontrado == 0){
        cout<<"No se encontro";
        salto();
    }
    
}

void mostrar(int c, album alb[]){

    for(int i = 0; i < c; i++){
    	cout<<"\n";
        cout<<"ID: "<<alb[i].id<<endl;
        cout<<"Nombre del album: "<<alb[i].nombre<<endl;
        cout<<"Artista: "<<alb[i].artista<<endl;
        cout<<"Numero de canciones: "<<alb[i].num_canc<<endl;
        cout<<"\n";
    }
    salto();
}




int main()
{
    int opc = 1;
    int c = 0, i = 0;

    album alb[4];

    while(opc != 0){
        cout<<"\n\t1) Ingresar \n\t2) Eliminar\n\t3) Buscar por id\n\t4) Mostrar\n\t0 para salir \n Opc: ";
        cin>>opc;
        fflush(stdin);
        switch(opc){
            case 1:
            {   
                c = agregar(c, alb, i);
                i++;
                break;
            }
            case 2:
            {
                c = eliminar(c, alb);
                break;
            }
            case 3:
            {
                buscar(c, alb);
                break;
            }
            case 4:
            {
                mostrar(c, alb);
                break;
            }
            default:
            {
                if(opc == 0)
                {
                    cout<<"Saliendo...";
                    break;
                }
                else
                    cout<<"Opcion no valida";
                
            }
        }

        }


    return 0;
}
