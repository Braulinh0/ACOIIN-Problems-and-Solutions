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

    ll total = 0;
    for(int i = 1; i <= 5; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int temp = a + b + c;
        total += temp;

        cout << "Dia " << i << ": $" << temp << endl;
    }

    cout << "Total: $" << total << endl;
    cout << "Promedio: $" << total / 5 << endl;

    return 0;
}