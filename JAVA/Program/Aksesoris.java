/* Saya Abdurrahman Rauf Budiman dengan NIM 2301102 mengerjakan soal Tugas Praktikum 2
mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin. */

public class Aksesoris extends PetShop{
    
    private String jenis;
    private String bahan;
    private String warna;

    public Aksesoris()
    {
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    // Constructor dengan parameter.
    public Aksesoris(String jenis, String bahan, String warna) {
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    /* Getter and Setter (ACCESSOR) */

    // Get id
    public String get_jenis() {
        return this.jenis;
    }

    // Set id
    public void set_jenis(String jenis) {
        this.jenis = jenis;
    }

    // Get id
    public String get_bahan() {
        return this.bahan;
    }

    // Set id
    public void set_bahan(String bahan) {
        this.bahan = bahan;
    }

    // Get id
    public String get_warna() {
        return this.warna;
    }

    // Set id
    public void set_warna(String warna) {
        this.warna = warna;
    }
}
