//  SOAL DAN JAWABAN

// 1.Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen.?
//   --Membandingkan elemen pertama dengan elemen kedua.Jika elemen pertama lebih besar dari elemen kedua,
//     maka kedua elemen tersebut ditukar posisinya.
//   --Membandingkan elemen kedua dengan elemen ketiga. Jika elemen kedua lebih besar dari elemen ketiga, 
//     maka kedua elemen tersebut ditukar posisinya.
//   --Begitu seterusnya hingga semua elemen sebelum index i telah diurutkan. Elemen dengan index i kemudian 
//     dibandingkan dengan elemen sebelumnya satu per satu.

// 2. Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen-elemen.?
//   --Array akan dibagi menjadi bagian yang sudah terurut dan belum terurut. Bagian yang belum terurut berada di bagian paling kanan.
//   --Pada setiap iterasi, akan dicari nilai terkecil pada bagian array yang belum terurut.
//   --Index elemen dengan nilai terkecil akan disimpan sementara (variabel min_idx).

// 3.Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan.
//   --Menggunakan variable counter. Kita buat variable counter yang diinisialisasi dengan nilai 0.  Setiap kali terjadi perbandingan atau pertukaran posisi 
//     elemen, nilai counter akan ditambah Nilai counter pada akhir proses sorting akan menunjukkan jumlah total langkah yang dilakukan.
//   --Mencatat jumlah perbandingan dan pertukaran yang terjadi setiap melakukan fungsi sorting. Misalnya pada fungsi bubbleSort akan ada
//     penjumlahan jumlah perbandingan dan pertukaran yang terjadi di setiap iterasi luar dan mengembalikan hasil akhir.

// 4.
	#include <iostream>
	#include <string>
	using namespace std;

	int dhonan [71]; 
	int n; 

	void input() {      

	while (true) {
		cout << "Masukan banyaknya elemen pada array = "; 
		cin >> n; 
		if (n <= 71) 
			break; 
		else {		
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; 
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {   
		cout << "Data ke-" << (i + 1) << " : "; 
		cin >> dhonan[i];    
	}
}
	void selectionsort() {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (dhonan[j] < dhonan[min_idx])
                min_idx = j;
        }
        swap(dhonan[min_idx], dhonan[i]);
    }
}

	void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << dhonan[j] << endl;  
		if (j < n - 1) {
			cout << "-->";
		}
	}
	cout << endl;
	cout << endl;

	cout << "Jumlan pass = " << n - 1 << endl;
	cout << endl;
	cout << endl;
}
	int main() {

	input();
	selectionsort();
	display();
	system("pause");

	return 0;
}