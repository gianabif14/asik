#include <iostream>
using namespace std;
int main(){
    string nama, nim;
    string authNama="Gian Abi Firdaus", authNim="123240017";
    char pilih_buah;
    int berat_buah, harga_per_kg, jumlah_harga, harga, bawa_uang;
    double diskon;
    cout << "==================================" << endl;
    cout << "| Program Penghitung Total Harga |" << endl;
    cout << "==================================" << endl;
    cout << "Masukkan Nama: ";
    getline (cin, nama);
    cout << "Masukkan NIM: ";
    cin >> nim;
    if (nama == authNama && nim == authNim)
    {
        system("cls");
        cout << "==================================" << endl;
        cout << "| Program Penghitung Total Harga |" << endl;
        cout << "==================================" << endl << endl;
        cout << "a. Semangka = 20.000\nb. Apel = 23.000\nc. Pisang = 15.000\nd. Melon = 18.000\ne. Jeruk = 17.000\n";
        cout << "Buah apa yang ingin kamu beli? :" ;
        cin >> pilih_buah;
        cout << "Berapa KG buah yang ingin kamu beli? :";
        cin >> berat_buah;
        switch (pilih_buah)
        {
        case 'a':
            cout << "Anda ingin membeli Semangka dengan berat: " << berat_buah << endl;
            harga_per_kg = 20000;
            break;
        case 'b':
            cout << "Anda ingin membeli Apel dengan berat: " << berat_buah << endl;
            harga_per_kg = 23000;
            break;
        case 'c':
            cout << "Anda ingin membeli Pisang dengan berat: " << berat_buah << endl;
            harga_per_kg = 15000;
            break;
        case 'd':
            cout << "Anda ingin membeli Melon dengan berat: " << berat_buah << endl;
            harga_per_kg = 18000;
            break;
        case 'e':
            cout << "Anda ingin membeli Jeruk dengan berat: " << berat_buah << endl;
            harga_per_kg = 17000;
            break;
        default:
            cout << "Anda salah mengetikkan." << endl;
            return 0;
        }
        jumlah_harga = harga_per_kg * berat_buah;
        if (berat_buah >= 5)
        {
            diskon = 0.05 * jumlah_harga;
            harga = jumlah_harga - diskon;
        }else{
            harga = jumlah_harga;
        }
        cout << "Berapa uang yang kamu bawa? :";
        cin >> bawa_uang;
        if (bawa_uang >= harga)
        {
            system("cls");
            cout << "Pembelian berhasil" << endl;
            cout << "Buah yang kamu beli adalah :" << endl;
            switch (pilih_buah)
        {
        case 'a':
            cout << "Semangka dengan berat: " << berat_buah << endl;
            break;
        case 'b':
            cout << "Apel dengan berat: " << berat_buah << endl;
            break;
        case 'c':
            cout << "Pisang dengan berat: " << berat_buah << endl;
            break;
        case 'd':
            cout << "Melon dengan berat: " << berat_buah << endl;
            break;
        case 'e':
            cout << "Jeruk dengan berat: " << berat_buah << endl;
            break;
        default:
            return 0;
        }
            if (berat_buah >= 5)
            {
                cout << "Karena kamu beli buah lebih dari 5 KG" << endl;
                cout << "Maka kamu mendapatkan diskon sebesar " << diskon << endl;
                cout << "Anda hanya membayar sebesar " << harga << endl;
            }else{
                cout << "Anda membayar sebesar " << harga << endl;
            }
            cout << "Sisa uang kamu adalah: " << bawa_uang - harga << endl;
        }else{
            cout << "Uang yang kamu bawa kurang\nTransaksi gagal." << endl;
        }
    }else{
        cout << "Nama dan NIM salah" << endl;
    }
     return 0;
}
