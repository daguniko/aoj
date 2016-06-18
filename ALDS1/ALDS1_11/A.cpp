#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;
typedef vector<pii> vpii;
typedef unordered_set<int> usi;
typedef priority_queue<int,vi,greater<int>> pq;
#define reps(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) reps(i,0,n)
#define all(g) (g).begin(),(g).end()
#define pb push_back
const int mod = 1e9 + 7;
#define INF 1<<25
/*
input case
4
1 2 2 4
2 1 4
3 0
4 1 3
output case
0 1 0 1
0 0 0 1
0 0 0 0
0 0 1 0
*/
int n;
const int N = 110;
int g[N][N];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    // initialize
    memset(g,0,sizeof(g));

    // input
    cin >> n;
    rep(i,n){
        int j,k;
        cin >> j >> k;
        --j;
        rep(l,k) {
            int m;
            cin >> m;
            --m;
            g[j][m] = 1;
        }
    }

    // output
    rep(i,n){
        rep(j,n){
            cout << g[i][j];
            if (j != n-1) cout << " ";
        }
        cout  << endl;
    }
}