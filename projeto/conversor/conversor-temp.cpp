#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;
    cout << "Em Fahrenheit: " << (celsius * 9/5) + 32 << "°F\n";
    return 0;
}