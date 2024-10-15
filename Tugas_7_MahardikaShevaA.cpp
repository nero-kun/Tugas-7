#include<iostream>
using namespace std;

int main (){
    int angka [5];
    int tertinggi;
    int periksa;
    int indeks=-1;
     cout << "Masukkan 10 bilangan bulat:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan angka ke-" << (i + 1) << ": ";
        cin >> angka[i];
    }
     tertinggi=angka [0];
    for(int i=1; i<5; i++){
        if(angka [i]>tertinggi){
            tertinggi=angka [i];
        }
    }
    cout<<"Nilai tertinggi adalah: "<<tertinggi<<endl;

    cout<<"Masukkan angka yang ingin diperiksa: ";
    cin>>periksa;
    for(int i=0; i<5; i++){
        if(angka [i]==periksa){
            indeks=i;
            break;
        }
    }
    if(indeks !=-1) {
        cout<<"Angka "<<periksa<<" ditemukan di indeks "<<indeks<<endl;
    } else{
        cout<<"Angka "<<periksa<<" tidak ditemukan"<<endl;
        }

    return 0;
}