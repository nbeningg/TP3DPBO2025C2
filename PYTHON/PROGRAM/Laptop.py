# KELAS LAPTOP
from Layar import Layar
from Keyboard import Keyboard
from Baterai import Baterai

class Laptop:
    def __init__(self, nama="", jenis=""):
        self.__nama = nama
        self.__jenis = jenis
        self.__layar = Layar()
        self.__keyboard = Keyboard()
        self.__baterai = Baterai()
        self.__deskripsi_masalah = ""
    
    def set_nama(self, nama):
        self.__nama = nama
    
    def set_jenis(self, jenis):
        self.__jenis = jenis
    
    def set_layar(self, layar):
        self.__layar = layar
    
    def set_keyboard(self, keyboard):
        self.__keyboard = keyboard
    
    def set_baterai(self, baterai):
        self.__baterai = baterai
    
    def set_deskripsi_masalah(self, deskripsi_masalah):
        self.__deskripsi_masalah = deskripsi_masalah
    
    def get_nama(self):
        return self.__nama
    
    def get_jenis(self):
        return self.__jenis
    
    def get_layar(self):
        return self.__layar
    
    def get_keyboard(self):
        return self.__keyboard
    
    def get_baterai(self):
        return self.__baterai
    
    def get_deskripsi_masalah(self):
        return self.__deskripsi_masalah
    
    def tampilkan_info(self):
        print("Nama:", self.__nama)
        print("Jenis:", self.__jenis)
        print("Masalah:", self.__deskripsi_masalah)
        
        print("\n=== LAYAR ===")
        self.__layar.tampilkan_info()
        
        print("\n=== KEYBOARD ===")
        self.__keyboard.tampilkan_info()
        
        print("\n=== BATERAI ===")
        self.__baterai.tampilkan_info()