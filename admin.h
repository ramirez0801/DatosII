#include "album.h"


class admin
{
private:
    int i;//Limite de albums
    int *pi;//apuntador a i
    album albums[20];
public:
    admin();
    ~admin();
    void agregar();
    void mostrar();
    void eliminar(int*);
    void buscar();
};

