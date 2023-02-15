import java.util.*;

public class main {

    public static void main(String[] args) {

        List<Mahasiswa> mlist = new ArrayList<>();

        Scanner scanner = new Scanner(System.in);

        System.out.print("Masukkan berapa banyak orang mahasiswa : ");
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            Mahasiswa temp = new Mahasiswa();

            String name = scanner.next();
            int nim = scanner.nextInt();
            String fakultas = scanner.next();
            String prodi = scanner.next();

            temp.setNama(name);
            temp.setNim(nim);
            temp.setFakultas(fakultas);
            temp.setProdi(prodi);

            mlist.add(temp);
        }

        System.out.println("Berikut isi dari list (awal): ");
        for (Mahasiswa mahasiswa : mlist) {
            System.out.println(mahasiswa.getNama() + " " + mahasiswa.getNim() + " " +
                    mahasiswa.getFakultas() + " " + mahasiswa.getProdi());
        }
        System.out.println();

        System.out.println("Jika anda mau mengedit data dalam list");
        System.out.println("Dapat menggunakan beberapa masukkan :");
        System.out.println("TAMBAH   --> untuk menambah isi list mahasiswa");
        System.out.println("KURANG   --> untuk menghapus isi list mahasiswa");
        System.out.println("RUBAH    --> untuk mengubah isi list mahasiswa");
        System.out.println();

        int c;
        System.out.println("Masukkan input (1) jika ingin melakukkan perubahan dan (2) jika ingin berhenti");
        c = scanner.nextInt();

        String instruksi;
        while (c == 1) {
            Mahasiswa order = new Mahasiswa();
            System.out.print("\nMasukkan instruksi: ");
            instruksi = scanner.next();
            if (instruksi.equals("TAMBAH")) {
                System.out.println("Masukkan nilai (nim) (nama) (fakultas) (prodi)");
                int nim = scanner.nextInt();
                String name = scanner.next();
                String fakultas = scanner.next();
                String prodi = scanner.next();
                order.setNama(name);
                order.setNim(nim);
                order.setFakultas(fakultas);
                order.setProdi(prodi);
                order.tambah(mlist, order);
            } else if (instruksi.equals("KURANG")) {
                System.out.println("Masukkan nilai (nim)");
                int nim = scanner.nextInt();
                order.setNim(nim);
                order.kurang(mlist, order);
            } else if (instruksi.equals("RUBAH")) {
                System.out.println("Masukkan nilai (nim)*yg sudah ada, lalu (nama) (fakultas) (prodi)*baru");
                int nim = scanner.nextInt();
                String name = scanner.next();
                String fakultas = scanner.next();
                String prodi = scanner.next();
                order.setNama(name);
                order.setNim(nim);
                order.setFakultas(fakultas);
                order.setProdi(prodi);
                order.ubah(mlist, order);
            }
            System.out.println("jika ingin lanjut (1) jika ingin stop (2)");
            System.out.print("masukkan : ");
            c = scanner.nextInt();
        }

        System.out.println("\nBerikut isi dari list (Akhir): ");
        for (Mahasiswa mahasiswa : mlist) {
            System.out.println(mahasiswa.getNama() + " " + mahasiswa.getNim() + " " +
                    mahasiswa.getFakultas() + " " + mahasiswa.getProdi());
        }
    }
}
