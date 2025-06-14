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
    
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    set<char> vocales = {'A', 'E', 'I', 'O', 'U'}; 

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(vocales.count(toupper(v[i][0]))) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
