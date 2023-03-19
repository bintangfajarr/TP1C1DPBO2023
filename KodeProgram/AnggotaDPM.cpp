#include "header.hh"
AnggotaDPM::AnggotaDPM()
{
    this->divisi = "";
    this->jabatan = "";
}
AnggotaDPM::AnggotaDPM(string nama, string jenis_kelamin, string nim, string laptop, string prodi, string fakultas, string divisi, string jabatan) : Mahasiswa(nama, jenis_kelamin, nim, laptop, prodi, fakultas)
{
    this->divisi = divisi;
    this->jabatan = jabatan;
}
void AnggotaDPM::set_divisi(string divisi)
{
    this->divisi = divisi;
}
void AnggotaDPM::set_jabatan(string jabatan)
{
    this->jabatan = jabatan;
}
void AnggotaDPM::apresiasi(AnggotaBEM bem)
{
    if (bem.get_status_proker() == true)
    {
        cout << "Bagus, semangat" << endl;
    }
    else
    {
        cout << "prokernya belum terlaksana" << endl;
    }
}
string AnggotaDPM::get_divisi()
{
    return this->divisi;
}
string AnggotaDPM::get_jabatan()
{
    return this->jabatan;
}
AnggotaDPM::~AnggotaDPM() {}