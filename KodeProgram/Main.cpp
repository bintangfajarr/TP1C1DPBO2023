#include "header.hh"

int main()
{
    Dosen lala("Lala Septem Riza", "Laki-Laki", "321330192301", "ROG Zephyrus", "snowman");
    Mahasiswa afri("Apri Anggara Yudha", "laki-laki", "2102665", "HP Victus", "Ilkom", "MIPA");
    AnggotaBEM rapi("Rafi Arsalan Miraj", "laki-laki", "2102224", "HP axio", "Ilkom", "MIPA", "Nondiv", "Ketua BEM");
    AnggotaDPM nopal("Alghaniyu nopal", "laki-laki", "2102222", "Acer", "Ilkom", "MIPA", "Pengawasan", "Ketua");
    AsistenDosen najmi("Najma Qalbi", "perempuan", "2102223", "Lenovo", "Ilkom", "MIPA", "Alpro");
    lala.add_mhs(afri);
    lala.add_mhs(rapi);
    lala.add_mhs(nopal);
    lala.add_mhs(najmi);
    vector<Dosen> listdsn;
    listdsn.push_back(lala);
    cout << "List Dosen" << endl;
    for (Dosen i : listdsn)
    {
        cout << "Nama Dosen " << i.get_nama() << endl;
        cout << "\t"
             << "List Mahasiswa" << endl;
        for (Mahasiswa j : i.get_mhs())
        {
            cout << "\t- " << j.get_nama() << " " << j.get_nim() << endl;
        }
    }

    cout << "\nInteraksi\n";
    cout << "proker bem jika terlaksana" << endl;
    rapi.set_status_proker(true);
    nopal.apresiasi(rapi);
    cout << "proker bem jika tidak terlaksana" << endl;
    rapi.set_status_proker(false);
    nopal.apresiasi(rapi);
}