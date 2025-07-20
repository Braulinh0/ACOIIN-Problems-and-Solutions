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

    int ans = 0;
    vector<string> names(5);
    for(int i = 0; i < 5; i++) {
        string s;
        getline(cin, s);

        if(s == "Don Ramón") {
            ans++;
        }

        names[i] = s;
    }

    cout << "Habitantes: ";
    for(int i = 0; i < 5; i++) {
        if(i == 4) {
            cout << names[i] << endl;
            break;
        }
        cout << names[i] << ", ";
    }
    
    cout << "Cantidad de veces que aparece Don Ramón: " << ans << endl;

    return 0;
}
