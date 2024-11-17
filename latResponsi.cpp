#include <bits/stdc++.h>
using namespace std;

int main(){
    string auth_user = "gianabi", auth_pass = "123aaa";
    string user, pass;
    string id[1000], nama[1000], jenKel[1000], tglLhr[1000];
    string jabatan[4]={"Manager", "Kepala Department", "Staff", "Lainnya"};
    char ulang, pilih, keluar;
    int n, jumKar=0, jumGaj=0, a;
    int gaji[4]={10000000, 7000000, 3000000, 2000000};

    do{
        cout << setw(11) << setfill('=') << '=' << endl;
        cout << "|  LOGIN  |" << endl;
        cout << setw(11) << setfill('=') << '=' << endl;
        cout << endl << "Username: ";
        cin >> user;
        cout << "Password: ";
        cin >> pass;

        if(auth_user == user && auth_pass == pass){
            cout << endl << "Login Berhasil." << endl;
            ulang = 'n';
            system("pause");
            system("cls");
        } else{
            cout << endl << "User atau pass salah. Coba lagi" << endl;
            ulang = 'y';
            system("pause");
            system("cls");
        }
    } while(ulang == 'y');

    do{
    system("cls");
    cout << setw(19) << setfill('=') << '=' << endl;
    cout << "|  Data Karyawan  |" << endl;
    cout << setw(19) << setfill('=') << '=' << endl;
    cout << "MENU" << endl;
    cout << "1. Menyimpan Data Karyawan" << endl;
    cout << "2. Menampilkan Data Karyawan" << endl;
    cout << "3. Total Gaji Karyawan" << endl;
    cout << "0. Keluar Program" << endl << endl;
    cout << "Pilih Menu: ";
    cin >> pilih;
    system("cls");
    switch(pilih){
        case '1':
            cout << "Masukkan Jumlah Karyawan: ";
            cin >> n;
            a = jumKar+n;
            for(jumKar=jumKar; jumKar < a; jumKar++){
                cout << endl << "Pilihan ID Karyawan:\nA-Manager\nB-Kepala Department\nC-Staff\nLainnya-Karyawan Lainnya\n";
                cout << endl << "Masukkan ID Karyawan (A/B/C/Lainnya): ";
                cin >> id[jumKar];
                if(id[jumKar] == "A") jumGaj += gaji[0];
                else if(id[jumKar] == "B") jumGaj += gaji[1];
                else if(id[jumKar] == "C") jumGaj += gaji[2];
                else jumGaj += gaji[3];
                cout << "Masukkan Nama: ";
                getline(cin >> ws, nama[jumKar]);
                cout << "Masukkan Jenis Kelamin (L/P): ";
                cin >> jenKel[jumKar];
                cout << "Masukkan TGL LHR (dd/mm/yyyy): ";
                cin >> tglLhr[jumKar];
            }
            cout << endl << "Data Berhasil Dimasukkan" << endl;
            break;
        case '2':
            cout << "Perusahaan Memiliki " << jumKar << " Karyawan:" << endl;
            for(int i=0; i < jumKar; i++){
                cout << endl << "ID Karyawan: " << id[i] << endl;
                cout << "Nama: " << nama[i] << endl;
                cout << "Jenis Kelamin: " << jenKel[i] << endl;
                cout << "TGL LHR: " << tglLhr[i] << endl;
                if(id[i] == "A") cout << "Jabatan: " << jabatan[0] << endl;
                else if(id[i] == "B") cout << "Jabatan: " << jabatan[1] << endl;
                else if(id[i] == "C") cout << "Jabatan: " << jabatan[2] << endl;
                else cout << "Jabatan: " << jabatan[3] << endl;
                
                if(id[i] == "A") cout << "Gaji: " << gaji[0] << endl;
                else if(id[i] == "B") cout << "Gaji: " << gaji[1] << endl;
                else if(id[i] == "C") cout << "Gaji: " << gaji[2] << endl;
                else cout << "Gaji: " << gaji[3] << endl;
            }
            break;
        case '3':
            cout << "Total gaji karyawan: " << jumGaj << endl;
            break;
        case '0':
            cout << "Apakah anda ingin keluar dari program? (Y/N): ";
            cin >> keluar;
            if(keluar == 'y' || keluar == 'Y') return 0;
            break;
        default: 
            cout << "Menu tidak valid." << endl;
            break;  
    }
    cout << "Masukkan apapun untuk kembali ke menu: ";
    cin >> ulang;
    ulang = 'y';
    } while(ulang == 'y');
}