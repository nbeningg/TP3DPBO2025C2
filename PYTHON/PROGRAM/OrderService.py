# KELAS ORDERSERVICE
from Pelanggan import Pelanggan
from Teknisi import Teknisi

class OrderService:
    def __init__(self, kode_service="", tanggal_service="", pelanggan=None):
        self.__kode_service = kode_service
        self.__tanggal_service = tanggal_service
        self.__pelanggan = pelanggan if pelanggan else Pelanggan()
        self.__teknisi = Teknisi()
        
        # atribut untuk daftar perbaikan
        self.__komponen_diperbaiki = []
        self.__deskripsi_perbaikan = []
        self.__biaya_komponen = []
        self.__biaya_layanan = []
        self.__tanggal_perbaikan = []
        
        self.__biaya_total = 0
        self.__status = "Terdaftar"  # Terdaftar, Proses, Selesai, Dibayar
    
    def set_kode_service(self, kode_service):
        self.__kode_service = kode_service
    
    def set_tanggal_service(self, tanggal_service):
        self.__tanggal_service = tanggal_service
    
    def set_pelanggan(self, pelanggan):
        self.__pelanggan = pelanggan
    
    def set_teknisi(self, teknisi):
        self.__teknisi = teknisi
    
    def set_status(self, status):
        self.__status = status
    
    def get_kode_service(self):
        return self.__kode_service
    
    def get_tanggal_service(self):
        return self.__tanggal_service
    
    def get_pelanggan(self):
        return self.__pelanggan
    
    def get_teknisi(self):
        return self.__teknisi
    
    def get_biaya_total(self):
        return self.__biaya_total
    
    def get_status(self):
        return self.__status
    
    def hitung_biaya(self):
        self.__biaya_total = 0
        for i in range(len(self.__komponen_diperbaiki)):
            self.__biaya_total += self.__biaya_komponen[i] + self.__biaya_layanan[i]
    
    def tambah_perbaikan(self, komponen, deskripsi, biaya_komp, biaya_layanan, tanggal):
        self.__komponen_diperbaiki.append(komponen)
        self.__deskripsi_perbaikan.append(deskripsi)
        self.__biaya_komponen.append(biaya_komp)
        self.__biaya_layanan.append(biaya_layanan)
        self.__tanggal_perbaikan.append(tanggal)
        
        self.hitung_biaya()
    
    def mulai_service(self):
        self.__status = "Proses"
    
    def selesaikan_service(self):
        self.__status = "Selesai"
    
    def bayar(self):
        self.__status = "Dibayar"
    
    def tampilkan_info(self):
        print("=============== INFORMASI ORDER SERVICE ===============")
        print("Kode Service:", self.__kode_service)
        print("Tanggal:", self.__tanggal_service)
        print("Status:", self.__status)

        if self.__teknisi.get_nama():
            print("\n[ INFORMASI TEKNISI ]")
            self.__teknisi.tampilkan_info()

        print("\n[ INFORMASI PELANGGAN ]")
        self.__pelanggan.tampilkan_info()
        
        if len(self.__komponen_diperbaiki) > 0:
            print("\n[ DAFTAR PERBAIKAN ]")
            for i in range(len(self.__komponen_diperbaiki)):
                print(i+1, " Komponen:", self.__komponen_diperbaiki[i])
                print("   Deskripsi:", self.__deskripsi_perbaikan[i])
                print("   Tanggal:", self.__tanggal_perbaikan[i])
                print("   Biaya Komponen: Rp", self.__biaya_komponen[i])
                print("   Biaya Layanan: Rp", self.__biaya_layanan[i])
        
        print("TOTAL BIAYA: Rp", self.__biaya_total)
        print("=======================================================\n")