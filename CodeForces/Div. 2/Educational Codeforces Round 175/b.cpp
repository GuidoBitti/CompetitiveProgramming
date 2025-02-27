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
        int mid=0,cantMid=-1,resto=-1;
        ll n,x,k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        forn(i,n){
            if(s[i]=='R'){
                x++;
                mid++;
            }else{
                x--;
                mid--;
            }
            if(mid==0 && cantMid==-1) cantMid=i+1;
            if(x==0 && resto==-1) resto=i+1;
        }
        if(resto==-1)cout << 0 << '\n';
        else{
            ll sol=1;
            if(k-resto>0 && cantMid>0)sol+=(k-resto)/cantMid;
            cout << sol << '\n';
        }
    }
    
    return 0;
}