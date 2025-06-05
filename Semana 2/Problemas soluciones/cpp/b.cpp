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

    int temp = 0, t = 3;
    while(t--) {
        string s;
        cin >> s;

        if(s == "si") {
            temp++;
        }
    }   

    if(temp == 3) {
        cout << "Pasa" << endl;
    } else if(temp == 2 or temp == 1) {
        cout << "Interrogatorio" << endl;
    } else {
        cout << "Intruso imperial" << endl;
    }

    return 0;
}