#include <iostream>

using namespace std;

int main()
{

	int sayi;

	do
	{

		cout << "Lutfen bir sayi giriniz." << endl;
		cin >> sayi;


		if (sayi % 2 == 0)
			cout << "Sayi cifttir.";

		else
			cout << "Sayi tektir.";


	}

	while (true);

}