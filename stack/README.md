## Stack
merupakan sebuah tipe data abstract, yang banyak digunakan pada bahasa pemrograman.

Stack kalau kita terjemahkan ke Bahasa Indonesia berarti tumpukan.
Dinamakan stack karena implementasinya memang seperti stack (tumpukan) di dalam dunia nyata.

Dimana kita hanya bisa melakukan sesuatu pada elemen yang paling atas saja (terakhir ditumpuk). Yang berarti juga, stack mempunyai konsep LIFO (Last In First Out). Elemen yang terakhir dimasukkan, adalah elemen yang pertama kali diakses.

Operasi pada stack:

#### Umum
	push: memasukkan data / elemen baru ke dalam stack. Data tersebut akan berada pada urutan paling atas.
	pop : mengakses (menghapus) data paling atas pada stack.

#### Pendukung
	peek   : untuk mengambil elemen yang paling atas dari stack.
	isfull : pengecekan apakah stack sudah penuh.
	isempty: pengecekan apakah stack masih kosong.
