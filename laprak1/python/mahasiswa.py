from typing import List


class Mahasiswa:
    def __init__(self, Nama="", Nim=0, Prodi="-", Fakultas="-"):
        self.Nama = Nama
        self.Nim = Nim
        self.Prodi = Prodi
        self.Fakultas = Fakultas

    def get_Nama(self):
        return self.Nama

    def set_Nama(self, Nama):
        self.Nama = Nama

    def get_Nim(self):
        return self.Nim

    def set_Nim(self, Nim):
        self.Nim = Nim

    def get_Prodi(self):
        return self.Prodi

    def set_Prodi(self, Prodi):
        self.Prodi = Prodi

    def get_Fakultas(self):
        return self.Fakultas

    def set_Fakultas(self, Fakultas):
        self.Fakultas = Fakultas

    def tambah(self, n: List['Mahasiswa'], temp: 'Mahasiswa'):
        n.append(temp)

    def kurang(self, n: List['Mahasiswa'], temp: 'Mahasiswa'):
        flag = 0
        ada = 0
        for x, i in enumerate(n):
            if i.get_Nim() == temp.get_Nim():
                ada = 1
                flag = x

        if ada == 1:
            n.pop(flag)
        else:
            print("NIM tidak ditemukan")

    def ubah(self, n: List['Mahasiswa'], temp: 'Mahasiswa'):
        flag = 0
        ada = 0
        for x, i in enumerate(n):
            if i.get_Nim() == temp.get_Nim():
                ada = 1
                flag = x
            else:
                ada = 2

        if ada == 1:
            n.insert(flag, temp)
            n.pop(flag+1)
        else:
            print("NIM yang dicari tidak ditemukan")
