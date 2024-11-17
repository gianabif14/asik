#include <bits/stdc++.h>
using namespace std;

int main(){
    char konfir;
    int diagnosa=0;
    int jumlah=0;
    string nim, tgl, nama;
    cout << "DIAGNOSA PENYAKIT JERAWAT" << endl;
    cout << setw(60) << setfill('-') << '-' << endl;
    cout << "No. Diagnosa (NIM Anda) : " ;
    cin >> nim;
    cout << "Tgl. Diagnosa           : " ;
    cin.ignore();
    getline(cin, tgl);
    cout << "Nama Pasien (Nama Anda) : " ;
    getline(cin, nama);
    cout << setw(60) << setfill('-') << '-' << endl << endl;
    cout << "PERTANYAAN GEJALA :" << endl << endl;
    string gejala[17]={" ","[G01] Berwarna merah", "[G02] Berisi putih seperti nasi", "[G03] Memliki jumlah yang banyak", "[G04] Berwarna merah dipinggir dan putih ditengah", "[G05] Berukuran besar", "[G06] Terasa sakit bila disentuh", "[G07] Menyebar keseluruh wajah", "[G08] Berbentuk tonjolan yang meradang","[G09] Berbentuk bintik-bintik putih yang berukuran kecil dari komedo", "[G10] Terasa saat diraba", "[G11] Menyebar ke bagian tubuh", "[G12] Berukuran kecil", "[G13] Berwarna putih", "[G14] Berwarna hitam", "[G15] Tidak terasa sakit bila disentuh", "[G16] Bentuknya melebar"};
    string penyakit[9]={" ", "[ P01 ] Whiteheads", "[ P02 ] Blackheads", "[ P03 ] Papule", "[ P04 ] Postule", "[ P05 ] Nodule", "[ P06 ] Cyst", "[ P07 ] Milia", "[ P08 ] Acne rosacea"};
    jumlah++;
    cout << "1. Apakah Anda mengalami gejala " << gejala[15] << " ?" << endl;
    cout << "   BENAR (Y) / SALAH (T) ? " ;
    cin >> konfir; 
    if(konfir =='Y'){
        jumlah++;
        cout << "2. Apakah Anda mengalami gejala " << gejala[12] << " ?" << endl;
        cout << "   BENAR (Y) / SALAH (T) ? " ;
        cin >> konfir; 
        if(konfir =='Y'){
            jumlah++;
            cout << "3. Apakah Anda mengalami gejala " << gejala[13] << " ?" << endl;
            cout << "   BENAR (Y) / SALAH (T) ? " ;
            cin >> konfir; 
            if(konfir =='Y'){
                diagnosa = 1;
            }else{
                jumlah++;
                cout << "4. Apakah Anda mengalami gejala " << gejala[14] << " ?" << endl;
                cout << "   BENAR (Y) / SALAH (T) ? " ;
                cin >> konfir; 
                if(konfir =='Y'){
                    diagnosa = 2;
                }else{
                    jumlah++;
                    cout << "5. Apakah Anda mengalami gejala " << gejala[1] << " ?" << endl;
                    cout << "   BENAR (Y) / SALAH (T) ? " ;
                    cin >> konfir; 
                    if(konfir =='Y'){
                        jumlah++;
                        cout << "6. Apakah Anda mengalami gejala " << gejala[3] << " ?" << endl;
                        cout << "   BENAR (Y) / SALAH (T) ? " ;
                        cin >> konfir; 
                        if(konfir =='Y'){
                            diagnosa = 3;
                        }else{
                            jumlah++;
                            cout << "7. Apakah Anda mengalami gejala " << gejala[2] << " ?" << endl;
                            cout << "   BENAR (Y) / SALAH (T) ? " ;
                            cin >> konfir; 
                            if(konfir =='Y'){
                                jumlah++;
                                cout << "8. Apakah Anda mengalami gejala " << gejala[4] << " ?" << endl;
                                cout << "   BENAR (Y) / SALAH (T) ? " ;
                                cin >> konfir; 
                                if(konfir =='Y'){
                                    diagnosa = 4;
                                }
                            }
                        }
                    }
                }
            }
        }
    }else{
        jumlah++;
        cout << "2. Apakah Anda mengalami gejala " << gejala[11] << " ?" << endl;
        cout << "   BENAR (Y) / SALAH (T) ? " ;
        cin >> konfir; 
        if(konfir =='Y'){
            jumlah++;
            cout << "3. Apakah Anda mengalami gejala " << gejala[16] << " ?" << endl;
            cout << "   BENAR (Y) / SALAH (T) ? " ;
            cin >> konfir; 
            if(konfir =='Y'){
                diagnosa=8;
            }
        }else{
            jumlah++;
            cout << "3. Apakah Anda mengalami gejala " << gejala[5] << " ?" << endl;
            cout << "   BENAR (Y) / SALAH (T) ? " ;
            cin >> konfir; 
            if(konfir =='Y'){
                jumlah++;
                cout << "4. Apakah Anda mengalami gejala " << gejala[6] << " ?" << endl;
                cout << "   BENAR (Y) / SALAH (T) ? " ;
                cin >> konfir; 
                if(konfir =='Y'){
                    diagnosa = 5;
                }
            }else{
                jumlah++;
                cout << "4. Apakah Anda mengalami gejala " << gejala[7] << " ?" << endl;
                cout << "   BENAR (Y) / SALAH (T) ? " ;
                cin >> konfir; 
                if(konfir =='Y'){
                    jumlah++;
                    cout << "5. Apakah Anda mengalami gejala " << gejala[8] << " ?" << endl;
                    cout << "   BENAR (Y) / SALAH (T) ? " ;
                    cin >> konfir; 
                    if(konfir =='Y'){
                        diagnosa = 6;
                    }
                }else{
                    jumlah++;
                    cout << "5. Apakah Anda mengalami gejala " << gejala[9] << " ?" << endl;
                    cout << "   BENAR (Y) / SALAH (T) ? " ;
                    cin >> konfir; 
                    if(konfir =='Y'){
                        jumlah++;
                        cout << "6. Apakah Anda mengalami gejala " << gejala[10] << " ?" << endl;
                        cout << "   BENAR (Y) / SALAH (T) ? " ;
                        cin >> konfir; 
                        if(konfir =='Y'){
                            diagnosa = 7;
                        }
                    }
                }
            }
        }
    }
    cout << endl << "Jumlah Pertanyaan Gejala = " << jumlah << endl << endl;
    cout << setw(60) << setfill('-') << '-' << endl << endl;
    cout << "HASIL DIAGNOSA PENYAKIT JERAWAT (" << nama << "): " << endl;
    if(diagnosa == 0){
        cout << "TIDAK ADA HASIL" << endl << endl;
    }else{
        cout << penyakit[diagnosa] << endl << endl;
    }
    cout << setw(60) << setfill('-') << '-' << endl << endl;
}