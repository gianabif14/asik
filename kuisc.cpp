#include <iostream>
using namespace std;

int main(){
    string judul_buku[5]={"Hujan", "Tenggelamnya Kapal Van der Wijk", "Laskar Pelangi", "London Love Story", "Cantik Itu Luka"};
    string nama_pengarang[5]={"Tere Liye", "Hamka", "Andrea Hirata", "Tisa Ts", "Eka Kurniawan"};
    int harga_buku[5]={95000, 30000, 80000, 45000, 65000};
    string authUser="gian", authPass="017";
    string user, pass, judul_beli, voc;
    bool auth;
    int opsi, apa_yang_dibeli, banyak_beli;
    char pilih_voucher, dapat_diskon_voc, kembali;
    double diskon, lebihdari500k;

    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan Username: ";
        cin >> user;
        cout << "Masukkan Password: ";
        cin >> pass;
        if (user == authUser && pass == authPass)
        {
            auth = 1;
            break;
        }else{
            if (user != authUser)
            {
                cout << "Username tidak ditemukan" << endl;
            } else if (pass != authPass){
                cout << "Password yang anda masukkan salah" << endl;
            }
            auth = 0;
            if (i != 2)
            {
                cout << "Kesempatan login tersisa: " << 2-i << endl;
            }
        }
    }
    if (auth == 0)
    {
        cout << "Kesempatan login anda habis." << endl;
        return 0;
    } else{
        cout << "Login Berhasil." << endl;
        system("pause");
        do{
        system("cls");
        cout << "=== Menu Utama ===" << endl;
        cout << "1. Cek Daftar Buku\n2. Beli Buku\n3. Keluar\nOpsi\t: ";
        cin >> opsi;
        system("cls");
        switch (opsi)
        {
        case 1:
            cout << "=== Daftar Buku ===" << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << i+1 << ".\t" << judul_buku[i] << endl;
                cout << "\t" << "Penulis : " << nama_pengarang[i] << endl;
                cout << "\t" << "Harga   : Rp" << harga_buku[i] << endl << endl;
            }
            break;
        case 2:
            cout << "=== Beli Buku ===" << endl << endl;
            cout << "Judul Buku\t: ";
            cin.ignore();
            getline(cin, judul_beli);
            if (judul_beli == judul_buku[0] || judul_beli == judul_buku[1] || judul_beli == judul_buku[2] || judul_beli == judul_buku[3] || judul_beli == judul_buku[4])
            {
                for (int i = 0; i < 5; i++)
                {
                    if(judul_beli == judul_buku[i]){
                        apa_yang_dibeli = i;
                        break;
                    }
                }
                cout << "Banyak\t\t: ";
                cin >> banyak_beli;
                cout << "Apakah anda punya voucher (Y/N): ";
                cin >> pilih_voucher;
                if (pilih_voucher == 'Y' || pilih_voucher == 'y')
                {
                    cout << "Kode Voucher: ";
                    cin >> voc;
                    if (voc == authUser)
                    {
                        dapat_diskon_voc = 1;
                        diskon = 0.200 * harga_buku[apa_yang_dibeli] * banyak_beli;
                        cout << "Anda mendapatkan diskon sebesar 20%" << endl;
                    }else{
                        dapat_diskon_voc = 0;
                        diskon = 0;
                    }
                }else{
                    dapat_diskon_voc = 0;
                    diskon = 0;
                }
                cout << endl << "=== Nota ===" << endl << endl;
                cout << "Username\t\t: " << user << endl;
                cout << "Judul\t\t\t: " << judul_beli << endl;
                cout << "Jumlah Beli\t\t: " << banyak_beli << endl;
                cout << "Total Harga\t\t: " << harga_buku[apa_yang_dibeli] * banyak_beli << endl;
                if (dapat_diskon_voc == 1)
                {
                    cout << "Diskon Voucher\t\t: " << diskon << endl;
                }
                if (harga_buku[apa_yang_dibeli] * banyak_beli > 500000)
                {
                    lebihdari500k = (harga_buku[apa_yang_dibeli] * 1.0 * banyak_beli) * 0.1500;
                    cout << "Diskon Pembelian\t: " <<  lebihdari500k << endl;
                }else{
                    lebihdari500k = 0;
                }
                cout << "Total Diskon\t\t: " << diskon+lebihdari500k << endl;
                cout << "Total Harga Akhir\t: " << (harga_buku[apa_yang_dibeli] * banyak_beli)-(diskon+lebihdari500k) << endl;
            }else{
                cout << "Judul buku tidak terdaftar." << endl;
            }
            break;
        case 3:
            break;
        
        default:
            break;
        }
        cout << "Apakah anda ingin kembali? (Y/N): ";
        cin >> kembali;
    } while (kembali != 'n' && kembali != 'n');
    }
}