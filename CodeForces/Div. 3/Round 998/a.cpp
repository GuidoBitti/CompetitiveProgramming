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
        int a1,a2,a3,a4,a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int cant,sol=0;
        forr(a3,-100,101){
            cant=0;
            if(a3==a1+a2)cant++;
            if(a4==a3+a2)cant++;
            if(a5==a3+a4)cant++;
            sol=max(sol,cant);
        }
        cout << sol << '\n';
    }
    
    return 0;
}