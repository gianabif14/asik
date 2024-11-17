#include <iostream>

using namespace std;

int main(){

    string nim, nama, kupon;

    int harga, jumlahUang, totalHarga;

    double diskon;

    char apakah;

    cout << "Masukkan 3 digit terakhir dari NIM: ";

    cin >> nim;

    cout << "Masukkan nama barang: ";

    cin.ignore();

    getline(cin, nama);

    cout << "Masukkan harga barang: ";

    cin >> harga;

    cout << "Berapa Jumlah uang yang dibayarkan :";

    cin >> jumlahUang;

    system("cls");

    cout << "Apakah kamu memiliki kupon? (y/n):";

    cin >> apakah;

    if (apakah == 'Y' || apakah == 'y')

    {

        cout << "Masukkan kode kuponmu :";

        cin >> kupon;

        if (kupon == nim)

        {

            cout << "Anda mendapatkan diskon sebesar 20%" << endl;

            diskon = 0.2 * harga;

            totalHarga = harga - diskon;

        }else{

            cout << "Kupon anda salah." << endl;

            cout << "Anda tidak mendapatkan diskon" << endl;

            totalHarga = harga;

        }

    }else{

        totalHarga = harga;

    }

    system("cls");

    if (jumlahUang >= totalHarga)

    {

        cout << "STRUK PEMBELIAN" << endl << endl;

        cout << "Nama Barang: " << nama << endl;

        cout << "Harga Barang: " << harga << endl;

        cout << "Uang yang Dibayarkan: " << totalHarga << endl;

        cout << "Kembalian: " << jumlahUang - totalHarga << endl;

    }else{

        cout << "Uang anda tidak cukup";

        return 0;

    }

    cout << "Program selesai" << endl;

    return 0;

}