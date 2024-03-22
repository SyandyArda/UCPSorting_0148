//B
//1. Algoritma bubble sort mulai membandingkan dari bilangan/nilai/elemen acak dari yang terkecil hingga terbesar, dan cara menukarnya satu persatu dari yang terkecil seperti >>>>>
//contohnya seperti elemen 1 tukar ke elemen 2, elemen 2, elemen 2 ke elemen 3, elemen 3 ke elemen 4 dan seterusnya tapi ingat yg ditukar apabila elemen tidak >  dari elemen disampingnya "kirinya".

//2.Algoritma shell sort memanfaatkan prinsip insertion sort dengan cara mengurutkan elemen elemen tertentu dalam array terlebih dahulu
//3.Algoritma bubble sort dan Algoritma insertion sort, karena kedua algoritma ini cukup efisien dikarenakan kompleksitas waktu yg baik ketika data yang sudah hampir terurut


#include <iostream>
using namespace std;

const int arda1 = 48; // Ukuran variabel array

void bubbleSort(int arda[], int n) {
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; i++) {
            if (arda[i] < arda[min_index]) {
                min_index = i;
            }
        }
        // Swap arda[j] with arda[min_index]
        int temp = arda[j];
        arda[j] = arda[min_index];
        arda[min_index] = temp;
    }
}

int main() {
    int arda[arda1];

    // Input data dari pengguna
    cout << "Masukkan " << arda1 << " angka:\n";
    for (int i = 0; i < arda1; i++) {
        cin >> arda[i];
    }

    bubbleSort(arda, arda1);
    cout << "Sorted array:\n";
    for (int i = 0; i < arda1; i++) {
        cout << arda[i] << " ";
    }
    return 0;
}





