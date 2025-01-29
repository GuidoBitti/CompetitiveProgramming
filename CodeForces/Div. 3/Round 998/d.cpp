#include <bits/stdc++.h>
using namespace std;
// g++ -std=c++20 -02 -wall template.cpp -o template
 
#define forr(i,a,b) for(int i=(int)a ; i<(int)b ; i++)
#define forn(i, n) for(int i = 0; i < n; i ++)
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define all(x) (x).begin(),(x).end()
#define fst first
#define snd second
#define pb(x) push_back(x)
#define X real()
#define Y imag()
#define MAXN 200000
#define MAXI 9e18
#define MINI -9e18
typedef long long ll;
typedef complex<ll> P;
typedef pair<int,int> ii;
 
int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        forn(i,n)cin >> a[i];
        string sol="YES";
        forr(i,1,n){
            int mini=min(a[i],a[i-1]);
            a[i]-=mini;
            a[i-1]-=mini;
            if(a[i]<a[i-1]){sol="NO";break;}
        }
        cout << sol << '\n';
    }
    
    return 0;
}