from Aksesoris import Aksesoris

class Baju(Aksesoris):
      
    # ATRIBUT-ATRIBUT YANG MAU DIINISIALISASIKAN
    __untuk = ""
    __size = '-'
    __merk = ""

     # CONSTRUCTOR DENGAN PARAMETER UNTUK ME-NEW KAN
    def __init__(self, untuk = "", size = '', merk = ""):
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk

    # Getter
    def get_untuk(self): return self.__untuk
    def get_size(self): return self.__size
    def get_merk(self): return self.__merk

    # Setter
    def set_untuk(self, untuk): self.__untuk = untuk
    def set_size(self, size): self.__size = size
    def set_merk(self, merk): self.__merk = merk

    # DESTRUKTOR
    # def __del__(self):
    #     print("asdsr")