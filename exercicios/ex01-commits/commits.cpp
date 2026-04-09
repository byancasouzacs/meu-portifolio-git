#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "=== Verificador de Par ou Impar ===" << "\n";
    cout << "Digite um numero: ";
    cin >> n;

    if (cin.fail()) {
        cout << "Erro: digite apenas numeros!" << "\n";
        return 1;
    }

    if (n % 2 == 0) {
        cout << "O numero e Par" << "\n\n";
    } else {
        cout << "O numero e Impar" << "\n\n";
    }

    return 0;
}