### Apa itu Linked List?
**Linked List** seperti layaknya **Array**, yaitu sebuah struktur data linier (bisa ditemukan di bidang **Struktur Data dan Algoritma**). Linked List berupa node-node (simpul) yang saling terhubung satu sama lain, tersimpan di alamat memori yang acak, tidak berdekatan atau terurut seperti halnya pada array. Linked List menjadi penting karena dia merupakan struktur data yang paling sering digunakan setelah array.

### Lalu, bagaimana setiap data pada Linked List terhubung?
Setiap data pada Linked List disebut elemen, dan elemen ini saling terhubung dengan menggunakan *pointer*. Elemen ini terdapat dalam sebuah *link* atau *node*. Jadi, setiap node mempunyai 2 item, yaitu elemen (data) dan juga link (penghubung).

Untuk visualisasinya bisa dilihat pada gambar dibawah

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list.jpg">

#### image by [Tutorials Point](https://www.tutorialspoint.com/data_structures_algorithms/linked_list_algorithms.htm)

Untuk lebih mendalami lagi, kita akan membandingkannya dengan array. Ada beberapa poin yang akan saya bahas, dan poin ini saya dapat dari materi kuliah.

#### 1. Perbedaan Array dan Linked-List
 ________________________________________________
|_____________________ Array 	  | Linked-List  | <br>
| Akses elemen  	  | bisa acak | harus urut 	 | <br>
| Alamat memori 	  | berurutan | acak		 | <br>
| Jumlah elemen 	  | tetap	  | Dinamis 	 | <br>
| Berupa			  | data	  | node 		 | <br>
| Hubungan antar data | data	  | pointer		 | <br>
|_____________________|___________|______________|

#### 2. Kecepatan (tergantung pada operasi yang dilakukan)
 _______________________________________________________________
|____________________________________| Array 	| Linked-List 	| <br>
| Akses elemen pada indeks tertentu  | 	  V		|				| <br>
| Insert dan delete					 |			|		V		| <br>
| Merge								 |			|		V		| <br>
| Pencarian							 | 	  V		|		V		| <br>
|____________________________________|__________|_______________|

#### 3. Perbedaan Array dan ArrayList  <br>
Array mempunyai jumlah elemen yang tetap, yaitu saat ia dideklarasikan.
ArrayList sebenearnya sama dengan Array, namun jumlah elemen pada ArrayList bisa berubah sesuai kebutuhan.
Maka dari itu, ArrayList punya method untuk memanipulasi elemennya, seperti add untuk menambah elemen. Tipe data ini terdapat pada Java.

#### 4. Keunggulan Linked-List dari Array
- Ukuran memori dinamis sesuai data yang disimpan
- Operasi insertion dan deletion relatif lebih cepat
- Penggabungan lebih dari satu linked-list lebih cepat dan mudah

#### 5. Perbedaan Array statis dan dinamis
- Statis: jumlah elemen tetap. contoh: Array
- Dinamis: jumlah elemen dapat berubah. contoh: ArrayList di Java

#### 6. Node / simpul dalam linked-list
Node dalam linked-list yaitu merujuk pada setiap elemen pada linked-list. Setiap node memuat suatu data dan referensi dari alamat memori node berikutnya.