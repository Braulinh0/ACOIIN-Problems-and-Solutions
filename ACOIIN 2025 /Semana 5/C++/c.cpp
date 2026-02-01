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

    int n;
    cin >> n;
    
    vector<int> goles_equipos(n);
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;

        int suma = 0;
        while(m--) {
            int goles;
            cin >> goles;

            suma += goles;
        }

        goles_equipos[i] = suma;
    }

    for(int i = 0; i < n; i++) {
        cout << "Equipo " << i + 1 << " hizo " << goles_equipos[i] << " goles." << endl;
    }

    return 0;
}