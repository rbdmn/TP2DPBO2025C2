from PetShop import PetShop

class Aksesoris(PetShop):
      
    # ATRIBUT-ATRIBUT YANG MAU DIINISIALISASIKAN
    __jenis = ""
    __bahan = ""
    __warna = ""

     # CONSTRUCTOR DENGAN PARAMETER UNTUK ME-NEW KAN
    def __init__(self, jenis = "", bahan = "", warna = ""):
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna

    # Getter
    def get_jenis(self): return self.__jenis
    def get_bahan(self): return self.__bahan
    def get_warna(self): return self.__warna

    # Setter
    def set_jenis(self, jenis): self.__jenis = jenis
    def set_bahan(self, bahan): self.__bahan = bahan
    def set_warna(self, warna): self.__warna = warna

    # DESTRUKTOR
    # def __del__(self):
    #     print("contoh jika pakai destructor")