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

    int a, b, c;
    cin >> a >> b >> c;

    bool A = true, B = true, C = true;
    if(a < 7) {
        A = false;
    } 

    if(b < 7) {
        B = false;
    } 

    if(c < 7) {
        C = false;
    }
    
    if(A and B and C) {
        cout << "Certificado" << endl;
    } else if(A and B or B and C or A and C) {
        cout << "Entrena" << endl;
    } else {
        cout << "No esta listo" << endl;
    }

    return 0;
}