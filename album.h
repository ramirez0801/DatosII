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

