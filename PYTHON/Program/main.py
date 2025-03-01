# IMPORT BAJU
from Baju import Baju

# LIST BAJU
ListBaju = []
autoIncrementID = 6

# HARDCODE 5 OBJEK PERTAMA
HardCodeString = [
    "SweaterPuppy", "Winter", "Wool", "Merah", "Anjing", "PetFashion",
    "RaincoatKitty", "Waterproof", "Polyester", "Biru", "Kucing", "MeowStyle",
    "HoodieBulldog", "Casual", "Cotton", "Hitam", "Anjing", "DogWear",
    "DressPoodle", "Fancy", "Satin", "Pink", "Anjing", "GlamPets",
    "TuxedoKitten", "Formal", "Silk", "Abu-abu", "Kucing", "ElegantPaws"
]

HardCodeInt = [150000, 25, 180000, 20, 200000, 15, 250000, 10, 300000, 5]
HardCodeSize = ['S', 'M', 'L', 'M', 'S']
HardCodeId = [1, 2, 3, 4, 5]

for i in range(5):
    IsiHardcodeBaju = Baju(
        HardCodeString[i * 6 + 4],  
        HardCodeSize[i],            
        HardCodeString[i * 6 + 5]   
    )

    IsiHardcodeBaju.set_id(HardCodeId[i])
    IsiHardcodeBaju.set_nama_produk(HardCodeString[i * 6])
    IsiHardcodeBaju.set_stok_produk(HardCodeInt[i * 2 + 1])
    IsiHardcodeBaju.set_harga_produk(HardCodeInt[i * 2])
    IsiHardcodeBaju.set_jenis(HardCodeString[i * 6 + 1])
    IsiHardcodeBaju.set_bahan(HardCodeString[i * 6 + 2])
    IsiHardcodeBaju.set_warna(HardCodeString[i * 6 + 3])

    ListBaju.append(IsiHardcodeBaju)

# INPUTAN
print("Mo input berapa banyak:")
banyakInput = int(input())

for i in range(banyakInput):
    InputBaju = Baju()

    InputNamaProduk = input().strip()
    InputStokProduk = int(input().strip())
    InputHargaProduk = int(input().strip())
    InputJenisProduk = input().strip()
    InputBahanProduk = input().strip()
    InputWarnaProduk = input().strip()
    InputUntukProduk = input().strip()
    InputSizeProduk = input().strip()[0]
    InputMerkProduk = input().strip()

    InputBaju.set_id(autoIncrementID)
    InputBaju.set_nama_produk(InputNamaProduk)
    InputBaju.set_stok_produk(InputStokProduk)
    InputBaju.set_harga_produk(InputHargaProduk)
    InputBaju.set_jenis(InputJenisProduk)
    InputBaju.set_bahan(InputBahanProduk)
    InputBaju.set_warna(InputWarnaProduk)
    InputBaju.set_untuk(InputUntukProduk)
    InputBaju.set_size(InputSizeProduk)
    InputBaju.set_merk(InputMerkProduk)

    ListBaju.append(InputBaju)
    autoIncrementID = autoIncrementID + 1


isi_header = ["ID", "Nama Produk", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk", "Harga", "Stok"]
    
# Hitung lebar maksimum untuk setiap kolom berdasarkan data di ListBaju
panjang_header = [len(header) for header in isi_header]

b = Baju()

for b in ListBaju:
    panjang_header[0] = max(panjang_header[0], len(str(b.get_id())))
    panjang_header[1] = max(panjang_header[1], len(b.get_nama_produk()))
    panjang_header[2] = max(panjang_header[2], len(b.get_jenis()))
    panjang_header[3] = max(panjang_header[3], len(b.get_bahan()))
    panjang_header[4] = max(panjang_header[4], len(b.get_warna()))
    panjang_header[5] = max(panjang_header[5], len(b.get_untuk()))
    panjang_header[6] = max(panjang_header[6], len(b.get_size()))
    panjang_header[7] = max(panjang_header[7], len(b.get_merk()))
    panjang_header[8] = max(panjang_header[8], len(str(b.get_harga_produk())))
    panjang_header[9] = max(panjang_header[9], len(str(b.get_stok_produk())))

# Garis pemisah tabel
line = "@" + "@".join("=" * (w + 2) for w in panjang_header) + "@"

# Cetak header tabel
print(line)
print("| ", end="")
for i in range(len(isi_header)):
    print(isi_header[i] + " " * (panjang_header[i] - len(isi_header[i])) + " | ", end="")
print()
print(line)

# Cetak isi tabel
for b in ListBaju:
    print("| ", end="")
    print(str(b.get_id()) + " " * (panjang_header[0] - len(str(b.get_id()))) + " | ", end="")
    print(b.get_nama_produk() + " " * (panjang_header[1] - len(b.get_nama_produk())) + " | ", end="")
    print(b.get_jenis() + " " * (panjang_header[2] - len(b.get_jenis())) + " | ", end="")
    print(b.get_bahan() + " " * (panjang_header[3] - len(b.get_bahan())) + " | ", end="")
    print(b.get_warna() + " " * (panjang_header[4] - len(b.get_warna())) + " | ", end="")
    print(b.get_untuk() + " " * (panjang_header[5] - len(b.get_untuk())) + " | ", end="")
    print(b.get_size() + " " * (panjang_header[6] - len(b.get_size())) + " | ", end="")
    print(b.get_merk() + " " * (panjang_header[7] - len(b.get_merk())) + " | ", end="")
    print(str(b.get_harga_produk()) + " " * (panjang_header[8] - len(str(b.get_harga_produk()))) + " | ", end="")
    print(str(b.get_stok_produk()) + " " * (panjang_header[9] - len(str(b.get_stok_produk()))) + " | ")
    
# Garis akhir tabel
print(line)