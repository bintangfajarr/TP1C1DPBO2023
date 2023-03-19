#include "header.hh"
Dosen::Dosen()
{
    this->nip = "";
    this->laptop = "";
    this->whiteboard_markers = "";
    this->mhs = {};
}
Dosen::Dosen(string nama, string jenis_kelamin, string nip, string laptop, string whiteboard_markers)
{
    this->nip = nip;
    this->laptop = laptop;
    this->whiteboard_markers = whiteboard_markers;
}
void Dosen::set_nip(string nip)
{
    this->nip = nip;
}
void Dosen::set_laptop(string laptop)
{
    this->laptop = laptop;
}
void Dosen::set_whiteboard_markers(string whiteboard_markers)
{
    this->whiteboard_markers = whiteboard_markers;
}
void Dosen::set_mhs(vector<Mahasiswa> mhs)
{
    this->mhs = mhs;
}
string Dosen::get_nip()
{
    return this->nip;
}
string Dosen::get_laptop()
{
    return this->laptop;
}
string Dosen::get_whiteboard_markers()
{
    return this->whiteboard_markers;
}
vector<Mahasiswa> Dosen::get_mhs()
{
    return this->mhs;
}
void Dosen::add_mhs(Mahasiswa mahasiswa)
{
    this->mhs.push_back(mahasiswa);
}
Dosen::~Dosen()
{
}