#include<iostream>
	using namespace std;
	int main(int arge,const char**argv[]){
		int a;
		int b;
		int c;
		cout << "entrer les valeurs des Cotes de ce triangle "<< endl ;
		cin  >> a;
		cin  >> b;
		cin  >> c;
		
			if (a==b and a==c){
				cout << "ce triangle est equilateral" << endl;
			}
			else if(a==b and a!=c){
				cout <<"ce triangle est isocele" << endl;
			}
			else if(a!=b and a!=c and b!=c){
				cout <<"ce triangle est quelconque" << endl;
			}
			
	return 0;
}
