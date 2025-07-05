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

    int t;
    cin >> t;
    
    int temp1 = 0;
    int temp2 = 0;
    while(t--) {
        int num;
        cin >> num;

        temp1 += num;

        if(num > 3) {
            temp2++;
        }
    }

    cout << "Total de tortas vendidas: " << temp1 << endl;
    cout << "Clientes que compraron más de 3 tortas: " << temp2 << endl;

    return 0;
}
