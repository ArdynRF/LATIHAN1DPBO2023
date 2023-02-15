from mahasiswa import Mahasiswa

if __name__ == "__main__":
    mlist = []

    n = int(input("Masukkan berapa banyak orang mahasiswa : "))

    for i in range(n):
        name, nim, fakultas, prodi = input().split()
        temp = Mahasiswa()
        temp.set_Nama(name)
        temp.set_Nim(int(nim))
        temp.set_Fakultas(fakultas)
        temp.set_Prodi(prodi)
        mlist.append(temp)

    input_val = 1

    print("Berikut isi dari list (awal): ")
    for i in mlist:
        print(i.get_Nama(), i.get_Nim(), i.get_Fakultas(), i.get_Prodi())

    print("\nJika anda mau mengedit data dalam list")
    print("Dapat menggunakan beberapa masukkan :")
    print("TAMBAH   --> untuk menambah isi list mahasiswa")
    print("KURANG   --> untuk menghapus isi list mahasiswa")
    print("RUBAH    --> untuk mengubah isi list mahasiswa")
    print("")

    c = int(input(
        "Masukkan input (1) jika ingin melakukkan perubahan dan (2) jika ingin berhenti \n"))

    while c == 1:
        mahasiswa_order = Mahasiswa()
        intruksi = input("\nMasukkan intruksi: ")
        if intruksi == "TAMBAH":
            nim, name, fakultas, prodi = input(
                "Masukkan nilai (nim) (nama) (fakultas) (prodi)\n").split()
            mahasiswa_order.set_Nama(name)
            mahasiswa_order.set_Nim(int(nim))
            mahasiswa_order.set_Fakultas(fakultas)
            mahasiswa_order.set_Prodi(prodi)
            mahasiswa_order.tambah(mlist, mahasiswa_order)
        elif intruksi == "KURANG":
            nim = int(input("Masukkan nilai (nim)\n"))
            mahasiswa_order.set_Nim(nim)
            mahasiswa_order.kurang(mlist, mahasiswa_order)
        elif intruksi == "RUBAH":
            nim, name, fakultas, prodi = input(
                "Masukkan nilai (nim)*yg sudah ada, lalu (nama) (fakultas) (prodi)*baru\n").split()
            mahasiswa_order.set_Nama(name)
            mahasiswa_order.set_Nim(int(nim))
            mahasiswa_order.set_Fakultas(fakultas)
            mahasiswa_order.set_Prodi(prodi)
            mahasiswa_order.ubah(mlist, mahasiswa_order)
            
        c = int(input("jika ingin lanjut (1) jika ingin stop (2)\n"))

    print("\nBerikut isi dari list (Akhir): ")
    for i in mlist:
        print(i.get_Nama(), i.get_Nim(), i.get_Fakultas(), i.get_Prodi())

    print("=================================\n")
