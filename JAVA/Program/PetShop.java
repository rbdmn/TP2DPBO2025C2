/* Saya Abdurrahman Rauf Budiman dengan NIM 2301102 mengerjakan soal Tugas Praktikum 2
mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin. */

public class PetShop {

    private int id;
    private String nama_produk;
    private double harga_produk;
    private int stok_produk;

    public PetShop()
    {
        this.id = 0;
        this.nama_produk = "";
        this.harga_produk = 0.0;
        this.stok_produk = 0;
    }

    // Constructor dengan parameter.
    public PetShop(int id, String nama_produk, double harga_produk, int stok_produk) {
        this.id = id;
        this.nama_produk = nama_produk;
        this.harga_produk = harga_produk;
        this.stok_produk = stok_produk;
    }

    /* Getter and Setter (ACCESSOR) */

    // Get id
    public int get_id() {
        return this.id;
    }

    // Set id
    public void set_id(int id) {
        this.id = id;
    }

    // Get nama produk
    public String get_nama_produk() {
        return this.nama_produk;
    }

    // Set nama produk
    public void set_nama_produk(String nama_produk) {
        this.nama_produk = nama_produk;
    }

    // Get harga produk
    public double get_harga_produk() {
        return this.harga_produk;
    }

    // Set harga produk
    public void set_harga_produk(double harga_produk) {
        this.harga_produk = harga_produk;
    }

    // Get kategori produk
    public int get_stok_produk() {
        return this.stok_produk;
    }

    // Set kategori produk
    public void set_stok_produk(int stok_produk) {
        this.stok_produk = stok_produk;
    }
}