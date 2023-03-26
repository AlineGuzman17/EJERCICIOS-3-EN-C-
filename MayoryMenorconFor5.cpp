#include <iostream>

using namespace std;
void ejercicio5();


int main (){
ejercicio5();
return 0;
}


void ejercicio5(){

int n, i, resultado;
	cout << "INGRESE UN NUMERO MAYOR QUE 10 Y MENOR A 30   " << endl;
	cin >> n;
	
	
	if (n > 10 && n < 30)
	{
		cout << n << " EL NUMEROS IMPARES DEL 1 AL    " << n << "     SON:   " << endl; 
		for	(int  i = 1; i <=n; ++i){
			resultado = i % 2;
			if (resultado != 0){
				cout << i << ",   ";
			}
		}
		cout << "\n";
		
	}
	else{
		cout << "ERROR, EL NUMERO INGRESADO DEBE SER UNICAMENTE MAYOR A 10 Y MENOR A 30" << endl;
	}
   
	
}
