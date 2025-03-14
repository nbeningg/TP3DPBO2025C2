# Janji
Saya Nuansa Bening Aura Jelita dengan NIM 2301410 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Diagram
![DESAIN](https://github.com/user-attachments/assets/ca2e4d4d-1ccf-47f1-bf5d-e6af444bef27)

# Desain Program
Pada praktikum kali ini saya membuat program yang merupakan sistem Service Khusus Laptop dengan komponen utama yang rawan mengalami kerusakan, yaitu **Baterai, Keyboard, dan Layar**. 
Sistem ini memungkinkan pelanggan untuk melakukan servis laptop mereka, mencatat perbaikan yang dilakukan, serta mengelola teknisi dan biaya servis.

### 1. Komponen (Kelas Dasar)
#### **Atribut:**
- merk
- nama
- produsen

#### **Metode:**
- getter
- setter
- tampilkanInfo()

### 2. Baterai (Turunan dari Komponen)
#### **Atribut Tambahan:**
- kapasitas
- jenisBaterai
- siklusCharge
- kesehatanPersen

#### **Metode Tambahan:**
- getter
- setter
- tampilkanInfo()

### 3. Keyboard (Turunan dari Komponen)
#### **Atribut Tambahan:**
- tipeKeyboard
- layout
- backlit

#### **Metode Tambahan:**
- getter
- setter
- tampilkanInfo()

### 4. Layar (Turunan dari Komponen)
#### **Atribut Tambahan:**
- ukuran
- resolusi
- jenisPanel
- touchscreen

#### **Metode Tambahan:**
- getter
- setter
- tampilkanInfo()

### 5. Laptop
#### **Atribut:**
- nama
- jenis
- deskripsiMasalah

#### **Composition:**
- Layar (Layar)
- Keyboard (Keyboard)
- Baterai (Baterai)

#### **Metode:**
- getter
- setter
- tampilkanInfo()

### 6. Manusia (Kelas Dasar)
#### **Atribut:**
- nama
- noTelepon
- alamat

#### **Metode:**
- getter
- setter
- tampilkanInfo()

### 7. Pelanggan (Turunan dari Manusia)
#### **Atribut Tambahan:**
- idPelanggan

#### **Composition:**
- Laptop (Laptop)

#### **Metode Tambahan:**
- getter
- setter
- tampilkanInfo()

### 8. Teknisi (Turunan dari Manusia)
#### **Atribut Tambahan:**
- idTeknisi
- spesialisasi
- tingkatKeahlian

#### **Metode Tambahan:**
- getter
- setter
- tampilkanInfo()

### 9. OrderService
#### **Atribut:**
- kodeService
- tanggalService
- biayaTotal
- status

#### **Composition:**
- Pelanggan (Pelanggan)
- Teknisi (Teknisi)
- komponenDiperbaiki (vector<string>)
- deskripsiPerbaikan (vector<string>)
- biayaKomponen (vector<double>)
- biayaLayanan (vector<double>)
- tanggalPerbaikan (vector<string>)

#### **Metode:**
- getter
- setter
- hitungBiaya()
- tambahPerbaikan()
- mulaiService()
- selesaikanService()
- bayar()
- tampilkanInfo()

## Hubungan Composition
Program ini menggunakan **Composition** untuk memodelkan hubungan "memiliki" (**has-a**) antara kelas-kelas berikut:
1. **Laptop memiliki Komponen**:
   - Laptop memiliki **Layar** (komposisi)
   - Laptop memiliki **Keyboard** (komposisi)
   - Laptop memiliki **Baterai** (komposisi)

2. **Pelanggan memiliki Laptop**:
   - Setiap Pelanggan memiliki sebuah **Laptop** (komposisi)

3. **OrderService memiliki Pelanggan dan Teknisi**:
   - Setiap OrderService memiliki satu **Pelanggan** (komposisi)
   - Setiap OrderService memiliki satu **Teknisi** (komposisi)

4. **OrderService memiliki data perbaikan**:
   - OrderService memiliki kumpulan data perbaikan berupa **vector** yang menyimpan informasi tentang komponen yang diperbaiki, deskripsi, biaya, dan tanggal perbaikan (**komposisi**)

# Alur Program
### **1. Inisialisasi**
- Membuat objek **Laptop** dan mengatur nilainya menggunakan **setter**
- Membuat objek **Komponen** (Layar, Keyboard, Baterai) dan mengatur atributnya
- Membuat objek **Pelanggan** dan mengatur laptop miliknya
- Membuat objek **Teknisi**

### **2. Proses Servis**
- Membuat objek **OrderService** dan mengatur pelanggan serta teknisi yang menangani
- Memulai servis dengan mengubah status menjadi **"Proses"**
- Menambahkan perbaikan yang dilakukan beserta biayanya
- Menyelesaikan servis dan mengubah status menjadi **"Selesai"**
- Proses pembayaran dengan mengubah status menjadi **"Dibayar"**

**NOTE : STATUS AKAN BEDA BEDA SESUAI PROSESNYA**

### **3. Output**
- Menampilkan **informasi detail order servis**, termasuk:
  - Data Order
  - Teknisi yang menangani
  - Data Pelanggan
  - Laptop yang diservis
  - Daftar perbaikan yang dilakukan
  - Total biaya servis

# Dokumentasi
![CPP-1](https://github.com/user-attachments/assets/172faa1e-7b64-48e6-9d6c-14dc141a0da7)
![CPP-2](https://github.com/user-attachments/assets/9f176894-99f5-4fd3-a599-20af26f499cc)
![CPP-3](https://github.com/user-attachments/assets/90cdb741-7c2b-4bae-8207-73df9c80c819)
