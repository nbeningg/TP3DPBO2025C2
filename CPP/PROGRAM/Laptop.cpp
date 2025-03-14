// KELAS LAPTOP
#pragma once
#include <iostream>
#include <string>
#include "Layar.cpp"
#include "Keyboard.cpp"
#include "Baterai.cpp"

using namespace std;

class Laptop {
    private:
        string nama;
        string jenis;
        Layar layar;
        Keyboard keyboard;
        Baterai baterai;
        string deskripsiMasalah;

    public:
        Laptop() {}
        
        Laptop(string nama, string jenis) {
            this->nama = nama;
            this->jenis = jenis;
        }
        
        void setNama(string nama) {
            this->nama = nama;
        }
        
        void setJenis(string jenis) {
            this->jenis = jenis;
        }
        
        void setLayar(Layar layar) {
            this->layar = layar;
        }
        
        void setKeyboard(Keyboard keyboard) {
            this->keyboard = keyboard;
        }
        
        void setBaterai(Baterai baterai) {
            this->baterai = baterai;
        }
        
        void setDeskripsiMasalah(string deskripsiMasalah) {
            this->deskripsiMasalah = deskripsiMasalah;
        }
        
        string getNama() {
            return nama;
        }
        
        string getJenis() {
            return jenis;
        }
        
        Layar getLayar() {
            return layar;
        }
        
        Keyboard getKeyboard() {
            return keyboard;
        }
        
        Baterai getBaterai() {
            return baterai;
        }
        
        string getDeskripsiMasalah() {
            return deskripsiMasalah;
        }
        
        void tampilkanInfo() {;
            cout << "Nama: " << nama << endl;
            cout << "Jenis: " << jenis << endl;
            cout << "Masalah: " << deskripsiMasalah << endl;
            
            cout << "\n=== LAYAR ===" << endl;
            layar.tampilkanInfo();
            
            cout << "\n=== KEYBOARD ===" << endl;
            keyboard.tampilkanInfo();
            
            cout << "\n=== BATERAI ===" << endl;
            baterai.tampilkanInfo();
        }
        
    ~Laptop() {}
};