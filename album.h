
#include <iostream>


using namespace std;

class Album{
    private:
        int id;
        string nombre, num_canc, artista;
    public:
        Album();
        void agrgar(int*);
        void mostrar();
        int getId();
        void eliminar(int*, Album);
};


