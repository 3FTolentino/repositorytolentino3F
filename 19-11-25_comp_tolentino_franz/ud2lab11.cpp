#include <iostream>
using namespace std;

int main (){
    
	char nome [10];
	float KMiniziali, KMfinali, KMpercorsi, importo;
	const float CK = 1.20;
	
    cout << "Scrivi il tuo nome: ";
	cin >> nome;
	cout << "Dammi i chilometri iniziali: ";
	cin >> KMiniziali;
	cout << "Ora dammi i chilometri finali: ";
	cin >> KMfinali;
    KMpercorsi = KMfinali - KMiniziali;
	importo = (KMpercorsi) * CK;
	cout << "Gentile Sig. " << nome << " deve pagare: " << importo << " euro" << endl;
		
return 0;	
}