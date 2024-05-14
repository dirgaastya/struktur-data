#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, jurusan;
    Mahasiswa *next;
};

int main(){
    Mahasiswa *mahasiswa1, *mahasiswa2, *mahasiswa3;
    mahasiswa1 = new Mahasiswa();
    mahasiswa2 = new Mahasiswa();
    mahasiswa3 = new Mahasiswa();

    // Insert Data
    mahasiswa1->nama = "Andy";
    mahasiswa1->jurusan = "Teknik Informatika";
    mahasiswa1->next = mahasiswa2;
    // Insert Data
    mahasiswa2->nama = "Woody";
    mahasiswa2->jurusan = "Teknik Informatika";
    mahasiswa2->next = mahasiswa3;
    // Insert Data
    mahasiswa3->nama = "Buzz";
    mahasiswa3->jurusan = "Teknik Informatika";
    mahasiswa3->next = NULL;

    Mahasiswa *cur;
    cur = mahasiswa1;
    while( cur != NULL){
        cout << "Nama: " << cur->nama << endl;
        cout << "Jurusan: " << cur->jurusan << endl;

        cur = cur->next;
    }

    return 0;
}
