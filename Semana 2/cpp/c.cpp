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
    // cout.setf(ios::fixed);
    // cout.precision(10);

    // usaco("filename");

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    int temp = 950;
    int total = 950;
    if(s1 == "no") {
        temp -= 500;
    }

    if(s2 == "no") {
        temp -= 300;
    }

    if(s3 == "no") {
        temp -= 150;
    }

    if(s1 == "si" and s2 == "si" and s3 == "si") {
        cout << total - (total * 0.1) << endl;
    } else if(s1 == "no" and s2 == "no" and s3 == "si") {
        cout << temp + 50 << endl;
    } else {
        cout << temp << endl;
    }

    return 0;
}