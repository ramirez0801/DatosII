#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i = 1254, j;
    float f = 15.21;


    fstream myFile("Album.bin", ios::binary | ios::in | ios::out);
    //fstream file("album1.bin",  ios::in | ios::binary);
    //fstream myFile ("C:/Users/Usuario/Pictures/Saved Pictures/Feliz.jpg", ios::in);
    //fstream file ("cara1.jpg",  ios::out);

    myFile.write((char*)&i, sizeof(i));
    //myFile.close();
    myFile.seekg (ios::beg);

    myFile.read((char *)&j, sizeof(i));

    cout<<"Archivo: "<<j<<endl;

    /*
    while( !myFile.eof() && !file.eof())
    {
        myFile.read((char *) &byte, sizeof(char));
        //cout<<"Copiando..."<<endl;
        file.write((char *) &byte, sizeof(char));

    }*/


    cout << "Exito" << endl;
    return 0;
}
