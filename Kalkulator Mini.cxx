#include <iostream>
using namespace std;
int main()
{
	int pilihan;
	do{
	cout << endl;
	cout << "Kalkulator Mini" << endl;
	cout << "1. Perkalian \n";
	cout << "2. pertambahan \n";
	cout << "3. pengurangan \n";
	cout << "4. pembagian \n";
	cout << "5. stop \n";
	cout << "masukan pilihan anda: ";
	cin >> pilihan;
	
	if (pilihan == 1) {
		float angka1, angka2;
		int hasil;
		cout << endl;
		cout << "PERKALIAN" << endl;
		cout << "masukan angka: ";
		cin >> angka1;
		cout << "masukan angka: ";
		cin >> angka2;
		
		hasil = angka1 * angka2;
		cout << angka1<< " * "<< angka2<< " = " <<hasil << endl;
	}
	if (pilihan == 2) {
		float angka1, angka2, hasil;
		cout << endl;
		cout << "PERTAMBAHAN" << endl;
		cout << "masukan angka: ";
		cin >> angka1;
		cout << "masukan angka: ";
		cin >> angka2;
		
		hasil = angka1 + angka2;
		cout << angka1<< " + "<< angka2<< " = " <<hasil << endl;
	}
	if (pilihan == 3){
		float angka1, angka2, hasil;
		cout << endl;
		cout << "PENGURANGAN"<< endl;
		cout << "masukan angka: ";
		cin >> angka1;
		cout << "masukan angka: ";
		cin >> angka2;
		
		hasil = angka1 - angka2;
		cout << angka1<< " - "<< angka2<< " = " <<hasil << endl;
	}
	if (pilihan == 4){
		float angka1, angka2, hasil;
		cout << endl;
		cout << "PEMBAGIAN"<< endl;
		cout << "masukan angka: ";
		cin >> angka1;
		cout << "masukan angka: ";
		cin >> angka2;
		cout << angka1<< " ÷ "<< angka2<< " = " <<hasil << endl;
		}
	
	}while (pilihan != 5);
	cout<<"terimakasih sudah menggunaka kalkulator mini" << endl;
	
		return 0;
}