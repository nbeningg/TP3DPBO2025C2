// KELAS LAYAR
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Layar : public Komponen {
private:
    double ukuran; // inch
    string resolusi;
    string jenisPanel; // LCD, LED, OLED, dll
    string touchscreen; // Ya/Tidak
public:
    Layar() {}
    
    Layar(string merk, string nama, string produsen, double ukuran, string resolusi, string jenisPanel, string touchscreen) 
        : Komponen(merk, nama, produsen) {
        this->ukuran = ukuran;
        this->resolusi = resolusi;
        this->jenisPanel = jenisPanel;
        this->touchscreen = touchscreen;
    }
    
    void setUkuran(double ukuran) {
        this->ukuran = ukuran;
    }
    
    void setResolusi(string resolusi) {
        this->resolusi = resolusi;
    }
    
    void setJenisPanel(string jenisPanel) {
        this->jenisPanel = jenisPanel;
    }
    
    void setTouchscreen(string touchscreen) {
        this->touchscreen = touchscreen;
    }
    
    double getUkuran() {
        return ukuran;
    }
    
    string getResolusi() {
        return resolusi;
    }
    
    string getJenisPanel() {
        return jenisPanel;
    }
    
    string getTouchscreen() {
        return touchscreen;
    }
    
    void tampilkanInfo() {
        Komponen::tampilkanInfo();
        cout << "Ukuran: " << ukuran << " inch" << endl;
        cout << "Resolusi: " << resolusi << endl;
        cout << "Jenis Panel: " << jenisPanel << endl;
        cout << "Touchscreen: " << touchscreen << endl;
    }
    
    ~Layar() {}
};