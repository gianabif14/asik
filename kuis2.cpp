#include <iostream>

using namespace std;

int main(){

    string nama, nim, hari;

    string authNama="Gian Abi Firdaus", authNim="123240017";

    char pilih, pilihGrade;

    int banyak, harga_satuan, jumlah_harga, harga;

    double diskon;

    cout << "===========================================" << endl;

    cout << "| Program Penghitung Total Harga Toko Ijo |" << endl;

    cout << "===========================================" << endl;

    cout << "Masukkan Nama: ";

    getline (cin, nama);

    cout << "Masukkan NIM: ";

    cin >> nim;

    cout << "Hari apa kamu beli? (Weekday atau Weekend): ";

    cin >> hari;

    if (nama == authNama && nim == authNim)

    {

        system("cls");

        cout << "===========================================" << endl;

        cout << "| Program Penghitung Total Harga Toko Ijo |" << endl;

        cout << "===========================================" << endl;

        cout << "a. Laptop\nb. PC\nc. HP\n";

        cout << "Apa yang ingin kamu beli? :";

        cin >> pilih;

        system("cls");

        switch (pilih)

        {

        case 'a':

            cout << "Anda ingin membeli Laptop" << endl;

            cout << "Grade Tersedia: \na. Grade A (960)\nb. Grade B (640)\nc. Grade C (320)\n";

            cout << "Grade apa yang ingin kamu beli? :";

            cin >> pilihGrade;

            switch (pilihGrade)

            {

            case 'a':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 960;

                break;

            case 'b':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 640;

                break;

            case 'c':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 320;

                break;

           

            default:

                cout << "Pilihan salah." << endl;

                return 0;

            }

            break;

        case 'b':

            cout << "Anda ingin membeli PC" << endl;

            cout << "Grade Tersedia: \na. Grade A (1000)\nb. Grade B (700)\nc. Grade C (400)\n";

            cout << "Grade apa yang ingin kamu beli? :";

            cin >> pilihGrade;

            switch (pilihGrade)

            {

            case 'a':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 1000;

                break;

            case 'b':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 700;

                break;

            case 'c':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 400;

                break;

           

            default:

                cout << "Pilihan salah." << endl;

                return 0;

            }

            break;

       

        case 'c':

            cout << "Anda ingin membeli HP" << endl;

            cout << "Grade Tersedia: \na. Grade A (600)\nb. Grade B (400)\nc. Grade C (200)\n";

            cout << "Grade apa yang ingin kamu beli? :";

            cin >> pilihGrade;

            system("cls");

            switch (pilihGrade)

            {

            case 'a':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 600;

                break;

            case 'b':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 400;

                break;

            case 'c':

                cout << "Berapa yang ingin kamu beli? : ";

                cin >> banyak;

                harga_satuan = 200;

                break;

           

            default:

                cout << "Pilihan salah." << endl;

                return 0;

            }

            break;

        default:

            break;

        }

        jumlah_harga = banyak * harga_satuan;

        system("cls");

        if (banyak >= 3 && hari == "Weekend")

        {

            diskon = 0.1 * jumlah_harga;

            harga = jumlah_harga - diskon;

            cout << "Anda beli di hari Weekend dan beli lebih dari 2" << endl;

            cout << "Anda mendapatkan diskon sebesar 10%" << endl;

            cout << "Anda perlu membayar sebesar " << harga << endl;

        }else{

            harga = jumlah_harga;

            cout << "Anda perlu membayar sebesar " << harga << endl << endl;

        }

        cout << "Program berhasil.";

    }

}