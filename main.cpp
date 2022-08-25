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

void agregar(int i, struct album alb[25]){
    cout<<"Ingrese el nombre del album: ";
    cin.getline(alb[i].nombre,25);
    cout<<"Ingrese el numero de canciones del album: ";
    cin.getline(alb[i].num_canc,5);
    cout<<"Ingrese el nombre del artista: ";
    cin.getline(alb[i].artista,25);
    alb[i].id = i + 1;
    salto();
}

int eliminar(int c, struct album alb[25]){
	int bus;
    cout<<"Ingrese el id a eliminar: ";
    cin>>bus;

    for(int i = 0; i<= c; i++)
    {
        if(alb[i].id == bus)
        {
        	alb[i] = {};
        	cout<<"Registro eliminado";
        	alb[i] = alb[i-1];
        	break;
        }
        else
        {
			cout<<"No encontrado";
			salto();   
		}
    }
    return c;
    
}

void buscar(int c, struct album alb[25]){
    int bus;
    cout<<"Ingrese el id a buscar: ";
    cin>>bus;
	fflush(stdin);
    for(int i = 0; i<= c; i++){
        if(alb[i].id == bus)
        {
            cout<<"ID: "<<alb[i].id<<endl;
            cout<<"Nombre del album: "<<alb[i].nombre<<endl;
            cout<<"Artista: "<<alb[i].artista<<endl;
            cout<<"Numero de canciones: "<<alb[i].num_canc<<endl;
            cout<<"cc"<<c;
            salto();
            break;
        }
        else
        {
            cout<<"No encontrado\n";
            salto();
            break;
        }
            
    }
}

void mostrar(int c, struct album alb[25]){

    for(int i = 0; i < c; i++){
    	cout<<"\n";
        cout<<"ID: "<<alb[i].id<<endl;
        cout<<"Nombre del album: "<<alb[i].nombre<<endl;
        cout<<"Artista: "<<alb[i].artista<<endl;
        cout<<"Numero de canciones: "<<alb[i].num_canc<<endl;
    }
    salto();
}




int main()
{
    int opc = 1;
    int i = 0;
    int c = 0;
    album alb[25];
    while(opc != 0){
        cout<<"\n\t1) Ingresar \n\t2) Eliminar\n\t3) Buscar por id\n\t4) Mostrar\n\t0 para salir \n Opc: ";
        cin>>opc;
        fflush(stdin);
        switch(opc){
            case 1:
            {   
                agregar(i, alb);
                i++;
                c++;
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
                cout<<"CC: "<<c;
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
                    cout<<"Saliendo...";
                else
                    cout<<"Opcion no valida";
                break;
            }
        }

        }


    return 0;
}
