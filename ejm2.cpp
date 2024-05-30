#include <iostream>
#include <vector>

using namespace std;
//no da la suma correcta
int main() {
    const int Fl = 4;
    const int COL = 3;
    vector<vector<int>> tabla(Fl, vector<int>(COL));

    
    cout << "Introduce los valores de la tabla :\n";
    for (int i = 0; i < Fl; ++i) {
        for (int j = 0; j < COL; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> tabla[i][j];
        }
    }
    vector<int> sm(COL, 0);
    for (int j = 0; j < COL; ++j) {
        for (int i = 0; i < Fl; ++i) {
            sm[j] += tabla[i][j];
        }
    }

    int ms= sm[0];
    for (int j = 1; j < COL; ++j) {
        if (sm[j] > ms) {
            ms = sm[j];
        }
    }

    cout << "\nLa mayor de las sumas de las columnas es: " << ms << endl;

    return 0;
}
