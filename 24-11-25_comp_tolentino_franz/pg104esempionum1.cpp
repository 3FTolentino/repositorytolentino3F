#include <iostream>
using namespace std;

int main (){
    int scelta;
    cout << "Scegli un numero tra 0 e 1:" << endl;
    cin >> scelta;

    switch (scelta) {
        case 0:
          cout << "ZERO";
          break;
        case 1:
          cout << "UNO";
          break;
        default:
          cout << "Non previsto";
          
    }


    return 0;
}