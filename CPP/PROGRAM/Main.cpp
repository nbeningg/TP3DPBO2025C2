/* Saya Nuansa Bening Aura Jelita dengan NIM 2301410 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

// MAIN
#include <bits/stdc++.h>
#include "Komponen.cpp"
#include "Layar.cpp"
#include "Keyboard.cpp"
#include "Baterai.cpp"
#include "Laptop.cpp"
#include "Manusia.cpp"
#include "Teknisi.cpp"
#include "Pelanggan.cpp"
#include "OrderService.cpp"

using namespace std;

int main() {  
    // PELANGGAN 1 
    // membuat objek laptop untuk kasus 1
    Laptop laptop1("Lenovo ThinkPad", "Laptop Business");
    laptop1.setDeskripsiMasalah("Laptop tidak mau menyala dan baterai cepat habis");
    
    // komponen laptop untuk kasus 1
    Layar layar1("LG", "IPS Panel", "LG Display", 14.0, "1920x1080", "IPS", "Tidak");
    Keyboard keyboard1("Lenovo", "ThinkPad Keyboard", "Lenovo", "Membrane", "QWERTY", "Ya");
    Baterai baterai1("Lenovo", "Original Battery", "Lenovo", 4000, "Li-Ion", 245, 75);
    
    laptop1.setLayar(layar1);
    laptop1.setKeyboard(keyboard1);
    laptop1.setBaterai(baterai1);
    
    // membuat pelanggan untuk kasus 1
    Pelanggan pelanggan1("Zukildin", "08123456789", "Jl. Kwangya No. 1, Jakarta", "P001");
    pelanggan1.setLaptop(laptop1);
    
    // membuat teknisi untuk kasus 1
    Teknisi teknisi1("Bang Ian", "08987654321", "Jl. Melati No. 5, Jakarta", "T001", "Laptop Hardware", "Expert");
    
    // membuat order service untuk kasus 1
    OrderService order1("SVC001", "14/03/2025", pelanggan1);
    order1.setTeknisi(teknisi1);
    
    // proses service kasus 1
    order1.mulaiService();
    order1.tambahPerbaikan("Baterai", "Penggantian baterai dengan yang baru", 750000, 100000, "14/03/2025");
    order1.selesaikanService();
    order1.bayar();
    
    // PELANGGAN 2
    // membuat objek laptop untuk kasus 2
    Laptop laptop2("Asus ROG Strix", "Gaming Laptop");
    laptop2.setDeskripsiMasalah("Layar berkedip-kedip dan beberapa tombol keyboard tidak berfungsi");
    
    // komponen laptop untuk kasus 2
    Layar layar2("Samsung", "LED Panel", "Samsung Display", 15.6, "2560x1440", "IPS", "Ya");
    Keyboard keyboard2("Asus", "RGB Keyboard", "Asus", "Mechanical", "QWERTY", "Ya");
    Baterai baterai2("Asus", "Original Battery", "Asus", 5000, "Li-Po", 290, 95);
    
    laptop2.setLayar(layar2);
    laptop2.setKeyboard(keyboard2);
    laptop2.setBaterai(baterai2);
    
    // membuat pelanggan untuk kasus 2
    Pelanggan pelanggan2("Ian Sopian", "08565432198", "Jl. Dahlia No. 21, Bandung", "P002");
    pelanggan2.setLaptop(laptop2);
    
    // membuat teknisi untuk kasus 2
    Teknisi teknisi2("Jamal", "08123987654", "Jl. Mawar No. 8, Bandung", "T002", "Display & Hardware", "Senior");
    
    // membuat order service untuk kasus 2
    OrderService order2("SVC002", "20/03/2025", pelanggan2);
    order2.setTeknisi(teknisi2);
    
    // Proses service kasus 2
    order2.mulaiService();
    order2.tambahPerbaikan("Layar", "Penggantian kabel fleksibel layar", 350000, 200000, "21/03/2025");
    order2.tambahPerbaikan("Keyboard", "Penggantian keyboard dengan yang baru", 950000, 150000, "22/03/2025");
    
    // DETAIL INFORMASI 
    // PELANGGAN 1
    order1.tampilkanInfo();
    
    // PELANGGAN 2
    order2.tampilkanInfo();
    
    return 0;
}