#include "header.hh"
Human::Human()
{
    this->nama = "";
    this->jenis_kelamin = "";
}
Human::Human(string nama, string jenis_kelamin)
{
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}
void Human::set_nama(string nama)
{
    this->nama = nama;
}
void Human::set_jenis_kelamin(string jenis_kelamin)
{
    this->jenis_kelamin = jenis_kelamin;
}

string Human::get_nama()
{
    return this->nama;
}
string Human::get_jenis_kelamin()
{
    return this->jenis_kelamin;
}
Human::~Human()
{
}