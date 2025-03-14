# Saya Nuansa Bening Aura Jelita dengan NIM 2301410 mengerjakan Tugas Praktikum 3
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
# maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# MAIN
from Komponen import Komponen
from Layar import Layar
from Keyboard import Keyboard
from Baterai import Baterai
from Laptop import Laptop
from Manusia import Manusia
from Teknisi import Teknisi
from Pelanggan import Pelanggan
from OrderService import OrderService


# PELANGGAN 1 
# membuat objek laptop untuk kasus 1
laptop1 = Laptop("Lenovo ThinkPad", "Laptop Business")
laptop1.set_deskripsi_masalah("Laptop tidak mau menyala dan baterai cepat habis")

# komponen laptop untuk kasus 1
layar1 = Layar("LG", "IPS Panel", "LG Display", 14.0, "1920x1080", "IPS", "Tidak")
keyboard1 = Keyboard("Lenovo", "ThinkPad Keyboard", "Lenovo", "Membrane", "QWERTY", "Ya")
baterai1 = Baterai("Lenovo", "Original Battery", "Lenovo", 4000, "Li-Ion", 245, 75)

laptop1.set_layar(layar1)
laptop1.set_keyboard(keyboard1)
laptop1.set_baterai(baterai1)

# membuat pelanggan untuk kasus 1
pelanggan1 = Pelanggan("Zukildin", "08123456789", "Jl. Kwangya No. 1, Jakarta", "P001")
pelanggan1.set_laptop(laptop1)

# membuat teknisi untuk kasus 1
teknisi1 = Teknisi("Bang Ian", "08987654321", "Jl. Melati No. 5, Jakarta", "T001", "Laptop Hardware", "Expert")

# membuat order service untuk kasus 1
order1 = OrderService("SVC001", "14/03/2025", pelanggan1)
order1.set_teknisi(teknisi1)

# proses service kasus 1
order1.mulai_service()
order1.tambah_perbaikan("Baterai", "Penggantian baterai dengan yang baru", 750000, 100000, "14/03/2025")
order1.selesaikan_service()
order1.bayar()

# PELANGGAN 2
# membuat objek laptop untuk kasus 2
laptop2 = Laptop("Asus ROG Strix", "Gaming Laptop")
laptop2.set_deskripsi_masalah("Layar berkedip-kedip dan beberapa tombol keyboard tidak berfungsi")

# komponen laptop untuk kasus 2
layar2 = Layar("Samsung", "LED Panel", "Samsung Display", 15.6, "2560x1440", "IPS", "Ya")
keyboard2 = Keyboard("Asus", "RGB Keyboard", "Asus", "Mechanical", "QWERTY", "Ya")
baterai2 = Baterai("Asus", "Original Battery", "Asus", 5000, "Li-Po", 290, 95)

laptop2.set_layar(layar2)
laptop2.set_keyboard(keyboard2)
laptop2.set_baterai(baterai2)

# membuat pelanggan untuk kasus 2
pelanggan2 = Pelanggan("Ian Sopian", "08565432198", "Jl. Dahlia No. 21, Bandung", "P002")
pelanggan2.set_laptop(laptop2)

# membuat teknisi untuk kasus 2
teknisi2 = Teknisi("Jamal", "08123987654", "Jl. Mawar No. 8, Bandung", "T002", "Display & Hardware", "Senior")

# membuat order service untuk kasus 2
order2 = OrderService("SVC002", "20/03/2025", pelanggan2)
order2.set_teknisi(teknisi2)

# Proses service kasus 2
order2.mulai_service()
order2.tambah_perbaikan("Layar", "Penggantian kabel fleksibel layar", 350000, 200000, "21/03/2025")
order2.tambah_perbaikan("Keyboard", "Penggantian keyboard dengan yang baru", 950000, 150000, "22/03/2025")

# DETAIL INFORMASI 
# PELANGGAN 1
order1.tampilkan_info()

# PELANGGAN 2
order2.tampilkan_info()
