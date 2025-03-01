// Library
#include <iostream>
#include <string>
#include <list>
#include "Aksesoris.cpp"

using namespace std;

class Baju : public Aksesoris
{
private:
    string untuk;
    char size;
    string merk;

public:
    // [CONSTRUCTOR] == PEMBUKA

    Baju()
    {
        this->untuk = "";
        this->size = '-';
        this->merk = "";
    }

    Baju(string untuk, char size, string merk)
    {
        this->untuk = untuk;
        this->size = size;
        this->merk = merk;
    }

    // [METHODS] == ACTION PADA CLASS

    string get_untuk()
    {
        return this->untuk;
    }

    void set_untuk(string untuk)
    {
        this->untuk = untuk;
    }

    char get_size()
    {
        return this->size;
    }

    void set_size(char size)
    {
        this->size = size;
    }

    string get_merk()
    {
        return this->merk;
    }

    void set_merk(string merk)
    {
        this->merk = merk;
    }
    // [DESTRUCTOR] == PENUTUP

    ~Baju()
    {
    }
};