// ASD_Pert_Ketiga_234.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "Masukkan elemen array: " << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }
}

int main()
{
    std::cout << "Hello World!\n";
}
