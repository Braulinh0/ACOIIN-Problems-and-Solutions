#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f float
#define endl '\n'

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(10);

    // usaco("filename");

    int t;
    cin >> t;
    cin.ignore();

    int b;
    cin >> b;
    cin.ignore();

    set<string> lista_negra;
    for(int i = 0; i < b; i++) {
        string nombre;
        getline(cin, nombre);
        lista_negra.insert(nombre);
    }

    int n;
    cin >> n;
    cin.ignore();

    set<string> vip;
    for(int i = 0; i < n; i++) {
        string nombre;
        getline(cin, nombre);
        vip.insert(nombre);
    }

    ll count = 0;
    for(int i = 0; i < t; i++) {
        string nombre, respuesta;
        getline(cin, nombre);
        getline(cin, respuesta);

        if(lista_negra.count(nombre)) {
            continue;
        }

        if(vip.count(nombre)) {
            count++;
            continue;
        }

        if(respuesta == "si") {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
