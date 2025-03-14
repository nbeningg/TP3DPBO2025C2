# KELAS TEKNISI
from Manusia import Manusia

class Teknisi(Manusia):
    def __init__(self, nama="", no_telepon="", alamat="", id_teknisi="", spesialisasi="", tingkat_keahlian=""):
        Manusia.__init__(self, nama, no_telepon, alamat)
        self.__id_teknisi = id_teknisi
        self.__spesialisasi = spesialisasi
        self.__tingkat_keahlian = tingkat_keahlian
    
    def set_id_teknisi(self, id_teknisi):
        self.__id_teknisi = id_teknisi
    
    def set_spesialisasi(self, spesialisasi):
        self.__spesialisasi = spesialisasi
    
    def set_tingkat_keahlian(self, tingkat_keahlian):
        self.__tingkat_keahlian = tingkat_keahlian
    
    def get_id_teknisi(self):
        return self.__id_teknisi
    
    def get_spesialisasi(self):
        return self.__spesialisasi
    
    def get_tingkat_keahlian(self):
        return self.__tingkat_keahlian
    
    def tampilkan_info(self):
        print("ID Teknisi:", self.__id_teknisi)
        Manusia.tampilkan_info(self)
        print("Spesialisasi:", self.__spesialisasi)
        print("Level:", self.__tingkat_keahlian)