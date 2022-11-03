#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,c;
	cout << "Wybierz postac funkcji"<<endl;
	cout << "1 zwyk³a"<<endl<<"2 kanoniczna"<<endl;
	int postac;
	cin >> postac;
	if ( postac==1){

	cout << "Obliczanie miejsc zerowych" << endl;

	cout << "Podaj a"<<endl;
	cin >> a;
	cout << "Podaj b"<<endl;
	cin >> b;
	
	if (a!=0){
		cout << "Wynik"<<endl;
		float x=-b/a;
		cout << x;
	}
	else if (a==0 && b==0) {
		cout << "nieskonczenie wiele";
	}
	else {
		cout << "a nie moze miec wartosci 0 gdy b=/=0";
	}	
	}
	else if (postac == 2){
		cout << "Podaj a"<<endl;
		cin >> a;
		cout << "Podaj b"<<endl;
		cin >> b;
		cout << "Podaj c"<<endl;
		cin >> c;
		if (a!=0){
		cout << "Miejsce zerowe to punkt ("<<a<<",0)";				
		}
		else{
			cout << "Niesokonczenie wiele miejsc";
		}
	}
	return 0;
}
