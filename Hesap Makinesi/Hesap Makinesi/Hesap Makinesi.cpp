#include <iostream>
using namespace std;

int main()
{

	double sayi1, sayi2;

	double sonuc;

	char Operator;

	cout << "Hesap Makinesine Hos Geldiniz!" << endl;

	cout << "Birinci sayiyi giriniz: ";
	cin >> sayi1;

	cout << "ikinci sayiyi giriniz: ";
	cin >> sayi2;

	cout << "Operatoru gir:";
	cin >> Operator;

	switch (Operator)
	{
	case '+' :
		sonuc = sayi1 + sayi2;
		    break;

	case '-' :
			sonuc = sayi1 - sayi2;
			break;
	case '*' :
			sonuc = sayi1 * sayi2;
			break;
	case '/' :
		if (sayi2 == 0)
		{
			cout << "Sifira Bolunmez! " << endl;
			return 0;
		}
		else
			sonuc = sayi1 / sayi2;
		break;
		
         

	default:
		cout << "Yanlis Operator girdin.";
		return 0;

	}
	
	cout << "Sonuc:" << sonuc;


	return 0;
}