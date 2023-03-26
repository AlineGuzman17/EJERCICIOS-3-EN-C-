#include <iostream>

using namespace std;
void ejercicio1();


int main (){
ejercicio1();
return 0;
}


void ejercicio1(){

int n;
	cout << "INGRESE SU EDAD POR FAVOR  " << endl;
	cin >> n;
	
	if (n>= 18)
	{
		cout << n << "  USTED ES MAYOR DE EDAD " << endl;
			
	}
	
	else 
	if (n<= 18) 
	{ 
	    cout << n << " USTED ES MENOR DE EDAD  " << endl;
	}
	

}
