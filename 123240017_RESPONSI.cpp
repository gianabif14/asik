#include <bits/stdc++.h>
using namespace std;

void settingCantik(string x){ //fungsi bikin cantik tampilan tanpa ketik manual
    int y = x.length();
    system("cls");
    cout << '+' << setw(y+5) << setfill('=') << '+'  << endl;
    cout << "|  " << x << "  |" << endl;
    cout << '+' << setw(y+5) << setfill('=') << '+'  << endl;
}

int main(){
    char pilih, ulang, pilihBarang, ulangi;
    int idUser=0, idBarang=0, noBarang;
    string user[100][2], username, password; 
    //user[][0] -> username
    //user[][1] -> password
    string barang[100][3], userLogin;
    //barang[][0] -> nama barang
    //barang[][1] -> alamat barang
    //barang[][2] -> idUser pengirim (yang sedang login)
    bool sama = 0, adaBarang = 0;
    do{
        settingCantik("Program Ekspedisi Asik");
        cout << "1. Register" << endl; //menu awal, dengan pilihan register dan login
        cout << "2. Login" << endl << endl;
        cout << "Pilih Menu: ";
        cin >> pilih;
        switch (pilih)
        {
        case '1':
            settingCantik("HALAMAN REGISTER");
            cout << "Masukkan Username: ";
            cin >> username;
            cout << "Masukkan Password: ";
            cin >> password;
            for (int i = 0; i < idUser; i++)
            {
                sama = 0; //regis berhasil jika username tidak ada yang sama
                if(user[i][0] == username){ //pengecekan username sama atau tidak
                    sama = 1; //jika ada yang sama, maka sama = true, dan tidak bisa regis
                    break;
                }
            }
            if(sama == 0){ //jika tidak ada username yang sama
                user[idUser][0] = username;
                user[idUser][1] = password;
                idUser++; //menghitung jumlah user, sekaligus untuk batasan pengecekan user
                cout << "Registrasi Berhasil" << endl;
            }else{
                cout << "Registrasi gagal, username telah ada" << endl; //jika ada username yang sama
            }
            break;
        case '2':
            settingCantik("HALAMAN LOGIN");
            cout << "Masukkan Username: ";
            cin >> username;
            cout << "Masukkan Password: ";
            cin >> password;
            for (int i = 0; i < idUser; i++)
            {
                sama = 0; //inisialisasi awal adalah user dan password salah
                if(user[i][0] == username && user[i][1] == password){
                    userLogin = username; //untuk menyimpan user yang sedang login (opsional sih sebenernya, gak pake juga bisa pake variabel username)
                    sama = 1; //user berhasil login (user dan pass benar)
                    break;
                }
            }
            if(sama == 1){
                cout << "Login Berhasil" << endl;
                system("pause");
                do{
                settingCantik("HALAMAN MENU");
                cout << "1. Tambah Barang" << endl;
                cout << "2. Lihat Barang" << endl << endl;
                cout << "Pilih Menu: ";
                cin >> pilihBarang;
                switch (pilihBarang)
                {
                case '1':
                    settingCantik("TAMBAH BARANG");
                    cout << "Masukkan Nama Barang: ";
                    getline(cin >> ws, barang[idBarang][0]); //cin >> ws, sebagai pengganti cin.ignore()
                    cout << "Masukkan Alamat: ";
                    getline(cin >> ws, barang[idBarang][1]);
                    barang[idBarang][2] = userLogin;
                    cout << "Barang Berhasil Ditambahkan" << endl;
                    idBarang++; //menambahkan jumlah barang
                    break;
                case '2':
                    settingCantik("DAFTAR BARANG");
                    adaBarang = 0; //inisialisasi bahwa barang tidak ada (untuk error handling ketika tidak ada barang)
                    noBarang=1; //untuk memulai dari angka 1 saat cout barang (tidak bergantung kepada integer i pada for looping)
                    for (int i = 0; i < idBarang; i++)
                    {
                        if (userLogin == barang[i][2]) //mengecek barangnya punya user yang sedang login atau tidak
                        {
                            adaBarang = 1;
                            cout << noBarang << ". " << barang[i][0] << " >> " << barang[i][1] << endl;
                            noBarang++;
                        }
                    }
                    if (adaBarang == 0)
                    {
                        cout << "Tidak Ada Barang Yang Ingin Dikirim" << endl;
                    }
                    break;
                default:
                    cout << "Menu Tidak Valid" << endl;
                    break;
                }
                cout << "Apakah Anda ingin kembali ke menu barang? (Y/N): ";
                cin >> ulangi;
                } while(ulangi == 'y' || ulangi == 'Y');
            }else{
                cout << "Username atau Password Salah." << endl;
            }
            break;
        default:
            cout << "Menu Tidak Valid" << endl;
            break;
        }
        cout << "Apakah Anda ingin kembali ke menu awal? (Y/N): ";
        cin >> pilih;
    }while(pilih == 'y' || pilih == 'Y');
    settingCantik("PROGRAM BERHENTI");
}