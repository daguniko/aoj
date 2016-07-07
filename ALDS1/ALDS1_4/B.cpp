#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;
typedef vector<pii> vpii;
#define reps(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) reps(i,0,n)
#define all(g) (g).begin(),(g).end()
#define pb push_back
const int mod = 1e9 + 7;
#define INF 1<<25
/*
input case
5
1 2 3 4 5
4
3 4 1 6
output case
3
*/

int n,q,tmp,sum=0;
const int N = 100;
int a[N];

bool linearSearchImp(int key){
    a[n] = key;
    int t = 0;
    while(1){
        if (key == a[t]) break;
        t++;
    }
    if (t == n) return false;
    return true;
}

bool linearSearch(int key){
    rep(i,n){
        if (key == a[i]) return true;
    }
    return false;
}

bool binarySearch(int key){
    int left = 0;
    int right = n;
    int mid;
    while(left < right){
        mid = (left + right)/2;
        if (key < mid){
            right = mid;
        }else if (key == mid){
            return true;
        }else{
            left = mid +1;
        }
    }
    return false;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    rep(i,n) cin >> a[i];
    cin >> q;
    rep(i,q) {
        cin >> tmp;
        if (binarySearch(tmp)){
            sum++;
        }
    }
    cout << sum << endl;
}