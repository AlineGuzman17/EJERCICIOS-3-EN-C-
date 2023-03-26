#include <iostream>

using namespace std;
void ejercicio7();


int main (){
ejercicio7();
return 0;
}


void ejercicio7(){

int sem = 0;
    cout<<"ESCOJA UN NUMERO DEL 1 AL 5 PARA CONOCER EL DIA DE LA SEMANA\n";
    cin>>sem;

    switch (sem) {
        case 1:
            cout<<"ODIO LOS LUNES\n";
            break;
        case 2:
            cout<<"MARTES\n";
            break;
        case 3:
            cout<<"MIERCOLES\n";
            break;
        case 4:
            cout<<"DOY CLASES LOS JUEVES, Y NO COBRO MUCHO\n";
            break;
        case 5:
            cout<<"GRACIAS A DIOS ES VIERNES\n";
            break;
    }
	
}
