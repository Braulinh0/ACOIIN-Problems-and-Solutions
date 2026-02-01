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
    cout.precision(1);

    // usaco("filename");

    int t;
    cin >> t;

    f count = 0;
    f suma = 0;
    while(t--) {
        f n;
        cin >> n;

        if(n >= 1 and n <= 10) {
            count++;
            suma += n;
        } else {
            continue;
        }
    }

    if(count == 0) {
        cout << "No hay calificaciones válidas." << endl;
    } else {
        cout << "El promedio de los episodios es: " << suma / count << endl;
    }

    return 0;
}
