#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool check(string &s ,string pat ){
    int pos = s.find(pat);
    return pos != string::npos;
}

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i =0; i< n; i++){
        cin>>a[i];
    }
    ll ans = a[0];
    vector<ll> bitcnt(31 , n);
    for(auto e: a){
        for(ll i=30; i>=0; i--){
            if((e >> i)&1 ){
                bitcnt[i]--;
            }
        }
        ans = ans&e;
    }
    

    for(ll i=30; i>= 0; i--){
        if(k>= bitcnt[i]){
            k-=bitcnt[i];
            ans|=(1LL<<i);
        }
    }

    cout<<ans<<endl;



    

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    

    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    
    return 0;
}
