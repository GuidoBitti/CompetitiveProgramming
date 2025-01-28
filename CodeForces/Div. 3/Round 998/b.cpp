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
        int n,m,x;
        cin >> n >> m;
        vector<int> sol(n*m);
        forn(i,n){
            forn(j,m){
                cin >> x;
                sol[x]=i+1;
            }
        }
        set<int> s;
        bool solBool=true; 
        forn(i,n)s.insert(sol[i]);
        if(s.size()!=n)solBool=false;
        int p=0;
        forr(i,n,n*m){
            if(p==n)p=0;
            if(sol[i]!=sol[p++])solBool=false;
            if(!solBool)break;
        }
        if(solBool){
            forn(i,n)cout << sol[i] << " ";
        }else{
            cout << -1;
        }
        cout << '\n';
    }
    
    return 0;
}