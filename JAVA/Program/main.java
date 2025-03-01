/* Saya Abdurrahman Rauf Budiman dengan NIM 2301102 mengerjakan soal Tugas Praktikum 2
mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin. */

import java.util.Scanner;
import java.util.ArrayList;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Baju> listBaju = new ArrayList<>();

        System.out.println("TUGAS PRAKTIKUM 2");

        boolean programJalan = true;
        int autoIncrementID = 6;
        int pilihanMenu = 0;

        String HardCodeString[] = { "ShihTzuPuppy", "Original", "Kering", "Biru", "Anjing", "RoyalCanin",
                "GermanShepherd", "Premium", "Kering", "Golden", "Anjing", "RoyalCanin",
                "MalteseAdult", "Premium", "Kering", "Golden", "Anjing", "RoyalCanin",
                "GrassLands", "Premium", "Daging", "Hijau", "Kucing", "Acana",
                "WildPrairie", "Original", "Daging", "Jingga", "Anjing", "Acana" };

        int HardCodeInt[] = { 300000, 20, 250000, 15, 350000, 10, 400000, 5, 100000, 35 };

        char HardCodeSize[] = { 'L', 'M', 'M', 'S', 'S' };

        int HardCodeID[] = { 1, 2, 3, 4, 5 };

        for (int i = 0; i < 5; i++) {
            Baju IsiHardcodeBaju = new Baju();
            IsiHardcodeBaju.set_id(HardCodeID[i]);
            IsiHardcodeBaju.set_nama_produk(HardCodeString[i * 6]);
            IsiHardcodeBaju.set_jenis(HardCodeString[i * 6 + 1]);
            IsiHardcodeBaju.set_bahan(HardCodeString[i * 6 + 2]);
            IsiHardcodeBaju.set_warna(HardCodeString[i * 6 + 3]);
            IsiHardcodeBaju.set_untuk(HardCodeString[i * 6 + 4]);
            IsiHardcodeBaju.set_merk(HardCodeString[i * 6 + 5]);
            IsiHardcodeBaju.set_harga_produk(HardCodeInt[i * 2]);
            IsiHardcodeBaju.set_stok_produk(HardCodeInt[i * 2 + 1]);
            IsiHardcodeBaju.set_size(HardCodeSize[i]);

            listBaju.add(IsiHardcodeBaju);
        }

        while (programJalan == true) {
            System.out.println("@==============@");
            System.out.println("| JAVA VERSION |");
            System.out.println("@==============@");
            System.out.println("| 1. ADD       |");
            System.out.println("| 2. SHOW      |");
            System.out.println("| 3. EXIT      |");
            System.out.println("@==============@");
            System.out.print("Silahkan pilih:");

            pilihanMenu = sc.nextInt();

            switch (pilihanMenu) {
                case 1:
                    // ATRIBUT CLASS PETSHOP
                    int id;
                    String nama_produk;
                    int harga_produk;
                    int stok_produk;

                    // ATRIBUT CLASS AKSESORIS
                    String jenis, bahan, warna;

                    // ATRIBUT CLASS BAJU
                    String untuk, merk;
                    char size;

                    // INPUT DATA
                    sc.nextLine();
                    nama_produk = sc.nextLine();
                    harga_produk = sc.nextInt();
                    stok_produk = sc.nextInt();
                    sc.nextLine();
                    jenis = sc.nextLine();
                    bahan = sc.nextLine();
                    warna = sc.nextLine();
                    untuk = sc.nextLine();
                    merk = sc.nextLine();
                    size = sc.next().charAt(0);

                    // MEMBUAT OBJEK DAN MENGGUNAKAN SETTER
                    Baju temp = new Baju();
                    temp.set_id(autoIncrementID);
                    temp.set_nama_produk(nama_produk);
                    temp.set_harga_produk(harga_produk);
                    temp.set_stok_produk(stok_produk);
                    temp.set_jenis(jenis);
                    temp.set_bahan(bahan);
                    temp.set_warna(warna);
                    temp.set_untuk(untuk);
                    temp.set_size(size);
                    temp.set_merk(merk);

                    // MENAMBAHKAN KE ARRAYLIST
                    listBaju.add(temp);
                    autoIncrementID++;

                    System.out.println("Data berhasil ditambahkan!");
                    break;
                case 2:
                    System.out.println("\n[=== DATA BAJU HEWAN ===]");

                    // Menentukan panjang maksimum untuk setiap kolom secara manual
                    int id_terpanjang = 2; // Minimal panjang "ID"
                    int nama_produk_terpanjang = "Nama Produk".length();
                    int jenis_terpanjang = "Jenis".length();
                    int bahan_terpanjang = "Bahan".length();
                    int warna_terpanjang = "Warna".length();
                    int untuk_terpanjang = "Untuk".length();
                    int merk_terpanjang = "Merk".length();
                    int harga_produk_terpanjang = "Harga".length();
                    int stok_produk_terpanjang = "Stok".length();
                    int size_terpanjang = "Size".length();

                    // Loop untuk mencari panjang maksimum setiap atribut
                    for (Baju show : listBaju) {
                        int id_panjang = String.valueOf(show.get_id()).length();
                        int nama_panjang = show.get_nama_produk().length();
                        int jenis_panjang = show.get_jenis().length();
                        int bahan_panjang = show.get_bahan().length();
                        int warna_panjang = show.get_warna().length();
                        int untuk_panjang = show.get_untuk().length();
                        int merk_panjang = show.get_merk().length();
                        int harga_panjang = String.valueOf(show.get_harga_produk()).length();
                        int stok_panjang = String.valueOf(show.get_stok_produk()).length();

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
                        size_terpanjang = 1; // Char hanya 1 karakter
                    }

                    System.out.print("@");
                    // Cetak Garis Pemisah
                    for (int i = 0; i < id_terpanjang + nama_produk_terpanjang + jenis_terpanjang +
                            bahan_terpanjang + warna_terpanjang + untuk_terpanjang + merk_terpanjang +
                            harga_produk_terpanjang + stok_produk_terpanjang + size_terpanjang + 23; i++) {
                        System.out.print("=");
                    }
                    System.out.print("@");
                    System.out.println();
                    System.out.print("| ");

                    // Cetak Header dengan Spasi Manual
                    System.out.print("ID  ");
                    for (int i = 0; i < id_terpanjang - 2; i++)
                        System.out.print(" ");
                    System.out.print("Nama Produk  ");
                    for (int i = 0; i < nama_produk_terpanjang - "Nama Produk".length(); i++)
                        System.out.print(" ");
                    System.out.print("Jenis  ");
                    for (int i = 0; i < jenis_terpanjang - "Jenis".length(); i++)
                        System.out.print(" ");
                    System.out.print("Bahan  ");
                    for (int i = 0; i < bahan_terpanjang - "Bahan".length(); i++)
                        System.out.print(" ");
                    System.out.print("Warna  ");
                    for (int i = 0; i < warna_terpanjang - "Warna".length(); i++)
                        System.out.print(" ");
                    System.out.print("Untuk  ");
                    for (int i = 0; i < untuk_terpanjang - "Untuk".length(); i++)
                        System.out.print(" ");
                    System.out.print("Merk  ");
                    for (int i = 0; i < merk_terpanjang - "Merk".length(); i++)
                        System.out.print(" ");
                    System.out.print("Harga  ");
                    for (int i = 0; i < harga_produk_terpanjang - "Harga".length(); i++)
                        System.out.print(" ");
                    System.out.print("Stok  ");
                    for (int i = 0; i < stok_produk_terpanjang - "Stok".length(); i++)
                        System.out.print(" ");
                    System.out.print("Size");
                    System.out.print(" |");
                    System.out.println();

                    // Cetak Garis Pemisah
                    System.out.print("@");
                    for (int i = 0; i < id_terpanjang + nama_produk_terpanjang + jenis_terpanjang +
                            bahan_terpanjang + warna_terpanjang + untuk_terpanjang + merk_terpanjang +
                            harga_produk_terpanjang + stok_produk_terpanjang + size_terpanjang + 23; i++) {
                        System.out.print("=");
                    }
                    System.out.print("@");
                    System.out.println();

                    // Cetak Data dengan Spasi Manual
                    for (Baju show : listBaju) {
                        System.out.print("| ");
                        System.out.print(show.get_id() + "  ");
                        for (int i = 0; i < id_terpanjang - String.valueOf(show.get_id()).length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_nama_produk() + "  ");
                        for (int i = 0; i < nama_produk_terpanjang - show.get_nama_produk().length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_jenis() + "  ");
                        for (int i = 0; i < jenis_terpanjang - show.get_jenis().length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_bahan() + "  ");
                        for (int i = 0; i < bahan_terpanjang - show.get_bahan().length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_warna() + "  ");
                        for (int i = 0; i < warna_terpanjang - show.get_warna().length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_untuk() + "  ");
                        for (int i = 0; i < untuk_terpanjang - show.get_untuk().length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_merk() + "  ");
                        for (int i = 0; i < merk_terpanjang - show.get_merk().length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_harga_produk() + "  ");
                        for (int i = 0; i < harga_produk_terpanjang
                                - String.valueOf(show.get_harga_produk()).length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_stok_produk() + "  ");
                        for (int i = 0; i < stok_produk_terpanjang
                                - String.valueOf(show.get_stok_produk()).length(); i++)
                            System.out.print(" ");
                        System.out.print(show.get_size());
                        for (int i = 0; i < 3; i++) {
                            System.out.print(" ");
                        }
                        System.out.print(" |");
                        System.out.println();
                    }

                    // Cetak Garis Pemisah
                    System.out.print("@");
                    for (int i = 0; i < id_terpanjang + nama_produk_terpanjang + jenis_terpanjang +
                            bahan_terpanjang + warna_terpanjang + untuk_terpanjang + merk_terpanjang +
                            harga_produk_terpanjang + stok_produk_terpanjang + size_terpanjang + 23; i++) {
                        System.out.print("=");
                    }
                    System.out.print("@");
                    System.out.println();
                    break;

                case 3:
                    programJalan = false;
                    System.out.println("bye bye");
                    break;

                default:
                    System.out.println("gaada inputan itu uy");
            }
        }
    }
}