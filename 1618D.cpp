#include <bits/stdc++.h>
using namespace std;
#define ll long long   
void solve()
{
    ll n; cin >> n;
    ll k; cin >> k;
    vector<ll> A(n);
    for(ll i=0;i<n;i++) cin >> A[i];
    sort(A.begin(),A.end(),greater<ll>());
    ll ans = accumulate(A.begin(),A.end(),0ll);
    ll x=0,z=k;
    while(k--)
    {
        if(A[x]==A[x+z])
            ans++;
        ans-=(A[x]+A[x+z]);
        x++;
    }
    cout << ans;
}
int main()
{
    ll t; cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
