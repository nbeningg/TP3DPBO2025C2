// KELAS PELANGGAN
#pragma once
#include <iostream>
#include <string>
#include "Manusia.cpp"
#include "Laptop.cpp"

using namespace std;

class Pelanggan : public Manusia {
    private:
        string idPelanggan;
        Laptop laptop;
    public:
        Pelanggan() {}
        
        Pelanggan(string nama, string noTelepon, string alamat, string idPelanggan) 
            : Manusia(nama, noTelepon, alamat) {
            this->idPelanggan = idPelanggan;
        }
        
        void setIdPelanggan(string idPelanggan) {
            this->idPelanggan = idPelanggan;
        }
        
        void setLaptop(Laptop laptop) {
            this->laptop = laptop;
        }
        
        string getIdPelanggan() {
            return idPelanggan;
        }
        
        Laptop getLaptop() {
            return laptop;
        }
        
        void tampilkanInfo() {
            cout << "ID Pelanggan: " << idPelanggan << endl;
            Manusia::tampilkanInfo();
            
            if (laptop.getNama().size() > 0) {
                cout << "\n[ SPESIFIKASI LAPTOP PELANGGAN ]" << endl;
                laptop.tampilkanInfo();
            }
        }
    
    ~Pelanggan() {}
};

