// KELAS KEYBOARD
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Keyboard : public Komponen {
    private:
        string tipeKeyboard; // Mechanical, Membrane, dll
        string layout; // QWERTY, DVORAK, dll
        string backlit; // Ya/Tidak

    public:
        Keyboard() {}
        
        Keyboard(string merk, string nama, string produsen, string tipeKeyboard, string layout, string backlit) 
            : Komponen(merk, nama, produsen) {
            this->tipeKeyboard = tipeKeyboard;
            this->layout = layout;
            this->backlit = backlit;
        }
        
        void setTipeKeyboard(string tipeKeyboard) {
            this->tipeKeyboard = tipeKeyboard;
        }
        
        void setLayout(string layout) {
            this->layout = layout;
        }
        
        void setBacklit(string backlit) {
            this->backlit = backlit;
        }
        
        string getTipeKeyboard() {
            return tipeKeyboard;
        }
        
        string getLayout() {
            return layout;
        }
        
        string getBacklit() {
            return backlit;
        }
        
        void tampilkanInfo() {
            Komponen::tampilkanInfo();
            cout << "Tipe Keyboard: " << tipeKeyboard << endl;
            cout << "Layout: " << layout << endl;
            cout << "Backlit: " << backlit << endl;
        }
    
    ~Keyboard() {}
};

