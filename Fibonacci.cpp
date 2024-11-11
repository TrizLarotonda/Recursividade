#include <iostream>
using namespace std;

int tribonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 1;
    }
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "T(" << num << ") = " << tribonacci(num) << endl;
    return 0;
}
