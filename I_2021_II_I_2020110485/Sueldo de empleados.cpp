#include<iostream>
using namespace std;
int main()
{
	int horas = 0, nombre = 0;
	float tarifa = 0, salario = 0, extra = 0;
	do
	{
		cout << "------------BIENVENIDO----------------------\n";
		cout << "Introduzca las horas trabajadas (-1 para salir): ";
		cin >> horas;
		if (horas != -1)
		{
			if (horas <= 40)
			{
				cout << "Introduzca la tarifa por horas del empleado (-1 para salir): ";
				cin >> tarifa;
				salario = horas * tarifa;
				cout << "El salario es: " << salario << endl << endl;
			}
			if (horas > 40)
			{
				cout << "Introduzca la tarifa por horas del empleado (-1 para salir): ";
				cin >> tarifa;
				extra = (horas * tarifa) + (tarifa * 0.5);
				cout << "El salario es: " << extra << endl << endl;
			}
		}
	} while (horas != -1);
	return 0;
}