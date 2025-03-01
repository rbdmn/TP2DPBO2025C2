// Library
#include <iostream>
#include <list>

// Import Baju.cpp untuk definisi class
#include "Baju.cpp"

using namespace std;

void ObjekPertama(list<Baju> &listBaju, int &autoIncrementID)
{
    Baju ObjekAwal_1;
    ObjekAwal_1.set_id(autoIncrementID);
    ObjekAwal_1.set_nama_produk("LosPollos");
    ObjekAwal_1.set_stok_produk(12);
    ObjekAwal_1.set_harga_produk(120000);
    ObjekAwal_1.set_jenis("Kaos");
    ObjekAwal_1.set_bahan("Kain");
    ObjekAwal_1.set_warna("Putih");
    ObjekAwal_1.set_untuk("Anjing");
    ObjekAwal_1.set_size('S');
    ObjekAwal_1.set_merk("Adidas");
    listBaju.push_back(ObjekAwal_1);
    autoIncrementID++;
}

void ObjekKedua(list<Baju> &listBaju, int &autoIncrementID)
{
    Baju ObjekAwal_2;
    ObjekAwal_2.set_id(autoIncrementID);
    ObjekAwal_2.set_nama_produk("Hermanos");
    ObjekAwal_2.set_stok_produk(7);
    ObjekAwal_2.set_harga_produk(145000);
    ObjekAwal_2.set_jenis("Celana");
    ObjekAwal_2.set_bahan("Katun");
    ObjekAwal_2.set_warna("Hijau");
    ObjekAwal_2.set_untuk("Buaya");
    ObjekAwal_2.set_size('L');
    ObjekAwal_2.set_merk("Matahari");
    listBaju.push_back(ObjekAwal_2);
    autoIncrementID++;
}

void ObjekKetiga(list<Baju> &listBaju, int &autoIncrementID)
{
    Baju ObjekAwal_3;
    ObjekAwal_3.set_id(autoIncrementID);
    ObjekAwal_3.set_nama_produk("ErenYeager");
    ObjekAwal_3.set_stok_produk(2);
    ObjekAwal_3.set_harga_produk(990000);
    ObjekAwal_3.set_jenis("Kemeja");
    ObjekAwal_3.set_bahan("Rajut");
    ObjekAwal_3.set_warna("Hitam");
    ObjekAwal_3.set_untuk("Kodok");
    ObjekAwal_3.set_size('M');
    ObjekAwal_3.set_merk("EAGAMES");
    listBaju.push_back(ObjekAwal_3);
    autoIncrementID++;
}

void ObjekKeempat(list<Baju> &listBaju, int &autoIncrementID)
{
    Baju ObjekAwal_4;
    ObjekAwal_4.set_id(autoIncrementID);
    ObjekAwal_4.set_nama_produk("Furufara");
    ObjekAwal_4.set_stok_produk(40);
    ObjekAwal_4.set_harga_produk(10000);
    ObjekAwal_4.set_jenis("Sepatu");
    ObjekAwal_4.set_bahan("Kain");
    ObjekAwal_4.set_warna("Biru");
    ObjekAwal_4.set_untuk("Semut");
    ObjekAwal_4.set_size('S');
    ObjekAwal_4.set_merk("Ubisoft");
    listBaju.push_back(ObjekAwal_4);
    autoIncrementID++;
}

void ObjekKelima(list<Baju> &listBaju, int &autoIncrementID)
{
    Baju ObjekAwal_5;
    ObjekAwal_5.set_id(autoIncrementID);
    ObjekAwal_5.set_nama_produk("BukaPuasa");
    ObjekAwal_5.set_stok_produk(50);
    ObjekAwal_5.set_harga_produk(1000);
    ObjekAwal_5.set_jenis("Sarung");
    ObjekAwal_5.set_bahan("Karton");
    ObjekAwal_5.set_warna("Jingga");
    ObjekAwal_5.set_untuk("Kucing");
    ObjekAwal_5.set_size('M');
    ObjekAwal_5.set_merk("Valve");
    listBaju.push_back(ObjekAwal_5);
    autoIncrementID++;
}

