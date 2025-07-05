#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

string trim(const string &s) {
    const char* ws = " \t\r\n";
    auto start = s.find_first_not_of(ws);

    if(start == string::npos) {
        return "";
    }

    auto end = s.find_last_not_of(ws);

    return s.substr(start, end - start + 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    int total = 0;
    for(int i = 0; i < n; i++) {
        string nombre;
        getline(cin, nombre);
        nombre = trim(nombre);

        int pedidos;
        cin >> pedidos;
        cin.ignore();

        int entregados = (nombre == "Ñoño" ? min(pedidos, 3) : pedidos);
        cout << "A " << nombre << " se le entregaron " << entregados << " tamales." << endl;
        total += entregados;
    }

    cout << "Total de tamales entregados: " << total << endl;
    
    return 0;
}
