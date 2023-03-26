/*
CREADO POR YARA ALINE GUZMÁN GARCÍA 0909-22-1792
EJERCICIO 4 CON FOR y WHILE
*/


#include <iostream>
#include <math.h>

using namespace std;
void ejercicio4();


int main (){
ejercicio4();
return 0;
}


void ejercicio4(){

int i,n, factorial;
	
	cout <<"INGRESE UN NUMERO:     " << endl;
	cin>> n;
	i = n;
    i = 1;

	while (i <= n)
	{
		factorial = factorial * i;
		i++;
	}
	cout<< "   EL FACTORIAL DE "<<n<<"ES: "<<factorial;
	
}
