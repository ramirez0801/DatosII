#include <iostream>
#include <string.h>

using namespace std;

//class Album{
//    private:
//        int id;
//        string nombre, num_canc, artista;
//    public:
//        Album();
//        void agrgar(int*);
//        void mostrar();
//        int getId();
//};


//void salto()
//{
//    system("PAUSE");
//    system("cls");
//}
//
//void eliminar(int *pi, Album alb[])
//{
//    int bus, b = 0,ide;
//    cout<<"Esxriba el id a eliminar: ";
//    cin>>bus;
//    for(int j = 0; j < *pi; j++)
//    {
//        ide = alb[j].getId();
//        if(bus == ide)
//        {
//            for(int k = j; k < *pi; k++)
//            {
//                alb[k] = alb[k+1];
//            }
//            cout<<"Album eliminado"<<endl;
//            b = 1;
//            *pi = *pi - 1;
//            salto();
//            break;
//        }
//    }
//    if(b == 0)
//        cout<<"Album no encontrado";
//}
//
//Album::Album()
//{
//    id = 0;
//    nombre = "";
//    artista = "";
//    num_canc = "";
//}
//
//void Album::agrgar(int *p)
//{
//    cout<<"Ingrese el nombre del album: ";
//    cin>>nombre;
//    cout<<"Ingrese el numero de canciones del album: ";
//    cin>>num_canc;
//    cout<<"Ingrese el nombre del artista: ";
//    cin>>artista;
//    *p = *p + 1;
//    id = *p;
//    salto();
//}
//
//int Album::getId()
//{
//    return id;
//}
//
//void Album::mostrar()
//{
//        cout<<"ID: "<<id<<endl;
//        cout<<"Nombre: "<<nombre<<endl;
//        cout<<"Artista: "<<artista<<endl;
//        cout<<"Numero de canciones: "<<num_canc<<endl;
//}

int main(){
    
    
//    Album alb[10];
//    int opc,i = 0, bus,b = 0; //La variable i sirve como contador de los objetos
//    int *pi;//Es un puntero a la variable i
//    do{
//        cout<<"\ti: "<<i;
//        cout<<"\n\t1) Ingresar \n\t2) Eliminar\n\t3) Buscar por id\n\t4) Mostrar\n\t0 para salir \n Opc: ";
//        cin>>opc;
//        switch(opc){
//            case 1:
//            {   
//                alb[i].agrgar(&i);
//                break;
//            }
//            case 2:
//            {
//                eliminar(&i,alb);
//                break;
//            }
//            case 3:
//            {
//                int ide;
//                b = 0;
//                cout<<"Ingrese el id a buscar: ";
//                cin>>bus;
//                for(int j = 0; j< i; j++)
//                {
//                    ide = alb[j].getId();
//                    if(bus == ide)
//                    {
//                        alb[j].mostrar();
//                        b = 1;
//                    }
//                }
//                if(b == 0)
//                    cout<<"No se encontro"<<endl;
//                break;
//            }
//            case 4:
//            {
//                for(int j = 0; j< i; j++ )
//                {
//                    alb[j].mostrar();
//                }
//                salto();
//                break;
//            }
//
//        }
//     }while(opc != 0);

     return 0;
}
