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
    
    vector<int> goles_equipos(t);
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int suma = 0;
        for(int j = 0; j < n; j++) {
            int goles;
            cin >> goles;

            suma += goles;
        }

        goles_equipos[i] = suma;
    }

    for(int i = 0; i < t; i++) {
        cout << "Equipo " << i + 1 << " hizo " << goles_equipos[i] << " goles." << endl;
    }

    return 0;
}
