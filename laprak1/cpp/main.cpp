#include <bits/stdc++.h>
#include "mahasiswa.cpp"

using namespace std;

int main()
{
    list<mahasiswa> mlist;

    cout << "Masukkan berapa banyak orang mahasiswa : ";

    int n;
    cin >> n;

    string name, fakultas, prodi;
    int nim;

    for (int i = 0; i < n; i++)
    {
        mahasiswa temp;

        cin >> name >> nim >> fakultas >> prodi;

        temp.set_Nama(name);
        temp.set_Nim(nim);
        temp.set_Fakultas(fakultas);
        temp.set_Prodi(prodi);

        mlist.push_back(temp);
    }

    system("PAUSE");
    system("CLS");

    cout << "Berikut isi dari list (awal): \n";
    for (list<mahasiswa>::iterator it = mlist.begin(); it != mlist.end(); it++)
    {
        cout << it->get_Nama() << " " << it->get_Nim() << " " << it->get_Fakultas() << " " << it->get_Prodi() << endl;
    }
    cout << "\n";

    cout << "Jika anda mau mengedit data dalam list" << endl;
    cout << "Dapat menggunakan beberapa masukkan :\n";
    cout << "TAMBAH   --> untuk menambah isi list mahasiswa\n";
    cout << "KURANG   --> untuk menghapus isi list mahasiswa\n";
    cout << "RUBAH    --> untuk mengubah isi list mahasiswa\n";
    ;
    // cout << "TAMPIL                                               --> untuk menampilkan isi list mahasiswa\n"

    int c;
    cout << "Masukkan input (1) jika ingin melakukkan perubahan dan (2) jika ingin berhenti \n";
    cin >> c;

    string intruksi;
    while (c == 1)
    {
        mahasiswa order;
        cout << "\nMasukkan intruksi: ";
        cin >> intruksi;
        if (intruksi.compare("TAMBAH") == 0)
        {
            cout << "Masukkan nilai (nim) (nama) (fakultas) (prodi)\n";
            cin >> nim >> name >> fakultas >> prodi;
            order.set_Nama(name);
            order.set_Nim(nim);
            order.set_Fakultas(fakultas);
            order.set_Prodi(prodi);
            order.tambah(mlist, order);
        }
        else if (intruksi.compare("KURANG") == 0)
        {
            cout << "Masukkan nilai (nim)\n";
            cin >> nim;
            order.set_Nim(nim);
            order.kurang(mlist, order);
        }
        else if (intruksi.compare("RUBAH") == 0)
        {
            cout << "Masukkan nilai (nim)*yg sudah ada, lalu (nama) (fakultas) (prodi)*baru\n";
            cin >> nim >> name >> fakultas >> prodi;
            order.set_Nama(name);
            order.set_Nim(nim);
            order.set_Fakultas(fakultas);
            order.set_Prodi(prodi);
            order.ubah(mlist, order);
        }
        cout << "jika ingin lanjut (1) jika ingin stop (2)" << endl;
        cout << "masukkan : ";
        cin >> c;
    }

    cout << "\nBerikut isi dari list (Akhir): \n";
    for (list<mahasiswa>::iterator it = mlist.begin(); it != mlist.end(); it++)
    {
        cout << it->get_Nama() << " " << it->get_Nim() << " " << it->get_Fakultas() << " " << it->get_Prodi() << endl;
    }

    cout << "=================================\n";

    return 0;
}