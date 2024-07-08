#include <iostream>
using namespace std;

class MasukUniversitas {
 // isi access modifier disini
    public:
    MasukUniversitas* leftchild;
    MasukUniversitas* rightchild;

     MasukUniversitas( MasukUniversitas* l,  MasukUniversitas* r)
    {
        leftchild = l;
        rightchild = r;
    }
 int uangPendaftaran;
 // isi daftar variable yang dibutuhkan di bawah ini

public:
 MasukUniversitas() {
 uangPendaftaran = 0;
 // isi nilai default variable yang dibutuhkan di bawah ini
  
 }
 
 virtual void namaJalurMasuk() { return; }
 // isi disini dengan fungsi virtual yang dibutuhkan
 
 void setUangPendaftaran(int nilai) {
 this->uangPendaftaran = nilai;
 }
 
 float getUangPendaftaran() {
 return uangPendaftaran;
 }
 // isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBT
};

class SNBP : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBP
};

int main() {
 // isi disini untuk fungsi main
}