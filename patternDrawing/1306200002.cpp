// Zekiye �ZDEM�R
// 1306200002
// Date: 08.12.2020
// Development Environment: Visual Studio2017

#include<iostream>//k�t�phaneleri ekledim
#include <math.h>
#include <stdlib.h>
using namespace std;
//fonksiyonlar�m�z� tan�ml�yoruz
void Rectangle1(int numberStars);
void Rectangle2(int numberStars);
void Rectangle3(int numberStars);
void Rectangle4(int numberStars);
void Rhomb(int numberStars);
void Circle(int numberStars);

//de�i�kenlerimizi tan�mlad�m
int choose;
int numberStars;

//main fonksiyonumuz,yani ana olay� ger�ekle�tirecek olan fonksiyon
int main()
{
	//kullan�c�n�n se�im yapmas� i�in men�y� yazd�rd�m

	cout << "1 Rectangle 1" << endl;
	cout << "2 Rectangle 2" << endl;
	cout << "3 Rectangle 3" << endl;
	cout << "4 Rectangle 4" << endl;
	cout << "5 Rhomb(only odd)" << endl;
	cout << "6 Circle" << endl;
	cout << "7 Close application" << endl;

	while (1)
	{
		//kullan�c�dan se�imini al�yoruz
		cin >> choose;

		//switch case ile secim islemlerini gerceklestiriyoruz
		switch (choose)
		{
		case 1:
			cout << "enter dimension: ";
			cin >> numberStars;
			Rectangle1(numberStars);//birinci i�lem i�in fonksiyon �ag�rd�m ve islemi gerceklestirdi
			break;
		case 2:
			cout << "enter dimension:";
			cin >> numberStars;
			Rectangle2(numberStars);//ikinci i�lem i�in fonksiyon �ag�rd�m ve islemi gerceklestirdi
			break;
		case 3:
			cout << "enter dimension: ";
			cin >> numberStars;
			Rectangle3(numberStars); //ucuncu i�lem i�in fonksiyon �ag�rd�m ve islemi gerceklestirdi
			break;
		case 4:
			cout << "enter dimension: ";
			cin >> numberStars;
			Rectangle4(numberStars); //dorduncu i�lem i�in fonk �ag�rd�m ve islemi gerceklestirdi
			break;
		case 5:
			cout << "enter dimension: ";
			cin >> numberStars;
			Rhomb(numberStars); //besinci i�lem i�in fonksiyon �ag�rd�m ve islemi gerceklestirdi
			break;
		case 6:
			cout << "enter dimension: ";
			cin >> numberStars;
			Circle(numberStars);//altinci islem icin fonksiyon cagirdim ve islemi gerceklestirdi
			break;
		case 7:
			exit(EXIT_SUCCESS); //console ekran�n� kapatan fonksiyon
			break;
		default:
			cout << "Invalid operation! Please enter numbers between 1 and 7" << endl;//kullanici 1 ve 7 d�s�nda bir rakam girerse ekrana mesaj yaz�yor
			break;
		}
	}

	system("pause");
	return 0;

}

//fonksiyon g�vdelerini yazd�m
void Rectangle1(int numberStars)
{
	//for d�ng�s� ile sekli elde ettim
	for (int i = 0; i <= numberStars; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void Rectangle2(int numberStars)
{
	//for d�ng�s� ile sekli elde ettim
	for (int i = 0; i < numberStars; i++)
	{
		for (int j = 0; j < numberStars - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void Rectangle3(int numberStars)
{
	//ic ice for d�ng�leri ile sekli elde ettim
	for (int i = 0; i <= numberStars; i++)
	{
		for (int j = 0; j < numberStars - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void Rectangle4(int numberStars)//piramit ucgen cizd�rme fonksiyonunun g�vdesi
{
	int bosluk;
	int stars = 1;//degiskenleri tan�mlad�m
	bosluk = numberStars - 1;
	//ic ice for d�ng�leri ile sekli elde ettim
	for (int i = 0; i < numberStars; i++)
	{
		for (int j = 0; j < bosluk; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < stars; j++)
		{
			cout << "*";
		}
		cout << endl;
		bosluk--;
		stars = stars + 2;
	}
}
void Rhomb(int numberStars)//eskenar dortgen cizdirme fonksiyonunun g�vdesi
{
	int i, j, k;//degiskenleri tan�mlad�m
	//ic ice for d�ng�leri ile sekli elde ettim
	for (i = 1; i <= (numberStars + 1) / 2; )
	{
		for (k = 1; (numberStars + 1) / 2 - i + 1 >= k; k++)
		{
			cout << " ";
		}
		for (j = 1; j < 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
		i++;
	}
	if (2 * i - 1 >= numberStars)
	{
		for (i = (numberStars + 1) / 2 - 1; i >= 1; i--)
		{
			for (k = 1; (numberStars + 1) / 2 - i + 1 >= k; k++)
			{
				cout << " ";
			}
			for (j = 1; j < 2 * i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
}
void Circle(int numberStars)//daire cizdirme fonksiyonunun g�vdesi
{
	double mesafe;
	//ic ice for d�ng�leri ile sekli elde ettim
	for (int i = 0; i <= 2 * numberStars; i++)
	{
		for (int j = 0; j <= 2 * numberStars; j++)
		{
			mesafe = sqrt((i - numberStars)*(i - numberStars) + (j - numberStars)*(j - numberStars));
			if (mesafe > numberStars - 0.5 && mesafe < numberStars + 0.5)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}




