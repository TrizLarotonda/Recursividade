#include <iostream>
using namespace std;

int somatoria(int N) {
    if(N == 1) {
        return 1;
    }
    return N + somatoria(N-1);
}

int main() {
    int num;
    cout << "Digite um numero para o calculo de somatória: ";
    cin >> num;
    
    cout << "A somatória de " << num << " é " << somatoria(num);
    return 0;
}

