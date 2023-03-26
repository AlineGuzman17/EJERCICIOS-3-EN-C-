#include <iostream>

using namespace std;
void ejercicio3();


int main (){
ejercicio3();
return 0;
}


void ejercicio3(){

int n, resultado; 
cout << "INGRESE UN NUMERO" << endl;

cin >> n; 

resultado = n % 2;

if (resultado==0)

{

cout << n << " ES PAR" << endl;

}

else {

    cout << n << " ES IMPAR" << endl;

}

}
