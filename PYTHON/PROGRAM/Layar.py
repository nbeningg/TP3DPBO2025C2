# KELAS LAYAR
from Komponen import Komponen

class Layar(Komponen):
    def __init__(self, merk="", nama="", produsen="", ukuran=0, resolusi="", jenis_panel="", touchscreen=""):
        Komponen.__init__(self, merk, nama, produsen)
        self.__ukuran = ukuran
        self.__resolusi = resolusi
        self.__jenis_panel = jenis_panel
        self.__touchscreen = touchscreen
    
    def set_ukuran(self, ukuran):
        self.__ukuran = ukuran
    
    def set_resolusi(self, resolusi):
        self.__resolusi = resolusi
    
    def set_jenis_panel(self, jenis_panel):
        self.__jenis_panel = jenis_panel
    
    def set_touchscreen(self, touchscreen):
        self.__touchscreen = touchscreen
    
    def get_ukuran(self):
        return self.__ukuran
    
    def get_resolusi(self):
        return self.__resolusi
    
    def get_jenis_panel(self):
        return self.__jenis_panel
    
    def get_touchscreen(self):
        return self.__touchscreen
    
    def tampilkan_info(self):
        Komponen.tampilkan_info(self)
        print("Ukuran:", self.__ukuran, "inch")
        print("Resolusi:", self.__resolusi)
        print("Jenis Panel:", self.__jenis_panel)
        print("Touchscreen:", self.__touchscreen)