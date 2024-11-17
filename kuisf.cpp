#include <bits/stdc++.h>
using namespace std;

int main(){
    string authUser = "gian", authPass = "123240017";
    string user, pass, nama;
    string nama_barang[10] = {"Palu", "Paku", "Paku Beton", "Gergaji", "Cangkul", "Obeng", "Pahat", "Kuas", "Engsel Pintu", "Cat"};
    int harga_barang[10] = {45, 1, 2, 65, 250, 30, 190, 20, 20, 92};
    int banyak_pemesanan, total, uang, kembalian, pilih_barang, total_pembayaran;
    double diskon;

    for (int i = 0; i < 10; i++)
    {
        harga_barang[i]*=1000;
    }
    
    cout << "========================" << endl;
    cout << "|  Toko Besi Pak Iman  |" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Username: ";
    cin >> user;
    cout << "Masukkan Password: ";
    cin >> pass;

    if(user == authUser && pass == authPass){
        system("cls");
        cout << "====================" << endl;
        cout << "|  Menu Pemesanan  |" << endl;
        cout << "====================" << endl;
        cout << "Masukkan Nama Anda: ";
        cin.ignore();
        getline(cin, nama);
        system("cls");
        cout << "==========================" << endl;
        cout << "|  Barang yang tersedia  |" << endl;
        cout << "==========================" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << i+1 << ". " << nama_barang[i] << ": Rp" << harga_barang[i] << endl;
        }
        cout << "Masukkan No Barang Yang Ingin Kamu Beli: ";
        cin >> pilih_barang;
        if(pilih_barang >= 1 && pilih_barang <= 10){
            cout << "Nama Barang: " << nama_barang[pilih_barang-1] << endl;
            cout << "Harga Barang Per Unit: " << harga_barang[pilih_barang-1] << endl;
            cout << "Masukkan Jumlah Pesanan: ";
            cin >> banyak_pemesanan;
            total = harga_barang[pilih_barang-1]*banyak_pemesanan;
            cout << "Total Harga: Rp" << total << endl;
            if(total >= 125000){
                diskon = 0.025 * total;
                if(diskon > 21000){
                    diskon = 21000;
                }
                total_pembayaran = total - diskon;
                cout << "Diskon: " << diskon << endl;
            }else{
                total_pembayaran = total;
            }
            cout << "Total Pembayaran: " << total_pembayaran << endl;
            cout << "Masukkan Uang yang Dibayarkan: ";
            cin >> uang;
            if(uang >= total_pembayaran){
                kembalian = uang - total_pembayaran;
                cout << "Kembalian: " << kembalian << endl;
                if (total_pembayaran >= 1000000 && total_pembayaran <= 1259999)
                {
                    cout << "Anda mendapatkan hadiah souvenir berupa Gantungan Kunci" << endl;
                }else if (total_pembayaran >= 1260000 && total_pembayaran <= 1389999)
                {
                    cout << "Anda mendapatkan hadiah souvenir berupa Mobil Mainan" << endl;
                }else if (total_pembayaran >= 1390000 && total_pembayaran <= 2109999)
                {
                    cout << "Anda mendapatkan hadiah souvenir berupa Bolpoin Pilot" << endl;
                }else if (total_pembayaran >= 2110000 && total_pembayaran <= 4000000)
                {
                    cout << "Anda mendapatkan hadiah souvenir berupa Voucher Makan Rp100.000,-" << endl;
                }else if (total_pembayaran > 4000000)
                {
                    cout << "Anda mendapatkan hadiah souvenir berupa Mobil Kijang" << endl;
                }
            }else {
                cout << "Uang anda kurang" << endl;
            }
        }else{
            cout << "Menu yang diinput tidak ada" << endl;
        }
        
        cout << endl << "Program selesai." << endl;
        system("pause");
    }else{
        cout << "User dan Pass Salah." << endl;
        system("pause");
    }
    return 0;
}