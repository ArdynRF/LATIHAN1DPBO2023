# LATIHAN1DPBO2023
### Saya Ardyn Rezky Fahreza NIM 2103551 mengerjakan Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang menampilkan informasi daftar mahasiswa (sekumpulan objek mahasiswa) dan memiliki fitur menambah, mengubah, dan menghapus data. Setiap mahasiswa memiliki data nama, NIM, program studi, fakultas, dan foto profil (khusus bahasa PHP).

## Desain Program
Program didesain menjadi  class:
* *Mahasiswa*

Pada class `Mahasiswa` terdapat empat atribut (lima khusus PHP):
* *name*                       -> merupakan nama mahasiswa, tipe data `string`
* *nim*                        -> merupakan nim mahasiswa, bertipe data `int`
* *fakultas*                      -> merupakan program studi mahasiswa, bertipe data `string`
* *prodi*                    -> merupakan fakultas mahasiswa, bertipe data `string`
* *(khusus PHP) Jenis Kelamin* -> merupakan jenis kelamin mahasiswa, bertipe data `string`

Tiap atribut memiliki fungsi setter dan getternya yang berada pada class `Mahasiswa`.

Pada class `Mahasiswa` juga terdapat method `tambah`, `kurang`, dan `ubah`.
penjelasan tiga method:
* *tambah*    -> untuk menambahkan data mahasiswa
* *kurang*    -> untuk menghapus data mahasiswa
* *ubah*      -> untuk mengubah data mahasisw

## Alur Program
*Semua program memiliki alur yang sama, hanya saja pada PHP tidak ada inputan dari user dan tidak memiliki method `tambah`, `kurang`, dan `ubah`.*

Pertama program akan meminta inputan user untuk memasukkan jumlah mahasiswa yang akan diinput.
Lalu user akan menginput atribut atribut dari class `Mahasiswa`.
Setelah itu program akan menampilkan menu pilihan dan user akan diminta inputan (inputan untuk melanjutkan ke pemilihan menu atau berhenti), jika user memilih untuk melanjutkan maka program akan meminta inputan user (inputan untuk pemilihan menu), lalu program akan meminta inputan lagi (inputan untuk melanjutkan ke pemilihan menu atau berhenti), jika user memilh untuk melanjutkan maka program akan terulang. Namun jika user memilih berhenti maka list akhir mahasiswa akan ditampilkan.

Ketiga perintah:
* masukkan "TAMBAH" untuk menjalankan method `tambah`
Jika user menjalankan perintah ini maka program akan meminta user untuk menginputkan serangakian data mahasiswa, yaitu nama, nim, program studi dan fakultas. 
* masukkan "KURANG" untuk menjalankan method `kurang`
Jika user menjalankan perintah ini maka program akan meminta user untuk menginput nim mahasiswa yang datanya akan hapus, jika nim tersedia pada list maka program akan menghapus data mahasiswa tersebut pada list akan tetapi jika nim tidak tersedia maka akan mengeluarkan peringatan "NIM tidak tersedia".
* masukkan "UBAH" untuk menjalankan method `ubah`
Jika user menjalankan perintah ini maka program akan meminta user untuk menginput nim mahasiswa yang datanya akan diubah dan data mahasiswa lainnya seperti pada "TAMBAH, jika nim tersedia maka program akan berhasil diubah dari list tapi jika data nim tidak tersedia pada list maka akan mengeluarkan peringatan "NIM tidak tersedia".

## Dokumentasi
Pada program C++

![Screenshot - ](https://github.com/ArdynRF/LATIHAN1DPBO2023/blob/main/laprak1/screenshot/ss_CPP.png)
![Screenshot - ](https://github.com/ArdynRF/LATIHAN1DPBO2023/blob/main/laprak1/screenshot/SS_CPP2.png)

Pada program PHP

![Screenshot - PHP](https://github.com/ArdynRF/LATIHAN1DPBO2023/blob/main/laprak1/screenshot/SS_PHP.png)
