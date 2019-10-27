#include "Domaci1.h"
#include<iostream>
#include<string>
using namespace std;

void Pilot::printpilot() const{
char tacno;
if (letili) { tacno = 'L'; }
else { tacno = 'N'; };
cout << ime << "("<<sati<<")-" << tacno << endl;  //#include<string>, a ne da gledas 10 minuta sta je
}

void Avion::printavion() const
{
	cout<<"AVION:"<< naziv << "-" << max << endl;
}

int Flota::brojaviona(Avion *avioni)
{
	int i = 0, s = 0;
	while (avioni[i].max) {
		s = s + 1;
		i = i + 1;
}
	return s;

}

Avion Flota::anajbrput()
{
	int i = 0; Avion najveci = avioni[0];
	while (avioni[i].max) {
	if (avioni[i].max>najveci.max)
	{
		najveci = avioni[i];
	}
	i++;
	return najveci;

	}
}

void Flota::pritnflota() const
{
	cout<<"FLOTA:" << naziv << endl;
	int i = 0;
	while (avioni[i].max){ 
		avioni[i].printavion();  //opet ne budi glupaca i zaboraviti objekat ispred funkcije
		i++;
	}

}

void Flota::ime(string naziv)
{
 getline(cin, naziv);
}

int Flota::maxputnika(Avion *avioni)
{
	
	int i = 0, maxputfl = 0;
	while (avioni[i].max) {
		maxputfl = maxputfl + avioni[i].max;
		i = i + 1;
	}
	return maxputfl;

}
