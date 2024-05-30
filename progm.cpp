#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;
    int num;
    int suma = 0;
    for (int i = 0; i < 20; ++i) {
        cin >> num;
        if (num == 0) {
            break;
        }
        numeros.push_back(num);
        suma += num;
    }

 
    cout << "Números en orden inverso:" << endl;
    for (int i = numeros.size() - 1; i >= 0; --i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "Suma de los números: " << suma << endl;

    return 0;
}