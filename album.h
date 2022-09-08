#ifndef ALBUM_H
#define ALBUM_H

#include <iostream>
#include <string.h>
using namespace std;

class album
{
private:
    int id;
    string nombre, artista, num_canc;
public:
    album();
    ~album();
    void setId(int);
    void setNombre(string); 
    void setArtista(string);
    void setCanc(string);

    int getId();
    string getNombre();
    string getArtista();
    string getCanc();
};


#endif
