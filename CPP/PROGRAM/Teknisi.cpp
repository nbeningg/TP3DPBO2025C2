// KELAS TEKNISI
#pragma once
#include <iostream>
#include <string>
#include "Manusia.cpp"

using namespace std;

class Teknisi : public Manusia {
    private:
        string idTeknisi;
        string spesialisasi;
        string tingkatKeahlian; // junior, senior, expert

    public:
        Teknisi() {}
        
        Teknisi(string nama, string noTelepon, string alamat, string idTeknisi, string spesialisasi, string tingkatKeahlian) 
            : Manusia(nama, noTelepon, alamat) {
            this->idTeknisi = idTeknisi;
            this->spesialisasi = spesialisasi;
            this->tingkatKeahlian = tingkatKeahlian;
        }
        
        void setIdTeknisi(string idTeknisi) {
            this->idTeknisi = idTeknisi;
        }
        
        void setSpesialisasi(string spesialisasi) {
            this->spesialisasi = spesialisasi;
        }
        
        void setTingkatKeahlian(string tingkatKeahlian) {
            this->tingkatKeahlian = tingkatKeahlian;
        }
        
        string getIdTeknisi() {
            return idTeknisi;
        }
        
        string getSpesialisasi() {
            return spesialisasi;
        }
        
        string getTingkatKeahlian() {
            return tingkatKeahlian;
        }
        
        void tampilkanInfo() {
            cout << "ID Teknisi: " << idTeknisi << endl;
            Manusia::tampilkanInfo();
            cout << "Spesialisasi: " << spesialisasi << endl;
            cout << "Level: " << tingkatKeahlian << endl;
        }
    
    ~Teknisi() {}
};