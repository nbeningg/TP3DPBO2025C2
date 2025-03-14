# KELAS KOMPONEN
class Komponen:
    def __init__(self, merk="", nama="", produsen=""):
        self.__merk = merk
        self.__nama = nama
        self.__produsen = produsen
    
    def set_merk(self, merk):
        self.__merk = merk
    
    def set_nama(self, nama):
        self.__nama = nama
    
    def set_produsen(self, produsen):
        self.__produsen = produsen
    
    def get_merk(self):
        return self.__merk
    
    def get_nama(self):
        return self.__nama
    
    def get_produsen(self):
        return self.__produsen
    
    def tampilkan_info(self):
        print("Merk:", self.__merk)
        print("Nama:", self.__nama)
        print("Produsen:", self.__produsen)