/*
 * SISTEM MANAJEMEN PERPUSTAKAAN MINI
 *
 * ATURAN TUGAS:
 *  - Hanya boleh #include <stdio.h>
 *  - Hanya boleh materi: pilihan, perulangan, fungsi, rekursi, array, pointer
 *  - DILARANG: struct, typedef, enum, malloc, file, sorting
 *  - Pointer HANYA untuk memperbarui stok (kurangiStok / tambahStok)
 *  - Rekursi HANYA untuk totalStok
 *
 * PEMBAGIAN JOB:
 *  Job 1 : tambahBuku
 *  Job 2 : tampilBuku, stokTerbanyakTersedikit
 *  Job 3 : cariBuku
 *  Job 4 : pinjamBuku, kurangiStok
 *  Job 5 : kembalikanBuku, tambahStok
 *  Job 6 : PM (data bersama, helper, totalStok, rekapTransaksi, menu, integrasi)
 */

#include <stdio.h>

#define MAX_BUKU 100
#define MAX_TRANSAKSI 500

/* ============================================================
 * DATA BERSAMA (jangan diubah tanpa izin PM)
 * Array paralel: indeks i yang sama = satu buku / satu transaksi
 * ============================================================ */

/* Data buku */
char idBuku[MAX_BUKU][20];
char judul[MAX_BUKU][100];
char penulis[MAX_BUKU][50];
int  stok[MAX_BUKU];
int  jumlahBuku = 0;

/* Catatan transaksi */
char trxIdBuku[MAX_TRANSAKSI][20];
char trxPeminjam[MAX_TRANSAKSI][50];
int  trxStatus[MAX_TRANSAKSI];      /* 1 = dipinjam, 0 = dikembalikan */
int  jumlahTransaksi = 0;

/* ============================================================
 * PROTOTIPE FUNGSI
 * ============================================================ */
int  samaString(char a[], char b[]);
void salinString(char tujuan[], char asal[]);
int  cariIndeksID(char id[]);

void tambahBuku();                  /* Job 1 */
void tampilBuku();                  /* Job 2 */
void stokTerbanyakTersedikit();     /* Job 2 */
void cariBuku();                    /* Job 3 */
void kurangiStok(int *s);           /* Job 4 */
void pinjamBuku();                  /* Job 4 */
void tambahStok(int *s);            /* Job 5 */
void kembalikanBuku();              /* Job 5 */

int  totalStok(int arr[], int n);   /* Job 6 (rekursi) */
void rekapTransaksi();              /* Job 6 */

/* ============================================================
 * HELPER BERSAMA (dari PM, boleh langsung dipakai semua job)
 * ============================================================ */

/* Mengembalikan 1 jika string a sama dengan b, 0 jika beda */
int samaString(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0;
        }
        i++;
    }
    return a[i] == b[i];
}

/* Menyalin string asal ke tujuan */
void salinString(char tujuan[], char asal[]) {
    int i = 0;
    while (asal[i] != '\0') {
        tujuan[i] = asal[i];
        i++;
    }
    tujuan[i] = '\0';
}

/* Mencari indeks buku berdasarkan ID.
 * Mengembalikan indeks (0..jumlahBuku-1), atau -1 jika tidak ditemukan.
 * Dipakai oleh Job 3, Job 4, dan Job 5. */
int cariIndeksID(char id[]) {
    int i;
    for (i = 0; i < jumlahBuku; i++) {
        if (samaString(idBuku[i], id)) {
            return i;
        }
    }
    return -1;
}

/* ============================================================
 * JOB 1 - TAMBAH DATA BUKU
 * Tugas:
 *  - Input ID, judul, penulis, stok
 *  - Tolak jika kapasitas penuh (jumlahBuku == MAX_BUKU)
 *  - Tolak jika ID sudah ada (pakai cariIndeksID)
 *  - Tolak jika stok negatif
 *  - Simpan ke array (pakai salinString atau scanf langsung ke array)
 *  - Tambah jumlahBuku
 * ============================================================ */
void tambahBuku() {
    /* TODO Job 1 */
    printf("[Job 1 belum dikerjakan: tambahBuku]\n");
}

/* ============================================================
 * JOB 2 - TAMPILKAN KOLEKSI & STOK TERBANYAK/TERSEDIKIT
 * Tugas tampilBuku:
 *  - Jika jumlahBuku == 0, tampilkan "belum ada data buku"
 *  - Loop semua buku, tampilkan dalam format tabel rapi
 * Tugas stokTerbanyakTersedikit:
 *  - Jika data kosong, beri pesan
 *  - Cari nilai stok maksimum dan minimum (loop + if)
 *  - Tampilkan SEMUA buku yang stoknya sama dengan maksimum / minimum
 * ============================================================ */
void tampilBuku() {
    /* TODO Job 2 */
    printf("[Job 2 belum dikerjakan: tampilBuku]\n");
}

void stokTerbanyakTersedikit() {
    /* TODO Job 2 */
    printf("[Job 2 belum dikerjakan: stokTerbanyakTersedikit]\n");
}

/* ============================================================
 * JOB 3 - CARI BUKU
 * Tugas:
 *  - Tawarkan pilihan: cari berdasarkan 1) ID atau 2) judul
 *  - Cari ID: boleh pakai cariIndeksID()
 *  - Cari judul: loop + samaString(judul[i], yangDicari)
 *  - Jika ketemu, tampilkan data buku; jika tidak, "data tidak ditemukan"
 * ============================================================ */
