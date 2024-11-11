#include <iostream>
using namespace std;

int somaPares(int x) {
    if (x <= 0) {
        return 0;
    }
    if (x % 2 == 0) {
        return x + somaPares(x - 2);
    } else {
        return somaPares(x - 1);
    }
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    
    cout << "A soma dos numeros pares de 1 a " << num << " e: " << somaPares(num) << endl;

    return 0;
}
