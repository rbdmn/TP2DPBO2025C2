// Library
#include <iostream>
#include <list>

// Import Baju.cpp untuk definisi class
#include "Baju.cpp"

using namespace std;

int main()
{
    list<Baju> listBaju;
    int autoIncrementID = 1;

    Baju Babajuan;
    Babajuan.ObjekPertama(listBaju, autoIncrementID);
    Babajuan.ObjekKedua(listBaju, autoIncrementID);
    Babajuan.ObjekKetiga(listBaju, autoIncrementID);
    Babajuan.ObjekKeempat(listBaju, autoIncrementID);
    Babajuan.ObjekKelima(listBaju, autoIncrementID);

    int n = 0;
    cout << "Total mo berapa banyak yang mau diinput: ";
    cin >> n;

    cout << "FORMAT: [nama_produk] [stok_produk] [harga_produk] [jenis] [bahan] [warna] [untuk] [size] [merk]\n";
    for (int i = 0; i < n; i++)
    {
        Baju tempBaju;

        string InputNamaProduk;
        int InputStokProduk;
        int InputHargaProduk;
        string InputJenis;
        string InputBahan;
        string InputWarna;
        string InputUntuk;
        char InputSize;
        string InputMerk;

        cin >> InputNamaProduk >> InputStokProduk >> InputHargaProduk >> InputJenis >> InputBahan >> InputWarna >> InputUntuk >> InputSize >> InputMerk;

        tempBaju.set_id(autoIncrementID);
        tempBaju.set_nama_produk(InputNamaProduk);
        tempBaju.set_stok_produk(InputStokProduk);
        tempBaju.set_harga_produk(InputHargaProduk);
        tempBaju.set_jenis(InputJenis);
        tempBaju.set_bahan(InputBahan);
        tempBaju.set_warna(InputWarna);
        tempBaju.set_untuk(InputUntuk);
        tempBaju.set_size(InputSize);
        tempBaju.set_merk(InputMerk);

        listBaju.push_back(tempBaju);

        autoIncrementID++;
    }

    Babajuan.tampilkanBaju(listBaju);

    return 0;
}