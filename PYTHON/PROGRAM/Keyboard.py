# KELAS KEYBOARD
from Komponen import Komponen

class Keyboard(Komponen):
    def __init__(self, merk="", nama="", produsen="", tipe_keyboard="", layout="", backlit=""):
        Komponen.__init__(self, merk, nama, produsen)
        self.__tipe_keyboard = tipe_keyboard
        self.__layout = layout
        self.__backlit = backlit
    
    def set_tipe_keyboard(self, tipe_keyboard):
        self.__tipe_keyboard = tipe_keyboard
    
    def set_layout(self, layout):
        self.__layout = layout
    
    def set_backlit(self, backlit):
        self.__backlit = backlit
    
    def get_tipe_keyboard(self):
        return self.__tipe_keyboard
    
    def get_layout(self):
        return self.__layout
    
    def get_backlit(self):
        return self.__backlit
    
    def tampilkan_info(self):
        Komponen.tampilkan_info(self)
        print("Tipe Keyboard:", self.__tipe_keyboard)
        print("Layout:", self.__layout)
        print("Backlit:", self.__backlit)