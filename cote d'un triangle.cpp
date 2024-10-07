#include <iostream>
#include <math.h>

using namespace std;

int main(){
	cout << "supposons notre triangle est rectangle" << endl;
	cout << "entrer les valeurs des deux cotes du triangle" << endl;
	int a;
	int b;
	double c;
	cin>>a;
	cin>>b;
	c=sqrt((a*a)+(b*b));
	cout << "la valeur du troisieme cote est:" << c << endl;
	return 0;
}
