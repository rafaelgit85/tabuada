#include<iostream>

using namespace std;

void main() {

	int cont=0,tabuada,result;


	cout << "\tTABUADA" << endl;
	cout << "\t-------\n" << endl;
	cout << "  Diga a tabuada desejada: ";
	cin >> tabuada;
	cout << "\n";

	while (cont <= 11)
	{
		result = tabuada * cont;
		cout <<"  "<< tabuada << " x " << cont << " = " << result<<endl;
		cont++;
    } 


	

















}