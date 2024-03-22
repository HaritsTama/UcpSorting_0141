#include <iostream>
using namespace std;

// Tipe Soal A
// 1. Pertama membagi data menjadi 2 bagian, kemudian data tersebut dibagi menjadi 2 sorted (Urut) dan unsorted (tidak urut) Ex : Data =  9 2 3 6 7 -> Sorted = 9 | Unsorted = 2 3 6 7 
// Kemudian kita mengambil 1 data dari unsorted list ke bagian sorted list dan mengurutkan nya ke posisi yang benar. Kita bisa mengurutkan nya dengan cara membandingkan data yang diambil dari Unsorted dengan semua data di Sorted Sorted = 2 9 | Unsorted = 3 6 7
// Setelah itu kita melakukan hal yang sama kepada data data yang lain di bagian Unsorted sampai data nya menjadi urut Ex : 2 3 6 7 9
// 2. Pertama kita mencari data yang paling kecil dari Index 0 sampai Index n - 1, setelah itu kita mengambil data yang paling kecil tersebut dan setelah itu kita letakan di index[0] Ex : 7 1 4 6 5 -> 1 7 5 6 4
// Lalu kita mencari lagi data yang paling kecil dari Index 1 sampai Index n - 1, setelah itu kita ambil data paling kecil dan menukarnya dengan data di Index[1] Ex : 1 7 5 6 4 -> 1 4 5 6 7
// Kita lanjutkan tukar menukar ini dengan Index[2], Index[3], dan seterusnya sampai urutan menjadi benar Ex : 1 4 5 6 7 (sudah urut dari kecil ke besar)
// 3. Dengan menggunakan pass, pass bisa dibilang mirip dengan putaran yang dilakukan. Kita bisa meletakan pass ini di akhir kode sortir kita dengan menaikan nilai nya + 1 setiap putaran sortir
// pass bisa dihitung dengan n - 1

int j, n, i, min_index, Nayo[41];