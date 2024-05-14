#include <iostream>
using namespace std;
struct Buah {
    string nama, warna, rasa;
    int harga;
    Buah *next;
};
int main(){
    Buah *buah1, *buah2 , *buah3;
    buah1 = new Buah();
    buah2 = new Buah();
    buah3 = new Buah();

    buah1->nama = "Gomu-gomu";
    buah1->warna = "Ungu";
    buah1->rasa = "Pait";
    buah1->harga = 12500;
    buah1->next = buah2;


    buah2->nama = "Buah naga";
    buah2->warna = "Merah";
    buah2->rasa = "Manis";
    buah2->harga = 271000;
    buah2->next = buah3;


    buah3->nama = "Lengkeng";
    buah3->warna = "Coklat";
    buah3->rasa = "Manis";
    buah3->harga = 3000;
    buah3->next = NULL;

    Buah *nilai_sekarang;
    nilai_sekarang = buah1;

    while( nilai_sekarang != NULL){
        cout << "Nama Buah: " << nilai_sekarang->nama << endl;
        cout << "Warna: " << nilai_sekarang->warna << endl;
        cout << "rasa: " << nilai_sekarang->rasa << endl;
        cout << "harga: " << nilai_sekarang->harga << endl;
        cout << "\n\n" << endl;

        nilai_sekarang = nilai_sekarang->next;
    }

    return 0;
}
