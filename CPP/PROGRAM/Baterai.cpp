// KELAS BATERAI
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Baterai : public Komponen {
    private:
        int kapasitas; // mAh
        string jenisBaterai; // Li-Ion, Li-Po, Ni-Cd, dll
        int siklusCharge;
        int kesehatanPersen;

    public:
        Baterai() {}
        
        Baterai(string merk, string nama, string produsen, int kapasitas, string jenisBaterai, int siklusCharge, int kesehatanPersen) 
            : Komponen(merk, nama, produsen) {
            this->kapasitas = kapasitas;
            this->jenisBaterai = jenisBaterai;
            this->siklusCharge = siklusCharge;
            this->kesehatanPersen = kesehatanPersen;
        }
        
        void setKapasitas(int kapasitas) {
            this->kapasitas = kapasitas;
        }
        
        void setJenisBaterai(string jenisBaterai) {
            this->jenisBaterai = jenisBaterai;
        }
        
        void setSiklusCharge(int siklusCharge) {
            this->siklusCharge = siklusCharge;
        }
        
        void setKesehatanPersen(int kesehatanPersen) {
            this->kesehatanPersen = kesehatanPersen;
        }
        
        int getKapasitas() {
            return kapasitas;
        }
        
        string getJenisBaterai() {
            return jenisBaterai;
        }
        
        int getSiklusCharge() {
            return siklusCharge;
        }
        
        int getKesehatanPersen() {
            return kesehatanPersen;
        }
        
        void tampilkanInfo() {
            Komponen::tampilkanInfo();
            cout << "Kapasitas: " << kapasitas << " mAh" << endl;
            cout << "Jenis Baterai: " << jenisBaterai << endl;
            cout << "Siklus Charge: " << siklusCharge << endl;
            cout << "Kesehatan: " << kesehatanPersen << "%" << endl;
        }
        
    ~Baterai() {}
};

