/*
Crear una funcion que valide la siguiente data
s >0  and s <=90 or s>210 and s<230  entonce valor bueno, sino valor malo.
*/

#include <iostream>
using namespace std;

int validate();

int main()
{
	int a = validate();

	cout << "Valor of a = " << a << endl;
	return 0;
}

int validate()
{
	int data;
	do
	{
		cout << "Enter data: ";
		cin >> data;
		if (!((data > 0 && data <= 90) || (data > 210 && data < 230)))
		{
			cout << "Error try again " << endl;
		}while ((data > 90 || data < 210) && data > 230)
	return data;
	}
}