#include <iostream>

using namespace std;

int main()
{
	double celcius, fahrenheit;

	cout << "Sicaklik Donusturucuye Hos Geldiniz!" << endl;

	cout << "Dereceyi giriniz." << endl;
	cin >> celcius;

	cout << "Donusturme islemimiz su sekilde olacak celcius * 1.8 + 32'dir." << endl;

	fahrenheit = celcius * 1.8 + 32; 

	cout << fahrenheit << endl;





	return 0;
}