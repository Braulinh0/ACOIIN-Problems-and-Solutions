#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f float
#define endl '\n'

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

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

    int n, m;
    cin >> n >> m;
    
    vector<vector<char>> matrix(n, vector<char>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 'T') {
                bool cerca_de_donia = false;

                for(int k = 0; k < 4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if((nx >= 0 && nx < n) && (ny >= 0 && ny < m)) {
                        if(matrix[nx][ny] == 'F') {
                            cerca_de_donia = true;
                            break;
                        }
                    }
                }

                if(!cerca_de_donia) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
