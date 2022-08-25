//Emmanuel Ramirez Garcia
//23 de agosto 2022

#include <iostream>

using namespace std;

struct album{
    int id;
    char nombre[25], artista[25], num_canc[3];
}alb[50];

void agregar(int i){
    
}

void eliminar(){

}

void buscar(){

}

void mostrar(){
    
}



int main()
{
    int opc;
    
    
    int i = 0;
    while(opc != 0){
        cout<<"\n\t1) Ingresar \n\t2) Eliminar\n\t3) Buscar por id\n\t4) Mostrar\n Opc: ";
        cin>>opc;
        fflush(stdin);
        switch(opc){
            case 1:
            {   
                cout<<"Ingrese el nombre del album: ";
                cin.getline(alb[i].nombre,25);
                cout<<"Ingrese el numero de canciones del album: ";
                cin.getline(alb[i].num_canc,25);
                cout<<"Ingrese el nombre del artista: ";
                cin.getline(alb[i].nombre,25);
                alb[i].id = i + 1;
                i++;
                break;
            }
            case 2:
            {
                eliminar();
                break;
            }
            case 3:
            {
                buscar();
                break;
            }
            case 4:
            {
                mostrar();
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
