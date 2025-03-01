// Library
#include <iostream>
#include <string>
#include <list>
#include "PetShop.cpp"

using namespace std;

class Aksesoris : public PetShop
{
private:
    string jenis;
    string bahan;
    string warna;

public:
    // [CONSTRUCTOR] == PEMBUKA

    Aksesoris()
    {
        this->jenis = "";
        this->bahan = "";
        this->warna = "";
    }

    Aksesoris(string jenis, string bahan, string warna)
    {
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }

    // [METHODS] == ACTION PADA CLASS

    string get_jenis()
    {
        return this->jenis;
    }

    void set_jenis(string jenis)
    {
        this->jenis = jenis;
    }

    string get_bahan()
    {
        return this->bahan;
    }

    void set_bahan(string bahan)
    {
        this->bahan = bahan;
    }

    string get_warna()
    {
        return this->warna;
    }

    void set_warna(string warna)
    {
        this->warna = warna;
    }

    // [DESTRUCTOR] == PENUTUP

    ~Aksesoris()
    {
    }
};