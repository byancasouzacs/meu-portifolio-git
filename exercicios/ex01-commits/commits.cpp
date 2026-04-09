#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "O numero é Par" << "\n";
    } else {
        cout << "O numero é Impar" << "\n";
    }

    return 0;
}