#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    string nama;
    string jenis_kelamin;

public:
    Human();
    Human(string nama, string jenis_kelamin);

    void set_nama(string nama);
    void set_jenis_kelamin(string set_jenis_kelamin);

    string get_nama();
    string get_jenis_kelamin();

    ~Human();
};

class Mahasiswa : public Human
{
private:
    string nim;
    string laptop;
    string prodi;
    string fakultas;

public:
    Mahasiswa();
    Mahasiswa(string nama, string jenis_kelamin, string nim, string laptop, string prodi, string fakultas);
    void set_nim(string nim);
    void set_laptop(string laptop);
    void set_prodi(string nim);
    void set_fakultas(string fakultas);

    string get_nim();
    string get_laptop();
    string get_prodi();
    string get_fakultas();
    ~Mahasiswa();
};

class Dosen : public Human
{
private:
    string nip;
    string laptop;
    string whiteboard_markers;
    vector<Mahasiswa> mhs;

public:
    Dosen();
    Dosen(string nama, string jenis_kelamin, string nip, string laptop, string whiteboard_markers);
    void set_nip(string nip);
    void set_laptop(string laptop);
    void set_whiteboard_markers(string set_whiteboard_markers);
    void set_mhs(vector<Mahasiswa>);

    string get_nip();
    string get_laptop();
    string get_whiteboard_markers();
    vector<Mahasiswa> get_mhs();

    void add_mhs(Mahasiswa mahasiswa);
    // void berikan_nilai(AsistenDosen asdos);

    ~Dosen();
};

class AnggotaBEM : public Mahasiswa
{
private:
    string divisi;
    string jabatan;
    bool status_proker;

public:
    AnggotaBEM();
    AnggotaBEM(string nama, string jenis_kelamin, string nim, string laptop, string prodi, string fakultas, string divisi, string jabatan);
    void set_divisi(string divisi);
    void set_jabatan(string jabatan);
    void set_status_proker(bool status_proker);

    string get_divisi();
    string get_jabatan();
    bool get_status_proker();
    ~AnggotaBEM();
};

class AnggotaDPM : public Mahasiswa
{
private:
    string divisi;
    string jabatan;

public:
    AnggotaDPM();
    AnggotaDPM(string nama, string jenis_kelamin, string nim, string laptop, string prodi, string fakultas, string divisi, string jabatan);

    void set_divisi(string divisi);
    void set_jabatan(string jabatan);

    void apresiasi(AnggotaBEM bem);
    string get_divisi();
    string get_jabatan();
    ~AnggotaDPM();
};

class AsistenDosen : public Mahasiswa
{
private:
    string matkul;
    bool status_nilai;

public:
    AsistenDosen();
    AsistenDosen(string nama, string jenis_kelamin, string nim, string laptop, string prodi, string fakultas, string matkul);
    void set_matkul(string matkul);
    void set_status_nilai(bool status_nilai);

    string get_matkul();
    bool get_status_nilai();
    ~AsistenDosen();
};