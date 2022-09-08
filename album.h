<<<<<<< HEAD
#include <iostream>

using namespace std;

class album
{
private:
    int id;
    char nombre[25], artista[25], num_canc[5];
public:
    album();
    ~album();
    void setId(int);
    void setNombre(char); 
    void setArtista(char);
    void setCanc(char);

    int getId();
    char getNombre();
    char getArtista();
    char getCanc();
};

=======
#ifndef ALBUM_H
#define ALBUM_H

class album
{
	private:
        int id;
        char nombre[25], num_canc[25], artista[25];
    public:
        album(char, char, char, int);
        int getId();
        char getNombre();
        char getArtista();
        char getCanc();
};

#endif
>>>>>>> 50031d3e908f917eaa9282c6727a40b1be2eddfb
