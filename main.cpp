#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Obliczanie miejsc zerowych" << endl;
	float a;
	float b;
	cout << "Podaj a"<<endl;
	cin >> a;
	cout << "Podaj b"<<endl;
	cin >> b;
	cout << "Wynik"<<endl;
	float x=-b/a;
	cout << x;
	return 0;
}
