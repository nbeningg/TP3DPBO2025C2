// KELAS KOMPONEN
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Komponen {
    private:
        string merk;
        string nama;
        string produsen;

    public:
        Komponen() {}
        
        Komponen(string merk, string nama, string produsen) {
            this->merk = merk;
            this->nama = nama;
            this->produsen = produsen;
        }
        
        void setMerk(string merk) {
            this->merk = merk;
        }
        
        void setNama(string nama) {
            this->nama = nama;
        }
        
        void setProdusen(string produsen) {
            this->produsen = produsen;
        }
        
        string getMerk() {
            return merk;
        }
        
        string getNama() {
            return nama;
        }
        
        string getProdusen() {
            return produsen;
        }
        
        void tampilkanInfo() {
            cout << "Merk: " << merk << endl;
            cout << "Nama: " << nama << endl;
            cout << "Produsen: " << produsen << endl;
        }
        
    ~Komponen() {}
};