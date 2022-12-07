#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char carattere;
    cin >> carattere;

    if (funzione(carattere)==true){
        cout << conversione(carattere);
    }
    else cout << "errore";
}
