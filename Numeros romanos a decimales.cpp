// Numeros romanos a decimales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


class Convertir {
private:
    int romanos;
    int numeros;
public:
  
    //void romCon();
    void numCon();
	void romCon();
};


void  Convertir::numCon() {
	int numero, unidades, decenas, centenas, millar;

	cout << "Digite un numero: ";
	cin >> numero;
	//numero =2152 ->2000+100+20+2

	unidades = numero % 10; numero /= 10;
	decenas = numero % 10; numero /= 10;
	centenas = numero % 10; numero /= 10;
	millar = numero % 10; numero /= 10;

	switch (millar) {
	case 1: cout << "M"; break;
	case 2: cout << "MM"; break;
	case 3: cout << "MMM"; break;

	}
	switch (centenas) {
	case 1: cout << "C" << endl; break;
	case 2: cout << "CC" << endl; break;
	case 3: cout << "CCC" << endl; break;
	case 4: cout << "CD" << endl; break;
	case 5: cout << "D" << endl; break;
	case 6: cout << "DC" << endl; break;
	case 7: cout << "DCC" << endl; break;
	case 8: cout << "DCCC" << endl; break;
	case 9: cout << "CM" << endl; break;
	}
	switch (decenas) {
	case 1: cout << "X"; break;
	case 2: cout << "XX"; break;
	case 3: cout << "XXX"; break;
	case 4: cout << "XL"; break;
	case 5: cout << "L"; break;
	case 6: cout << "LX"; break;
	case 7: cout << "LXX"; break;
	case 8: cout << "LXXX"; break;
	case 9: cout << "XC"; break;
	}
	switch (unidades) {
	case 1: cout << "I"; break;
	case 2: cout << "II"; break;
	case 3: cout << "III"; break;
	case 4: cout << "IV"; break;
	case 5: cout << "V"; break;
	case 6: cout << "VI"; break;
	case 7: cout << "VII"; break;
	case 8: cout << "VIII"; break;
	case 9: cout << "IX"; break;
	}
}
void Convertir::numCon() {
	int value = 0, obtainArabic = 0;
char inputRom[20];


	for (int i = 0; i < strlen(inputRom); i++) {

		switch(inputRom[i]) {
		case 'I': value = 1;break;
		case 'V': value = 5; break;
		case 'X': value = 10; break;
		case 'L': value = 50; break;
		case 'C': value = 100; break;
		case 'D': value = 500; break;
		case 'M': value = 1000; break;
		}

		obtainArabic += value;

	}

	return inputRom;
}

int main()
{
	Convertir con;
	int opc = 0;
	cout << "Bievenido " << endl << endl;
	cout << "1) Numeros decimales a Romanos "<<endl;
	cout << "2) Numeros romanos a decimales " << endl;
	cin >> opc;
	system("cls");
	
	switch (opc) {
	case 1:
		con.numCon();
		break;
	case 2:
		
	}
}




