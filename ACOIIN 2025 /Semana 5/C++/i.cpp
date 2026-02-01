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

    int T; 
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        vector<ll> A(N);
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        ll x = A[N-1];
        ll y = A[N-2];
        ll z = A[N-3];
        ll s1 = y + z;

        ll cand1 = (s1 > x ? x : x % s1);
        ll cand2 = y;
        cout << max(cand1, cand2) << endl;
    }
    
    return 0;
}
