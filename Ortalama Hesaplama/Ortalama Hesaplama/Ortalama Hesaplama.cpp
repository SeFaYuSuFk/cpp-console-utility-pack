#include <iostream>

using namespace std;

int main()
{
	float sayi1, sayi2, sayi3, sayi4;

	float sonuc;

	cout << "Merhaba bugun Sefa'nin bilgisayar icin matematik dersindeki ortalamasini hesaplicaz." << endl;

	cout << "ilk notu giriniz." << endl;
	cin >> sayi1;

	cout << "ikinci notu giriniz." << endl;
	cin >> sayi2;

	cout << "Ucuncu notu giriniz." << endl;
	cin >> sayi3;

	cout << "Son olarak dorduncu notu giriniz." << endl;
	cin >> sayi4;

	cout << "Oncelikle soyle yapiyoruz ilk uc notun %20'si aliniyor son notun ise %40'i ona gore yapicaz." << endl;

	cout << "Cout kismina yazdigim yazilari yorum satiri olarak ekleyebiliyorum biliyorum ama biraz renk katmak istedim. :) " << endl;

	sonuc = ((sayi1 + sayi2 + sayi3) * 20 / 100 + (sayi4 * 40 / 100));

	cout << "Sonucumuz: " << sonuc << endl;



	return 0;
}