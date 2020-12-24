#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion;
	cout <<"Escoja el numero segun el mes que quiere visualizar \n 1.Enero \n 2.Febrero \n 3.Marzo \n 4.Abril \n 5.Mayo \n 6.Junio \n 7.Julio \n 8.Agosto \n 9.Septiembre \n 10.Octubre \n 11.Noviembre \n 12.Diciembre \n \n ";
	cin >>opcion;
	switch (opcion)
	{
	case 1: cout <<" Enero";
	break;
	case 2: cout <<" Febrero";
	break;
	case 3: cout <<" Marzo";
	break;
	case 4:cout <<" Abril";
	break;
	case 5:cout <<" Mayo";
	break;
	case 6:cout <<" Junio";
	break;
	case 7:cout <<" Julio";
	break;
	case 8:cout <<" Agosto";
	break;
	case 9:cout <<" Septiembre";
	break;
	case 10: cout <<" Octubre";
	break;
	case 11:cout <<" Noviembre";
	break;
	case 12:cout <<" Diciembre";
	break;
	default:cout <<"No corresponde a un numero del mes del ano";
}

	return 0;
}
