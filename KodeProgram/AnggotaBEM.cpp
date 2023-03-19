#include "header.hh"
AnggotaBEM::AnggotaBEM()
{
    this->divisi = "";
    this->jabatan = "";
    this->is_done = false;
}
AnggotaBEM::AnggotaBEM(string nama, string jenis_kelamin, string nim, string laptop, string textbooks, string divisi, string jabatan)
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
string AnggotaBEM::get_divisi()
{
    return this->divisi;
}
string AnggotaBEM::get_jabatan()
{
    return this->jabatan;
}