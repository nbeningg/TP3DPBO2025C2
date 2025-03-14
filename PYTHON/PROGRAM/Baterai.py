# KELAS BATERAI
from Komponen import Komponen

class Baterai(Komponen):
    def __init__(self, merk="", nama="", produsen="", kapasitas=0, jenis_baterai="", siklus_charge=0, kesehatan_persen=0):
        Komponen.__init__(self, merk, nama, produsen)
        self.__kapasitas = kapasitas
        self.__jenis_baterai = jenis_baterai
        self.__siklus_charge = siklus_charge
        self.__kesehatan_persen = kesehatan_persen
    
    def set_kapasitas(self, kapasitas):
        self.__kapasitas = kapasitas
    
    def set_jenis_baterai(self, jenis_baterai):
        self.__jenis_baterai = jenis_baterai
    
    def set_siklus_charge(self, siklus_charge):
        self.__siklus_charge = siklus_charge
    
    def set_kesehatan_persen(self, kesehatan_persen):
        self.__kesehatan_persen = kesehatan_persen
    
    def get_kapasitas(self):
        return self.__kapasitas
    
    def get_jenis_baterai(self):
        return self.__jenis_baterai
    
    def get_siklus_charge(self):
        return self.__siklus_charge
    
    def get_kesehatan_persen(self):
        return self.__kesehatan_persen
    
    def tampilkan_info(self):
        Komponen.tampilkan_info(self)
        print("Kapasitas:", self.__kapasitas, "mAh")
        print("Jenis Baterai:", self.__jenis_baterai)
        print("Siklus Charge:", self.__siklus_charge)
        print("Kesehatan:", self.__kesehatan_persen, "%")