import java.util.*;

class Mahasiswa {
    private String nama;
    private int nim;
    private String prodi;
    private String fakultas;

    public Mahasiswa() {
        this.nama = "";
        this.nim = 0;
        this.prodi = "-";
        this.fakultas = "-";
    }

    public Mahasiswa(String nama, int nim, String prodi, String fakultas) {
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    public String getNama() {
        return this.nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public int getNim() {
        return this.nim;
    }

    public void setNim(int nim) {
        this.nim = nim;
    }

    public String getProdi() {
        return this.prodi;
    }

    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    public String getFakultas() {
        return this.fakultas;
    }

    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public void tambah(List<Mahasiswa> n, Mahasiswa temp) {
        n.add(temp);
    }

    public void kurang(List<Mahasiswa> n, Mahasiswa temp) {
        int x = 0;
        int flag = -1;
        int ada = 0;
        for (ListIterator<Mahasiswa> i = n.listIterator(); i.hasNext();) {
            Mahasiswa item = i.next();
            if (item.getNim() == temp.getNim()) {
                ada = 1;
                flag = x;
                break;
            } else {
                ada = 2;
            }
            x++;
        }

        if (ada == 1) {
            n.remove(flag);
        } else {
            System.out.println("NIM tidak ditemukan");
        }
    }

    public void ubah(List<Mahasiswa> n, Mahasiswa temp) {
        int flag = -1;
        int ada = 0;
        int x = 0;
        for (ListIterator<Mahasiswa> i = n.listIterator(); i.hasNext();) {
            Mahasiswa item = i.next();
            if (item.getNim() == temp.getNim()) {
                ada = 1;
                flag = x;
                break;
            }
            x++;
        }

        if (ada == 1) {
            n.set(flag, temp);
        } else {
            System.out.println("NIM yang dicari tidak ditemukan\n");
        }
    }

    public void printData(List<Mahasiswa> n) {
        for (Mahasiswa item : n) {
            System.out.println("Nama: " + item.getNama() + ", NIM: " + item.getNim() + ", Prodi: " + item.getProdi()
                    + ", Fakultas: " + item.getFakultas());
        }
    }
}