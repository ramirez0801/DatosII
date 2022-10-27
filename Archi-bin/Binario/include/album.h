#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Album
{
    private:
        string nombre, artista, num_canc;
        int id;
    public:

    Album();
    ~Album();

    string getNombre();
    void setNombre(string& value);

    string getArtista();
    void setArtista(string& value);

    string getNum_canc();
    void setNum_canc(string& value);

    int getId();
    void setId(int value);

    string ToString();
};



