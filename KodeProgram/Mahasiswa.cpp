#include "header.hh"
Mahasiswa::Mahasiswa()
{
    this->nim = "";
    this->laptop = "";
    this->prodi = "";
    this->fakultas = "";
}
Mahasiswa::Mahasiswa(string nama, string jenis_kelamin, string nim, string laptop, string prodi, string fakultas)
{
    this->nim = nim;
    this->laptop = laptop;
    this->prodi = prodi;
    this->fakultas = fakultas;
}
void Mahasiswa::set_nim(string nim)
{
    this->nim = nim;
}
void Mahasiswa::set_laptop(string laptop)
{
    this->laptop = laptop;
}
void Mahasiswa::set_prodi(string prodi)
{
    this->prodi = prodi;
}
void Mahasiswa::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Mahasiswa::get_nim()
{
    return this->nim;
}
string Mahasiswa::get_laptop()
{
    return this->laptop;
}
string Mahasiswa::get_prodi()
{
    return this->prodi;
}
string Mahasiswa::get_fakultas()
{
    return this->fakultas;
}
Mahasiswa::~Mahasiswa()
{
}