// Fungsi untuk menampilkan daftar baju dalam format tabel
void tampilkanBaju(list<Baju> &listBaju)
{
    cout << "\n[=== DATA BAJU HEWAN ===]\n";

    // Menentukan panjang maksimum untuk setiap kolom
    int id_terpanjang = 2;
    int nama_produk_terpanjang = 12;
    int jenis_terpanjang = 5;
    int bahan_terpanjang = 5;
    int warna_terpanjang = 5;
    int untuk_terpanjang = 5;
    int merk_terpanjang = 4;
    int harga_produk_terpanjang = 5;
    int stok_produk_terpanjang = 4;
    int size_terpanjang = 1;

    // Loop untuk mencari panjang maksimum setiap atribut
    for (list<Baju>::iterator it = listBaju.begin(); it != listBaju.end(); ++it)
    {
        int id_panjang = to_string(it->get_id()).length();
        int nama_panjang = it->get_nama_produk().length();
        int jenis_panjang = it->get_jenis().length();
        int bahan_panjang = it->get_bahan().length();
        int warna_panjang = it->get_warna().length();
        int untuk_panjang = it->get_untuk().length();
        int merk_panjang = it->get_merk().length();
        int harga_panjang = to_string(it->get_harga_produk()).length();
        int stok_panjang = to_string(it->get_stok_produk()).length();

        if (id_panjang > id_terpanjang)
            id_terpanjang = id_panjang;
        if (nama_panjang > nama_produk_terpanjang)
            nama_produk_terpanjang = nama_panjang;
        if (jenis_panjang > jenis_terpanjang)
            jenis_terpanjang = jenis_panjang;
        if (bahan_panjang > bahan_terpanjang)
            bahan_terpanjang = bahan_panjang;
        if (warna_panjang > warna_terpanjang)
            warna_terpanjang = warna_panjang;
        if (untuk_panjang > untuk_terpanjang)
            untuk_terpanjang = untuk_panjang;
        if (merk_panjang > merk_terpanjang)
            merk_terpanjang = merk_panjang;
        if (harga_panjang > harga_produk_terpanjang)
            harga_produk_terpanjang = harga_panjang;
        if (stok_panjang > stok_produk_terpanjang)
            stok_produk_terpanjang = stok_panjang;
    }

    int total_panjang = id_terpanjang + nama_produk_terpanjang + jenis_terpanjang +
                        bahan_terpanjang + warna_terpanjang + untuk_terpanjang + merk_terpanjang +
                        harga_produk_terpanjang + stok_produk_terpanjang + size_terpanjang + 23 - 9;

    // Cetak garis pemisah
    cout << "@";
    for (int i = 0; i < total_panjang; i++)
        cout << "=";
    cout << "@\n";

    // Cetak header
    cout << "| ID ";
    for (int i = 0; i < id_terpanjang - 2; i++)
        cout << " ";
    cout << "Nama Produk ";
    for (int i = 0; i < nama_produk_terpanjang - 11; i++)
        cout << " ";
    cout << "Jenis ";
    for (int i = 0; i < jenis_terpanjang - 5; i++)
        cout << " ";
    cout << "Bahan ";
    for (int i = 0; i < bahan_terpanjang - 5; i++)
        cout << " ";
    cout << "Warna ";
    for (int i = 0; i < warna_terpanjang - 5; i++)
        cout << " ";
    cout << "Untuk ";
    for (int i = 0; i < untuk_terpanjang - 5; i++)
        cout << " ";
    cout << "Merk ";
    for (int i = 0; i < merk_terpanjang - 4; i++)
        cout << " ";
    cout << "Harga ";
    for (int i = 0; i < harga_produk_terpanjang - 5; i++)
        cout << " ";
    cout << "Stok ";
    for (int i = 0; i < stok_produk_terpanjang - 4; i++)
        cout << " ";
    cout << "Size |\n";

    // Cetak garis pemisah
    cout << "@";
    for (int i = 0; i < total_panjang; i++)
        cout << "=";
    cout << "@\n";

    // Cetak data baju
    for (list<Baju>::iterator it = listBaju.begin(); it != listBaju.end(); ++it)
    {
        cout << "| " << it->get_id() << " ";
        for (int i = 0; i < id_terpanjang - to_string(it->get_id()).length(); i++)
            cout << " ";
        cout << it->get_nama_produk() << " ";
        for (int i = 0; i < nama_produk_terpanjang - it->get_nama_produk().length(); i++)
            cout << " ";
        cout << it->get_jenis() << " ";
        for (int i = 0; i < jenis_terpanjang - it->get_jenis().length(); i++)
            cout << " ";
        cout << it->get_bahan() << " ";
        for (int i = 0; i < bahan_terpanjang - it->get_bahan().length(); i++)
            cout << " ";
        cout << it->get_warna() << " ";
        for (int i = 0; i < warna_terpanjang - it->get_warna().length(); i++)
            cout << " ";
        cout << it->get_untuk() << " ";
        for (int i = 0; i < untuk_terpanjang - it->get_untuk().length(); i++)
            cout << " ";
        cout << it->get_merk() << " ";
        for (int i = 0; i < merk_terpanjang - it->get_merk().length(); i++)
            cout << " ";
        cout << it->get_harga_produk() << " ";
        for (int i = 0; i < harga_produk_terpanjang - to_string(it->get_harga_produk()).length(); i++)
            cout << " ";
        cout << it->get_stok_produk() << " ";
        for (int i = 0; i < stok_produk_terpanjang - to_string(it->get_stok_produk()).length(); i++)
            cout << " ";
        cout << it->get_size() << "    |\n";
    }

    // Cetak garis pemisah
    cout << "@";
    for (int i = 0; i < total_panjang; i++)
        cout << "=";
    cout << "@\n";
}

int main()
{
    list<Baju> listBaju;
    int autoIncrementID = 1;

    Baju Babajuan;
    ObjekPertama(listBaju, autoIncrementID);
    ObjekKedua(listBaju, autoIncrementID);
    ObjekKetiga(listBaju, autoIncrementID);
    ObjekKeempat(listBaju, autoIncrementID);
    ObjekKelima(listBaju, autoIncrementID);

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

    tampilkanBaju(listBaju);

    return 0;
}