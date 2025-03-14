// KELAS MANUSIA
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Manusia {
    private:
        string nama;
        string noTelepon;
        string alamat;

    public:
        Manusia() {}
        
        Manusia(string nama, string noTelepon, string alamat) {
            this->nama = nama;
            this->noTelepon = noTelepon;
            this->alamat = alamat;
        }
        
        void setNama(string nama) {
            this->nama = nama;
        }
        
        void setNoTelepon(string noTelepon) {
            this->noTelepon = noTelepon;
        }
        
        void setAlamat(string alamat) {
            this->alamat = alamat;
        }
        
        string getNama() {
            return nama;
        }
        
        string getNoTelepon() {
            return noTelepon;
        }
        
        string getAlamat() {
            return alamat;
        }
        
        void tampilkanInfo() {
            cout << "Nama: " << nama << endl;
            cout << "No. Telepon: " << noTelepon << endl;
            cout << "Alamat: " << alamat << endl;
        }
        
    ~Manusia() {}
};

