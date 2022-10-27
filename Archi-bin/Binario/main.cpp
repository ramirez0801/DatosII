#include <iostream>
#include <fstream>
#include <string>
#include "admin.h"

using namespace std;

int main()
{
    Admin admin;
    Album album;
    cout<<"inicio"<<endl;
    //admin.leer();
    int opc;
    do{

        cout<<"\n\t1)Agregar\n\t2)Mostrar\n\t3)Buscar\n\t4)Eliminar\n\t5)Guardar\n\tOpc: ";
        cin>>opc;
        switch (opc)
        {
        case 1:
            album = admin.capturar();
            admin.agregar(album);
            system("pause");
            system("cls");
            break;
        case 2:
            admin.mostrar();
            system("pause");
            system("cls");
            break;
        case 3:
            admin.buscar();
            system("pause");
            system("cls");
            break;
        case 4:
            admin.eliminar();
            system("pause");
            system("cls");
            break;
        case 5:
            admin.leer();
            break;
        default:
            if(opc == 0) cout<<"SALIENDO"<<endl;
            else cout<<"\n\tOpcion no valida"<<endl;
            system("pause");
            system("cls");
            break;
        }
    }while(opc != 0);

    cout<<"Exito!";
    return 0;
}


 /*fstream myFile("Album.bin",ios::in|ios::binary);
    char byte;
    while( !myFile.eof())
    {
        myFile.read((char *)&byte, sizeof(char));
        if(myFile.good())
        {
            cout<<byte;
        }
    }
        //myFile.write()
        //myFile.seekg(0,ios::beg);
        //cout << "the entire file";


    //cout << "Exito" << endl;*/
