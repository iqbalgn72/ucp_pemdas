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
 class binarytree
{
public:
    MasukUniversitas* ROOT;
    binarytree()
    {
        ROOT = nullptr; 
    }
    void insert(string element)
    {
        MasukUniversitas* newMasukUniversitas = new MasukUniversitas(element, nullptr, nullptr);
        newMasukUniversitas->info = element;
        newMasukUniversitas->leftchild =nullptr;
        newMasukUniversitas->rightchild = nullptr;

        MasukUniversitas* parent = nullptr;
        MasukUniversitas* currentMasukUniversitas = nullptr;
        search(element, parent, currentMasukUniversitas);

        if (parent == nullptr)
        {
            ROOT = newMasukUniversitas;
            return;
        }

        if (element < parent ->info)
        {
            parent->leftchild = newMasukUniversitas;
        }
        else if (element > parent->info)
        {
            parent->rightchild = newMasukUniversitas;
        }
    }
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