#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jenisKelamin;

	manusia(string pJenisKelamin) :
		jenisKelamin(pJenisKelamin) {
		cout << "Manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "Manusia dihapus\n" << endl;
	}
};

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(string pNama, string pJenisKelamin, string pSekolah) :
		orang(pNama),
		manusia(pJenisKelamin),
		sekolah(pSekolah) {
		cout << "Pelajar dibuat\n" << endl;
	}
	~pelajar() {
		cout << "Pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "Hallo, nama saya " + nama + " dengan jenis kelamin "
			+ jenisKelamin + " dari sekolah " + sekolah + "\n\n";
	}
};

int main() {
	pelajar siswa("andi laksono", "Laki-Laki", "SMAN 1 Bantul");
	cout << siswa.perkenalan();

	return 0;
}