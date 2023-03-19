#include "header.hh"
AnggotaDPM::AnggotaDPM()
{
    this->divisi = "";
    this->jabatan = "";
}
AnggotaDPM::AnggotaDPM(string nama, string jenis_kelamin, string nim, string laptop, string textbooks, string divisi, string jabatan)
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
string AnggotaDPM::get_divisi()
{
    return this->divisi;
}
string AnggotaDPM::get_jabatan()
{
    return this->jabatan;
}