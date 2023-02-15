#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

class mahasiswa
{
private:
    string Nama;
    int Nim;
    string Prodi;
    string Fakultas;

public:
    mahasiswa()
    {
        this->Nama = "";
        this->Nim = 0;
        this->Prodi = "-";
        this->Fakultas = "-";
    };

    mahasiswa(string Nama, int Nim, string Prodi, string Fakultas)
    {
        this->Nama = Nama;
        this->Nim = Nim;
        this->Prodi = Prodi;
        this->Fakultas = Fakultas;
    }

    string get_Nama()
    {
        return this->Nama;
    }

    void set_Nama(string Nama)
    {
        this->Nama = Nama;
    }

    int get_Nim()
    {
        return this->Nim;
    }

    void set_Nim(int Nim)
    {
        this->Nim = Nim;
    }

    string get_Prodi()
    {
        return this->Prodi;
    }

    void set_Prodi(string Prodi)
    {
        this->Prodi = Prodi;
    }

    string get_Fakultas()
    {
        return this->Fakultas;
    }

    void set_Fakultas(string Fakultas)
    {
        this->Fakultas = Fakultas;
    }

    void tambah(list<mahasiswa> &n, mahasiswa temp)
    {
        n.push_back(temp);
    }

    void kurang(list<mahasiswa> &n, mahasiswa temp)
    {
        list<mahasiswa>::iterator tmp;
        int x = 0;
        int flag = 0;
        int ada = 0;
        for (list<mahasiswa>::iterator i = n.begin(); i != n.end(); i++)
        {
            if (i->get_Nim() == temp.get_Nim())
            {
                ada = 1;
                flag = x;
            }
            x++;
        }

        if (ada == 1)
        {
            tmp = n.begin();
            for (int j = 0; j < flag; j++)
            {
                ++tmp;
            }
            n.erase(tmp);
        }
        else
        {
            cout << "NIM tidak ditemukan\n";
        }
    }

    void ubah(list<mahasiswa> &n, mahasiswa temp)
    {
        int flag = 0;
        int ada = 0;
        int x = 0;
        for (list<mahasiswa>::iterator i = n.begin(); i != n.end(); i++)
        {
            if (i->get_Nim() == temp.get_Nim())
            {
                ada = 1;
                flag = x;
            }
            x++;
        }

        if (ada == 1)
        {
            list<mahasiswa>::iterator tmp;
            tmp = n.begin();
            for (int j = 0; j < flag; j++)
            {
                ++tmp;
            }
            n.insert(tmp, temp);
            n.erase(tmp);
        }
        else
        {
            cout << "NIM yang dicari tidak ditemukan\n\n";
        }
    }

    ~mahasiswa()
    {
    }
};
