#include <iostream>
using namespace std;

int contarDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + contarDigitos(n / 10);
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    
    if (numero == 0) {
        cout << "O numero digitado tem 1 dígito." << endl;
    } else {
        cout << "O numero digitado tem " << contarDigitos(numero) << " dígitos." << endl;
    }

    return 0;
}
