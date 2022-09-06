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
