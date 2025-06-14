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

    if(n > 0 && n % 2 == 0) {
        cout << "Luz en el camino." << endl;
    } else if(n > 0 && n % 3 == 0) {
        cout << "El sendero es incierto." << endl;
    } else if(n < 0 && n % 7 == 0) {
        cout << "Oscuridad profunda." << endl;
    } else if(n < 0 && n % 7 != 0) {
        cout << "Peligro al acecho." << endl;
    } else {
        cout << "Equilibrio eterno." << endl;
    }

    return 0;
}
