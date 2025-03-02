# JANJI
 Saya Abdurrahman Rauf Budiman dengan NIM 2301102 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# DIAGRAM
![Diagram](https://github.com/user-attachments/assets/2db268e1-e9f8-47bb-a71f-95a0b36bde65)

Bisa terlihat pada gambar bahwa terdapat 3 class yang saling berhubungan. Dimulai dari Petshop orang tua dari Aksesoris, dan Baju orang tua dari Aksesoris. (Baju > Aksesoris > PetShop)

# Desain List Produk Baju

## Struktur Program
Berikut struktur desain pada tiap bahasa dan deskripsinya:

### **Atribut:**
| Atribut        | Deskripsi                              | Class     |
|----------------|----------------------------------------|-----------|
| `nama_produk`  | Nama dari produk baju                  | PetShop   |
| `jenis`        | Jenis baju (Kasual, Rumahan, dll.)     | Aksesoris |
| `bahan`        | Bahan dari baju (Cotton, Silk, dll.)   | Aksesoris |
| `warna`        | Warna dari baju                        | Aksesoris |
| `untuk`        | Target hewan (Anjing, Kucing, dll.)    | Baju      |
| `merk`         | Merk dari baju                         | Baju      |
| `harga_produk` | Harga produk dalam Rupiah              | PetShop   |
| `stok_produk`  | Jumlah stok produk yang tersedia       | PetShop   |
| `size`         | Ukuran dari baju (S, M, L, dll.)       | Baju      |
| `foto_produk`  | Nama file gambar dari produk           | PetShop   |

### **Method:**
| Method           | Deskripsi                                      |
|-----------------|----------------------------------------------|
| `__construct()` | Konstruktor untuk membuat objek |
| `set_nama_produk()` | Atur nama produk  |
| `get_nama_produk()` | Ambil nama produk |
| `set_jenis()` | Atur jenis baju  |
| `get_jenis()` | Ambil jenis baju  |
| `set_bahan()` | Atur bahan baju  |
| `get_bahan()` | Ambil bahan baju  |
| `set_warna()` | Atur warna baju  |
| `get_warna()` | Ambil warna baju  |
| `set_untuk()` | Atur target pengguna baju  |
| `get_untuk()` | Ambil target pengguna baju  |
| `set_merk()` | Atur merk baju  |
| `get_merk()` | Ambil merk baju  |
| `set_harga_produk()` | Atur harga produk  |
| `get_harga_produk()` | Ambil harga produk  |
| `set_stok_produk()` | Atur jumlah stok  |
| `get_stok_produk()` | Ambil jumlah stok  |
| `set_size()` | Atur ukuran baju  |
| `get_size()` | Ambil ukuran baju  |
| `set_foto_produk()` | Atur gambar produk  |
| `get_foto_produk()` | Ambil gambar produk  |

## Alur Program

Program ini alurnya mulai dari meng inisiasi objek dari kelas 'Baju' dan mengisi nilai nilai tersebut dengan atributnya. Cara mengisinya dengan menggunakan method setter. Lalu memasukkan objek objek yang sudah diisi ke dalam suatu list. Di dalam list sudah ada 5 objek awal (Hardcoded) sisanya inputan dari user. Setelah input dari user akan langsung muncul tabel yang berbentuk dinamis dan menampilkan objek objek yang sudah terdaftar pada list.