void cariBuku() {
    /* TODO Job 3 */
    printf("[Job 3 belum dikerjakan: cariBuku]\n");
}

/* ============================================================
 * JOB 4 - CATAT PEMINJAMAN
 * Tugas pinjamBuku:
 *  - Input ID buku dan nama peminjam
 *  - Cari buku (cariIndeksID); jika tidak ada, tolak
 *  - Jika stok == 0, TOLAK peminjaman
 *  - Jika transaksi penuh (jumlahTransaksi == MAX_TRANSAKSI), tolak
 *  - Kurangi stok lewat pointer: kurangiStok(&stok[idx]);
 *  - Simpan transaksi: trxIdBuku, trxPeminjam, trxStatus = 1
 *  - Tambah jumlahTransaksi
 * Tugas kurangiStok:
 *  - Kurangi nilai yang ditunjuk pointer s sebanyak 1
 * ============================================================ */
void kurangiStok(int *s) {
    /* TODO Job 4 */
}

void pinjamBuku() {
    /* TODO Job 4 */
    printf("[Job 4 belum dikerjakan: pinjamBuku]\n");
}

/* ============================================================
 * JOB 5 - CATAT PENGEMBALIAN
 * Tugas kembalikanBuku:
 *  - Input ID buku dan nama peminjam
 *  - Cari buku (cariIndeksID); jika tidak ada, tolak
 *  - Cari transaksi dengan ID sama, peminjam sama, dan trxStatus == 1
 *  - Jika tidak ada catatan peminjaman aktif, TOLAK pengembalian
 *  - Tambah stok lewat pointer: tambahStok(&stok[idx]);
 *  - Ubah trxStatus transaksi tersebut menjadi 0
 * Tugas tambahStok:
 *  - Tambah nilai yang ditunjuk pointer s sebanyak 1
 * ============================================================ */
void tambahStok(int *s) {
    /* TODO Job 5 */
}

void kembalikanBuku() {
    /* TODO Job 5 */
    printf("[Job 5 belum dikerjakan: kembalikanBuku]\n");
}

/* ============================================================
 * JOB 6 (PM) - TOTAL STOK REKURSIF
 * Menjumlahkan stok dari arr[0] sampai arr[n-1].
 * ============================================================ */
int totalStok(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + totalStok(arr, n - 1);
}

/* ============================================================
 * JOB 6 (PM) - REKAP PEMINJAMAN DAN PENGEMBALIAN
 * ============================================================ */
void rekapTransaksi() {
    int i;
    int dipinjam = 0;
    int dikembalikan = 0;

    printf("\n=== REKAP PEMINJAMAN DAN PENGEMBALIAN ===\n");

    if (jumlahTransaksi == 0) {
        printf("Belum ada transaksi.\n");
        printf("Total stok seluruh buku: %d\n", totalStok(stok, jumlahBuku));
        return;
    }

    printf("%-4s %-15s %-20s %s\n", "No", "ID Buku", "Peminjam", "Status");
    for (i = 0; i < jumlahTransaksi; i++) {
        printf("%-4d %-15s %-20s ", i + 1, trxIdBuku[i], trxPeminjam[i]);
        if (trxStatus[i] == 1) {
            printf("Dipinjam\n");
            dipinjam++;
        } else {
            printf("Dikembalikan\n");
            dikembalikan++;
        }
    }

    printf("\nTotal peminjaman      : %d\n", jumlahTransaksi);
    printf("Sudah dikembalikan    : %d\n", dikembalikan);
    printf("Masih dipinjam        : %d\n", dipinjam);
    printf("Total stok seluruh buku: %d\n", totalStok(stok, jumlahBuku));
}

/* ============================================================
 * JOB 6 (PM) - MENU UTAMA
 * ============================================================ */
int main() {
    int pilihan;
    int c;

    do {
        printf("\n===== PERPUSTAKAAN MINI =====\n");
        printf("1. Tambah buku\n");
        printf("2. Tampilkan seluruh koleksi\n");
        printf("3. Cari buku (ID / judul)\n");
        printf("4. Pinjam buku\n");
        printf("5. Kembalikan buku\n");
        printf("6. Stok terbanyak dan tersedikit\n");
        printf("7. Rekap peminjaman dan pengembalian\n");
        printf("8. Total stok seluruh buku\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");

        /* Jika input bukan angka, buang sisa input agar tidak looping terus */
        if (scanf("%d", &pilihan) != 1) {
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            if (c == EOF) {
                pilihan = 0;
            } else {
                pilihan = -1;
            }
        }

        switch (pilihan) {
            case 1:
                tambahBuku();
                break;
            case 2:
                tampilBuku();
                break;
            case 3:
                cariBuku();
                break;
            case 4:
                pinjamBuku();
                break;
            case 5:
                kembalikanBuku();
                break;
            case 6:
                stokTerbanyakTersedikit();
                break;
            case 7:
                rekapTransaksi();
                break;
            case 8:
                printf("Total stok seluruh buku: %d\n", totalStok(stok, jumlahBuku));
                break;
            case 0:
                printf("Terima kasih. Program selesai.\n");
                break;
            default:
                printf("Menu tidak valid, coba lagi.\n");
        }
    } while (pilihan != 0);

    return 0;
}
