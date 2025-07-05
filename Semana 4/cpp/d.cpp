#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f float
#define endl '\n'

void usaco(string filename) {
    freopen((filename + ".in").c_str(), "r", stdin);
    freopen((filename + ".out").c_str(), "w", stdout);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(10);

    // usaco("filename");

    int t;
    cin >> t;
    cin.ignore();

    string nombre_max = "";
    ll max_deuda = 0, suma = 0;
    while(t--) {
        string nombre;
        getline(cin, nombre);

        string deuda_str;
        getline(cin, deuda_str);
        int deuda = stoi(deuda_str);

        suma += deuda;
        if(deuda > max_deuda) {
            max_deuda = deuda;
            nombre_max = nombre;
        }
    }

    cout << "Total adeudado: $" << suma << endl;
    cout << "El que más debe es " << nombre_max << "con $" << max_deuda << endl;

    return 0;
}
