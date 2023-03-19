#include "header.hh"
AsistenDosen::AsistenDosen()
{
    this->matkul = "";
    this->status_nilai = false;
}
AsistenDosen::AsistenDosen(string nama, string jenis_kelamin, string nim, string laptop, string prodi, string fakultas, string matkul) : Mahasiswa(nama, jenis_kelamin, nim, laptop, prodi, fakultas)
{
    this->matkul = matkul;
}
void AsistenDosen::set_matkul(string matkul)
{
    this->matkul = matkul;
}
void AsistenDosen::set_status_nilai(bool status_nilai)
{
    this->status_nilai = status_nilai;
}
// void AsistenDosen::beri_nilai()
// {
//     cout << "Anda sudah saya nilai" << endl;
//     this->status_nilai = true;
// }
string AsistenDosen::get_matkul()
{
    return this->matkul;
}
bool AsistenDosen::get_status_nilai()
{
    return this->status_nilai;
}
AsistenDosen::~AsistenDosen() {}