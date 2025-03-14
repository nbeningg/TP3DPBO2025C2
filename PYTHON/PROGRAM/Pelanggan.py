# KELAS PELANGGAN
from Manusia import Manusia
from Laptop import Laptop

class Pelanggan(Manusia):
    def __init__(self, nama="", no_telepon="", alamat="", id_pelanggan=""):
        Manusia.__init__(self, nama, no_telepon, alamat)
        self.__id_pelanggan = id_pelanggan
        self.__laptop = Laptop()
    
    def set_id_pelanggan(self, id_pelanggan):
        self.__id_pelanggan = id_pelanggan
    
    def set_laptop(self, laptop):
        self.__laptop = laptop
    
    def get_id_pelanggan(self):
        return self.__id_pelanggan
    
    def get_laptop(self):
        return self.__laptop
    
    def tampilkan_info(self):
        print("ID Pelanggan:", self.__id_pelanggan)
        Manusia.tampilkan_info(self)
        
        if len(self.__laptop.get_nama()) > 0:
            print("\n[ SPESIFIKASI LAPTOP PELANGGAN ]")
            self.__laptop.tampilkan_info()