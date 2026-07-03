#include <iostream>

using namespace std;

int main()
{
	int dizi[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int kucuk = dizi[0];
	int buyuk = dizi[0];

	for (int i = 0; i < 10; i++)
	{

		if (kucuk > dizi[i])
			kucuk = dizi[i];
		if (buyuk < dizi[i])
			buyuk = dizi[i];



	}


	cout << "En buyuk deger: " << buyuk << endl;

	cout << "En kucuk deger: " << kucuk << endl;




	return 0;
}