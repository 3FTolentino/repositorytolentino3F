#include <iostream>
using namespace std;

class Mattina {
    public:
    void inizioMattinata () {
        colazione();
        vestiti();
}

    virtual void colazione () {
        cout << "Mangia latte e biscotti\n";
  }
    
    virtual void vestiti () {
        cout << "Indossa maglietta e pantaloni\n";
  }
};

class Cane: public Mattina {
    public:
    void colazione () override {
        cout << "Mangia croccantini\n";
    }
    
    void vestiti () override {
        cout << "Si mette il guinzaglio\n";
    }

};

class Coniglio: public Mattina {
    public:
    void colazione () override {
        cout << "Mangia carote\n";
    }

    void vestiti () override {
        cout << "Indossa la pettorina\n";
    }

};


int main () {
    Mattina* animale1 =  new Cane;
    Mattina* animale2 =  new Coniglio;

    cout << "---MATTINATA DEL CANE---\n";
    animale1->inizioMattinata();
    cout << "\n";
    cout << "---MATTINATA DEL CONIGLIO---\n";
    animale2->inizioMattinata();

    return 0;
}







