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

    string s;
    int n;
    cin >> s >> n;

    for(int i = 1; i <= n; i++) {
        string repeticion = "";
        for(int j = 0; j < i; j++) {
            repeticion += s;
        }

        cout << repeticion << endl;
    }

    return 0;
}
