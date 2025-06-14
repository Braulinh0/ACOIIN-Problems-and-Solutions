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

    ll n;
    cin >> n;

    vector<vector<ll>> matriz(n, vector<ll>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    bool diagonal = true;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j and matriz[i][j] != 0) {
                diagonal = false;
                break;
            }
        }
    }

    if(diagonal) {
        cout << "La matriz es diagonal." << endl;
    } else {
        cout << "La matriz no es diagonal." << endl;
    }

    return 0;
}
