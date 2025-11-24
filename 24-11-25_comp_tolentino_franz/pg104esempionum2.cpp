#include <iostream>
using namespace std;

int main () {
	int scelta;
	cout << "Scegli una stagione, digita: 1 per l'inverno, 2 per la primavera, 3 per l'estate, 4 per l'autunno: " << endl;
	cin >> scelta;
		
		switch (scelta) {
			case 1:
				cout << "INVERNO" << endl;
				break;
			case 2:
				cout << "PRIMAVERA" << endl;
				break;
			case 3:
                cout << "ESTATE" << endl;
				break;
			case 4:
				cout << "AUTUNNO" << endl;
				break;
            
            default:
            cout << "Stagione non valida!";    
        }
	return 0;
}