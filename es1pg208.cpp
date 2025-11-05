#include <iostream>
using namespace std;

int main () {
	float area, base, altezza, lato, diagMin, diagMag;
	int scelta;
	cout << "Scegli una figura, digita: 1 per il Triangolo, 2 per il Quadrato, 3 per il Rettangolo,4 per il Rombo: " << endl;
	cin >> scelta;
		
		switch (scelta) {
			case 1:
				cout << "Hai scelto il Triangolo" << endl;
				cout << "Inserisci la misura della base: ";
				cin >> base;
				cout << "Inserisci la misura dell'altezza: ";
				cin >> altezza;
				area = (base*altezza)/2;
				cout << "L'area e': " << area << endl;
				break;
			case 2:
				cout << "Hai scelto il Quadrato" << endl;
				cout << "Inserisci la misura del lato: ";
				cin >> lato;
				area = lato*lato;
				cout << "L'area e': " << area << endl;
				break;
			case 3:
				cout << "Hai scelto il Rettangolo" << endl;
				cout << "Inserisci la misura della base: ";
				cin >> base;
				cout << "Inserisci la misura dell'altezza: ";
				cin >> altezza;
				area = base*altezza;
				cout << "L'area e': " << area << endl;
				break;
			case 4:
				cout << "Hai scelto il Rombo"<< endl;
				cout << "Inserisci la misura della diagonale minore: ";
				cin >> diagMin;
				cout << "Inserisci la misura della diagonale maggiore: ";
				cin >> diagMag;
				area = (diagMin*diagMag)/2;
				cout << "L'area e': " << area << endl;
		}
	return 0;
}
