// Library
#include <iostream>
#include <string>
#include <list>

using namespace std;

// CLASS PetShop
class PetShop
{

private:
    int id;
    string nama_produk;
    int stok_produk;
    int harga_produk;

public:
    // [CONSTRUCTOR] == PEMBUKA

    PetShop()
    {
        this->id = 0;
        this->nama_produk = "";
        this->stok_produk = 0;
        this->harga_produk = 0.0;
    }

    PetShop(int id, string nama_produk, int stok_produk, int harga_produk) // Constructor untuk memberikan nilai awal pada variabel (makanya pake parameter)
    {
        this->id = id;
        this->nama_produk = nama_produk;
        this->stok_produk = stok_produk;
        this->harga_produk = harga_produk;
    }

    // [METHODS] == ACTION PADA CLASS

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    string get_nama_produk()
    {
        return this->nama_produk;
    }

    void set_nama_produk(string nama_produk)
    {
        this->nama_produk = nama_produk;
    }

    int get_stok_produk()
    {
        return this->stok_produk;
    }

    void set_stok_produk(int stok_produk)
    {
        this->stok_produk = stok_produk;
    }

    int get_harga_produk()
    {
        return this->harga_produk;
    }

    void set_harga_produk(int harga_produk)
    {
        this->harga_produk = harga_produk;
    }

    // [DESTRUCTOR] == PENUTUP

    ~PetShop()
    {
    }
};