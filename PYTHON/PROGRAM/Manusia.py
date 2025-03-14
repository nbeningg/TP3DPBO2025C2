# KELAS MANUSIA
class Manusia:
    def __init__(self, nama="", no_telepon="", alamat=""):
        self.__nama = nama
        self.__no_telepon = no_telepon
        self.__alamat = alamat
    
    def set_nama(self, nama):
        self.__nama = nama
    
    def set_no_telepon(self, no_telepon):
        self.__no_telepon = no_telepon
    
    def set_alamat(self, alamat):
        self.__alamat = alamat
    
    def get_nama(self):
        return self.__nama
    
    def get_no_telepon(self):
        return self.__no_telepon
    
    def get_alamat(self):
        return self.__alamat
    
    def tampilkan_info(self):
        print("Nama:", self.__nama)
        print("No. Telepon:", self.__no_telepon)
        print("Alamat:", self.__alamat)