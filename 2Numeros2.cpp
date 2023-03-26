#include <iostream>

using namespace std;
void ejercicio2();


int main (){
ejercicio2();
return 0;
}


void ejercicio2(){

int n1,n2;
	cout << "INGRESE EL PRIMER NUMERO  " << endl;
	cin >> n1;
	
	cout << "INGRESE EL SEGUNDO NUMERO  " << endl;
	cin >> n2;
	
	
	if (n1> n2)
	{
		cout << n1 << " EL NUMERO 1 ES MAYOR " << endl;
			
	}
	
   else	if (n2> n1)
	{
	    cout << n2 << " EL NUMERO 2 ES MAYOR  " << endl;
	}
	
	else
	{
		cout << "LOS NUMEROS SON IGUALES  " << endl;
	}
	
}
