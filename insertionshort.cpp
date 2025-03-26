#include <iostream>
using namespace std;

int arr[20]; // Membuuat Array dengan panjang data 20
int n; // Membuat variable inputan n

void input ()
{ // Procedure Input
    wihle(true)
    {
        cout << "Masukan jumlah data pada array : "; // Membuat inputan jumlahh element Array 
        cin >> n; // Memanggil vatriable inputan n

        if (n <= 20)
        {
            // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl; // Membuat jarak per baris program
    cout << "======================="

}