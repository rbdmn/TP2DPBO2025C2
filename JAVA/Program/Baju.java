/* Saya Abdurrahman Rauf Budiman dengan NIM 2301102 mengerjakan soal Tugas Praktikum 2
mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin. */

public class Baju extends Aksesoris{
    
    private String untuk;
    private char size;
    private String merk;

    public Baju()
    {
        this.untuk = "";
        this.size = '-';
        this.merk = "";
    }

    // Constructor dengan parameter.
    public Baju(String untuk, char size, String merk) {
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    // Get id
    public String get_untuk() {
        return this.untuk;
    }

    // Set id
    public void set_untuk(String untuk) {
        this.untuk = untuk;
    }

    // Get id
    public char get_size() {
        return this.size;
    }

    // Set id
    public void set_size(char size) {
        this.size = size;
    }

    // Get id
    public String get_merk() {
        return this.merk;
    }

    // Set id
    public void set_merk(String merk) {
        this.merk = merk;
    }
}
