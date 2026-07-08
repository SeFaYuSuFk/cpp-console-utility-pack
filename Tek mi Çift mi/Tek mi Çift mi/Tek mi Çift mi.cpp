#include <iostream>

using namespace std;

int main()
{

	int sayi;

	char cevap;

	do
	{
		cout << "Tek mi Cift mi?" << endl;

		cout << "Lutfen bir sayi giriniz." << endl;
		cin >> sayi;

		if (sayi % 2 == 0)
		{
			cout << "Sayi cifttir." << endl;
		}

		else
			cout << "Sayi tektir." << endl;

		
		
		
		
		cout << "Devam etmek istiyor musunuz ? " << endl;
		cin >> cevap;
		
		if (cevap == 'H')
		{
			cout << "Programdan cikis yapiliyor..." << endl;
			break;
		}

		else if (cevap == 'E')
		{
			cout << " Program devam ediyor. " << endl;
		}

		else
		{
			cout << "Gecersiz bir harf girdiniz, dongu basa donuyor." << endl;
		}
			



	} while (true);


	return 0;
}