#include <iostream>
#include <fstream>
#include <string.h>




using namespace std;

int main()
{
    const string narchivo = "Lectura.txt";
    char letra, plba[] ="Esto es, una cadena";
    char *pch;
    ifstream archivo;
    archivo.open(narchivo.c_str());

    cout<<"\tLectura por caracteres"<<endl;
    if(!archivo.fail())
    {
        archivo.get(letra);
        while(!archivo.eof())
        {
            cout<<letra<<endl;
            archivo.get(letra);
        }
        archivo.close();
        cout<<"\n";
    }

    for(int i = 0; i < narchivo.length(); i++)
    {
        cout<<"Letra "<<i+1<<": "<<narchivo.c_str()[i]<<endl;
    }

     cout<<"\n\tLectura por linea"<<endl;
     pch = strtok(plba, " ");
     while(pch != NULL)
     {
        cout<<"Linea: "<<pch<<endl;
        pch = strtok(NULL, " ,");
     }



    cout << "Exito" << endl;
    return 0;
}
