#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, jurusan;
    Mahasiswa *next;
};

Mahasiswa *head, *tail, *cur, *newNode;

void createSingleLinkedList(string nama, string jurusan);
void addFirstNode(string nama, string jurusan);
void addLastNode(string nama, string jurusan);
void printSingleLinkedList();

int main(){
    createSingleLinkedList("Andi", "Sistem Informasi");
    printSingleLinkedList();
    cout << "\n\n" << endl;
    addFirstNode("Andi2", "Sistem Informasi");
    printSingleLinkedList();
    cout << "\n\n" << endl;
    addLastNode("Andi3", "Sistem Informasi");
    printSingleLinkedList();
    return 0;
}



void createSingleLinkedList(string nama, string jurusan){
    head = new Mahasiswa();
    head->nama = nama;
    head->jurusan = jurusan;
    head->next = NULL;
    tail = head; // Menginisialisasi tail untuk menunjuk ke node tunggal yang telah dibuat
}

void addFirstNode(string nama, string jurusan){
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->jurusan = jurusan;
    newNode->next = head; // Menghubungkan newNode dengan head
    head = newNode; // Mengupdate head untuk menunjuk ke newNode
}

void addLastNode(string nama, string jurusan){
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->jurusan = jurusan;
    newNode->next = NULL; // newNode akan menjadi tail, sehingga next-nya NULL
    tail->next = newNode; // Menghubungkan tail dengan newNode
    tail = newNode; // Mengupdate tail untuk menunjuk ke newNode
}

void printSingleLinkedList(){
    cur = head;
    while( cur != NULL){
        cout << "Nama: " << cur->nama << endl;
        cout << "Jurusan: " << cur->jurusan << endl;
        cur = cur->next;
    }
}
