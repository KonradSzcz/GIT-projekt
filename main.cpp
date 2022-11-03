#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,c,delta,x1,x2;
	
	
	int funkcja;
	cout << "Wybierz funkcje"<<endl;
	cout << "1 liniowa"<<endl<<"2 kwadratowa"<<endl;
	cin >> funkcja;
	if (funkcja == 1){
		
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
}
else if (funkcja == 2) {
	

	cout << "Funkcja kwadratowa"<<endl;		
		cout << "Podaj a"<<endl;
		cin >> a;
		cout << "Podaj b"<<endl;
		cin >> b;
		cout << "Podaj c"<<endl;
		cin >> c;
	if(a==0){
		cout << "Wynik"<<endl;
		float x1=-b/a;
		cout << x1;
	}
	else if (a!=0) {

		delta = b*b-(4*a*c);
		if (delta > 0 ){
	
		float delta1 = sqrt(delta);
		cout << "Miejsca zerowe"<<endl;
		x1=(-b-delta1)/(2*a);
		x2=(-b+delta1)/(2*a);
		cout << "x1:"<<x1<<" , "<<"x2:"<<x2;
			}
		else if (delta ==0){
			x1=-b/(2*a);
			cout << "Jedno miejsce zerowe"<<endl;
			cout << x1;
		}
		
		else if (delta < 0) {
			cout << "Brak";
		}			
}	
}
	return 0;
}
