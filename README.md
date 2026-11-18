# perpustakaan-mini
Tubes Dasar Pemograman Kel A "Sistem Menajemen Perpustakaan Mini"

ATURAN WAJIB (semua orang)
Hanya boleh pakai materi: pilihan, perulangan, fungsi, rekursi, array, dan pointer tidak boleh selain itu dan wajib paham code yang ditulis.
* Pointer HANYA untuk update stok.
* Rekursi HANYA untuk total stok.

KETUA KELOMPOK:
• Rekap peminjaman dan pengembalian
• Menu utama berulang
• totalStok() secara rekursif
• Integrasi semua kode

JOB 1: Tambah Data Buku
Fungsi: tambahBuku()
* Input ID, judul, penulis, stok
* Tolak jika ID sudah ada
* Tolak jika stok negatif
* Tolak jika kapasitas array penuh
Materi: array, pilihan, fungsi

JOB 2: Tampilkan Koleksi + Stok Terbanyak/Tersedikit
Fungsi: tampilBuku(), stokTerbanyakTersedikit()
* Tampilkan semua buku dalam tabel rapi (perulangan)
* Jika data kosong, tampilkan pesan "belum ada data"
* Cari buku dengan stok terbanyak dan tersedikit
* Tangani jika ada lebih dari satu buku dengan stok sama
Materi: array, perulangan, pilihan, fungsi

JOB 3: Cari Buku
Fungsi: cariBuku()
* Pilihan cari berdasarkan ID atau judul
* Jika tidak ketemu, tampilkan "data tidak ditemukan"
* Fungsi mengembalikan indeks buku (HARUS ADA!), karena dipakai Job 4 dan 5
Materi: pilihan, perulangan, fungsi

JOB 4: Catat Peminjaman
Fungsi: pinjamBuku(), kurangiStok(int *s)
* Input ID buku dan nama peminjam
* Tolak jika buku tidak ada atau stok = 0
* Kurangi stok lewat pointer: kurangiStok(&stok[idx])
* Simpan catatan ke array transaksi dengan status 1
Materi: pointer, pilihan, array, fungsi

JOB 5: Catat Pengembalian
Fungsi: kembalikanBuku(), tambahStok(int *s)
* Input ID buku dan nama peminjam
* Tolak jika tidak ada catatan peminjaman aktif
* Tambah stok lewat pointer: tambahStok(&stok[idx])
* Ubah status transaksi menjadi 0
Materi: pointer, pilihan, array, fungsi
