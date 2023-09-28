#include <iostream>

using namespace std;

int main()
{
    cout << "Matriks" << endl;
    int a[25][25];
    int kolom, baris;
    cout << "Masukkan Jumlah Baris: ";
    cin >> baris;
    cout << "Masukkan Jumlah Kolom: ";
    cin >> kolom;
    for (int i = 1; i <= baris; i++) {
        for (int b = 1; b <= kolom; b++) {
            cout << "Masukkan Data Baris ke " << i << " Kolom ke " << b << " : ";
            cin >> a[i][b];
        }
    }

    cout << endl << "Hasil Matriks: " << endl << endl;
    for (int i = 1; i <= baris; i++) {
        for (int b = 1; b <= kolom; b++) {  
            cout << a[i][b];
        }
        cout << endl;
    }
    return 0;
}