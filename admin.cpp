#include "admin.h"

admin::admin()
{
}

admin::~admin()
{
}

void admin::agregar()
{
    int id;
    string tmp;
    pi =  &i;
    cout<<"PI: "<<i;
//    cout<<"Ingrese el nombre del album: ";
//    cin>>tmp;
//    albums[*pi].setNombre(tmp);
//    cout<<"Ingrese el numero de canciones del album: ";
//    cin>>tmp;
//    albums[*pi].setCanc(tmp[5]);
    cout<<"Ingrese el nombre del artista: ";
    cin>>tmp;
    albums[i].setArtista(tmp);
    albums[*pi].setId(*pi+1);
    *pi += 1; 
    cout<<"P2I: "<<i;
}

void admin::buscar()
{
	int bus, b = 0, ident;
	char tmp[25];
	cout<<"Ingrese el id a buscar: ";
	cin>>bus;
	for(int j = 0; j<= *pi; j++)
	{
		ident = albums[j].getId();
		if(bus == ident)
		{
			cout<<"ID: "<<ident;
			//tmp[25] = albums[j].getNombre();
			cout<<"Nombre: "<<albums[j].getNombre();;
			//tmp[25] = albums[j].getArtista();
			cout<<"Artista: "<<albums[j].getArtista();;
			//tmp[5] = albums[j].getCanc();
			cout<<"Numero de canciones: "<<albums[j].getCanc();

		}
	}
}

void admin::eliminar()
{
	
}

void admin::mostrar()
{
	int ident;
	cout<<"PI: "<<i;
	for(int j = 0; j<i; j++)
	{
		ident = albums[j].getId();
		cout<<"ID: "<< ident;
//		cout<<"Nombre: "<<albums[j].getNombre();;
		cout<<"Artista: "<<albums[j].getArtista()<<endl;
//		cout<<"Numero de canciones: "<<albums[j].getCanc();
	}
}

void admin::menu()
{
	admin ad;
	
	int opc;
	do
	{
		cout<<"PI: "<<i;
        cout<<"\n\t1) Ingresar \n\t2) Eliminar\n\t3) Buscar por id\n\t4) Mostrar\n\t0 para salir \n Opc: ";
        cin>>opc;
        switch(opc)
        {
        	case 0:
        		cout<<"Salir...\n";
        		break;
        	case 1:
        		ad.agregar();
        		break;
        	case 2:
        		ad.eliminar();
        		break;
        	case 3:
        		ad.buscar();
        		break;
        	case 4:
        		ad.mostrar();
        		break;
        	default:
        		cout<<"Opcion no valida\n";
        		break;
		}
	}while(opc != 0);
}

