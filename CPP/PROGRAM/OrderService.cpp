// KELAS ORDERSERVICE
#pragma once
#include <iostream>
#include <string>
#include "Pelanggan.cpp"
#include "Teknisi.cpp"
#include <vector>

using namespace std;

class OrderService {
    private:
        string kodeService;
        string tanggalService;
        Pelanggan pelanggan;
        Teknisi teknisi;
        
        // atribut untuk daftar perbaikan
        vector<string> komponenDiperbaiki;
        vector<string> deskripsiPerbaikan;
        vector<double> biayaKomponen;
        vector<double> biayaLayanan;
        vector<string> tanggalPerbaikan;
        
        int biayaTotal;
        string status; // Terdaftar, Proses, Selesai, Dibayar

    public:
        OrderService() {
            this->biayaTotal = 0;
            this->status = "Terdaftar";
        }
        
        OrderService(string kodeService, string tanggalService, Pelanggan pelanggan) {
            this->kodeService = kodeService;
            this->tanggalService = tanggalService;
            this->pelanggan = pelanggan;
            this->biayaTotal = 0;
            this->status = "Terdaftar";
        }
        
        void setKodeService(string kodeService) {
            this->kodeService = kodeService;
        }
        
        void setTanggalService(string tanggalService) {
            this->tanggalService = tanggalService;
        }
        
        void setPelanggan(Pelanggan pelanggan) {
            this->pelanggan = pelanggan;
        }
        
        void setTeknisi(Teknisi teknisi) {
            this->teknisi = teknisi;
        }
        
        void setStatus(string status) {
            this->status = status;
        }
        
        string getKodeService() {
            return kodeService;
        }
        
        string getTanggalService() {
            return tanggalService;
        }
        
        Pelanggan getPelanggan() {
            return pelanggan;
        }
        
        Teknisi getTeknisi() {
            return teknisi;
        }
        
        double getBiayaTotal() {
            return biayaTotal;
        }
        
        string getStatus() {
            return status;
        }

        void hitungBiaya() {
            biayaTotal = 0;
            for (int i = 0; i < komponenDiperbaiki.size(); i++) {
                biayaTotal += biayaKomponen[i] + biayaLayanan[i];
            }
        }
        
        void tambahPerbaikan(string komponen, string deskripsi, double biayaKomp, double biayaLayanan, string tanggal) {
            komponenDiperbaiki.push_back(komponen);
            deskripsiPerbaikan.push_back(deskripsi);
            biayaKomponen.push_back(biayaKomp);
            this->biayaLayanan.push_back(biayaLayanan);
            tanggalPerbaikan.push_back(tanggal);
            
            hitungBiaya();
        }
        
        void mulaiService() {
            status = "Proses";
        }
        
        void selesaikanService() {
            status = "Selesai";
        }
        
        void bayar() {
            status = "Dibayar";
        }
        
        void tampilkanInfo() {
            cout << "=============== INFORMASI ORDER SERVICE ===============" << endl;
            cout << "Kode Service: " << kodeService << endl;
            cout << "Tanggal: " << tanggalService << endl;
            cout << "Status: " << status << endl;

            if (teknisi.getNama().length() > 0) {
                cout << "\n[ INFORMASI TEKNISI ]" << endl;
                teknisi.tampilkanInfo();
            }

            cout << "\n[ INFORMASI PELANGGAN ]" << endl;
            pelanggan.tampilkanInfo();
            
            if (komponenDiperbaiki.size() > 0) {
                cout << "\n[ DAFTAR PERBAIKAN ]" << endl;
                for (int i = 0; i < komponenDiperbaiki.size(); i++) {
                    cout << (i+1) << ". " << "Komponen: " << komponenDiperbaiki[i] << endl;
                    cout << "   Deskripsi: " << deskripsiPerbaikan[i] << endl;
                    cout << "   Tanggal: " << tanggalPerbaikan[i] << endl;
                    cout << "   Biaya Komponen: Rp " << biayaKomponen[i] << endl;
                    cout << "   Biaya Layanan: Rp " << biayaLayanan[i] << endl;
                }
            }
            
            cout << "TOTAL BIAYA: Rp " << biayaTotal << endl;
            cout << "=======================================================\n" << endl;
        }
        
    ~OrderService() {}
};