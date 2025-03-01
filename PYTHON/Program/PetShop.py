class PetShop:

    # ATRIBUT-ATRIBUT YANG MAU DIINISIALISASIKAN
    __id = 0
    __nama_produk = ""
    __stok_produk = 0
    __harga_produk = 0.0

    # CONSTRUCTOR DENGAN PARAMETER UNTUK ME-NEW KAN
    def __init__(self, id = 0, namaProduk = "", stokProduk = 0, hargaProduk = 0.0):
        self.__id = id
        self.__nama_produk = namaProduk
        self.__stok_produk = stokProduk
        self.__harga_produk = hargaProduk

    # Getter
    def get_id(self): return self.__id
    def get_nama_produk(self): return self.__nama_produk
    def get_stok_produk(self): return self.__stok_produk
    def get_harga_produk(self): return self.__harga_produk

    # Setter
    def set_id(self, id): self.__id = id
    def set_nama_produk(self, namaProduk): self.__nama_produk = namaProduk
    def set_stok_produk(self, stokProduk): self.__stok_produk = stokProduk
    def set_harga_produk(self, hargaProduk): self.__harga_produk = hargaProduk

    # DESTRUKTOR
    # def __del__(self):
    #     print("contoh jika pakai destructor")