#include <iostream>
using namespace std;
struct Buah {
    string nama, warna, rasa;
    int harga;
    Buah *next;
};

Buah *head, *tail, *cur, *newNode;
void createSingleLinkedList(string nama, string warna, string rasa, int harga);
void TambahDataAwal(string nama, string warna, string rasa, int harga);
void TambahDataAkhir(string nama, string warna, string rasa, int harga);
void printLinkedList();


int main(){
    cout << "Data Awal" << endl;
    createSingleLinkedList("Gedang","Orange","manis", 10000);
    printLinkedList();
    cout << "Data setelah ditambah Awal" << endl;
    TambahDataAwal("Pisang","Kuning","manis", 7000);
    printLinkedList();
    cout << "Data setelah ditambah Akhir" << endl;
    TambahDataAkhir("Melo","Hijau","manis", 17000);
    printLinkedList();
    return 0;
}

void createSingleLinkedList(string nama, string warna, string rasa, int harga){
    head = new Buah();
    head->nama = nama;
    head->warna = warna;
    head->rasa = rasa;
    head->harga = harga;
    head->next = NULL;
    tail = head;
}

void TambahDataAwal(string nama, string warna, string rasa, int harga){
    newNode = new Buah();
    newNode->nama = nama;
    newNode->warna = warna;
    newNode->rasa = rasa;
    newNode->harga = harga;
    newNode->next = head;
    head = newNode;
}

void TambahDataAkhir(string nama, string warna, string rasa, int harga){
    newNode = new Buah();
    newNode->nama = nama;
    newNode->warna = warna;
    newNode->rasa = rasa;
    newNode->harga = harga;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void printLinkedList(){
    cur = head;
    while( cur != NULL){
        cout << "Nama Buah: " << cur->nama << endl;
        cout << "Warna: " << cur->warna << endl;
        cout << "rasa: " << cur->rasa << endl;
        cout << "harga: " << cur->harga << endl;
        cout << "\n\n" << endl;
        cur = cur->next;
    }
}
