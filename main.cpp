#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,c,d,e,f,delta,x1,x2;
	cout << "Wybierz postac funkcji"<<endl;
	cout << "1 zwyk³a"<<endl<<"2 ogolna"<<endl;
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
	cout << "Funkcja kwadratowa";
		cout << "Podaj a"<<endl;
		cin >> d;
		cout << "Podaj b"<<endl;
		cin >> e;
		cout << "Podaj c"<<endl;
		cin >> f;
		delta = e*e-(4*d*f);
		float delta1 = sqrt(delta);
		cout << "Miejsca zerowe"<<endl;
		x1=(-b-delta1)/(2*a);
		x2=(-b+delta1)/(2*a);
		cout << "x1:"<<x1<<" , "<<"x2:"<<x2;
		
	return 0;
}
