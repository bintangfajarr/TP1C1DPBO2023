#include "header.hh"
AnggotaBEM::AnggotaBEM()
{
    this->divisi = "";
    this->jabatan = "";
    this->status_proker = false;
}
AnggotaBEM::AnggotaBEM(string nama, string jenis_kelamin, string nim, string laptop, string prodi, string fakultas, string divisi, string jabatan) : Mahasiswa(nama, jenis_kelamin, nim, laptop, prodi, fakultas)
{
    this->divisi = divisi;
    this->jabatan = jabatan;
}
void AnggotaBEM::set_divisi(string divisi)
{
    this->divisi = divisi;
}
void AnggotaBEM::set_jabatan(string jabatan)
{
    this->jabatan = jabatan;
}
void AnggotaBEM::set_status_proker(bool status_proker)
{
    this->status_proker = status_proker;
}
string AnggotaBEM::get_divisi()
{
    return this->divisi;
}
string AnggotaBEM::get_jabatan()
{
    return this->jabatan;
}
bool AnggotaBEM::get_status_proker()
{
    return this->status_proker;
}
AnggotaBEM::~AnggotaBEM()
{
}