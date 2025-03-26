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
    cout << "=======================" << endl; // Membuat tampilan susunan data elemen array
    cout << "Masukan element array" << endl;
    cout << "=======================" endl;

    for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "data ke-" << (i + 1) << ": "; // Masukan atau menginputkan nilai data n
        cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
    }
}

void insertionshort()
{ // Procedure insertionshort

    int temp; // Membuat variable data temporer atau menyimpan sementara 
    int j, i; // Membuat variable j sebagai penanda 

    for (i = 1; i <= n - 1; i++)
    { // Step 1

        temp = arr[1]; // Step 2

        j = i - 1; // Step 3
        
        while (j >= 0 && arr[j] > temp) // Step 4
        {
            arr[j + 1] = arr[j]; // Step 4a
            j--; // Step 4b
        }

        arr[j + 1] = temp; // Step 5
    }
}

void display()
{
    cout << endl; // Output baris kosong
    cout << "=======================" <<endl;
    cout << "Total passs = " << n - 1 << endl; // count element movement
    cout << "=======================" << endl; // Output ke layar
    cout << "Element array yang telah tersusun" << endl; // Output ke layar
    cout << "=======================" << endl; // Output ke layar
    
    for(int j = 0; j < n; j++)
    { // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] <<endl; // Output ke layar
    }
    cout << endl; // Output baris kosong
}
