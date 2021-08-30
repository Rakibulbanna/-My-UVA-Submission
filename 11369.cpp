#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    #ifndef ONLINE_JUDGE

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    #endif

ll tc;
cin>>tc;
while(tc--){
    ll n;
    cin>>n;
    vector<ll>v;

    for (ll i=0;i<n;i++){ll x;cin>>x;v.push_back(x);}

    sort(v.begin(),v.end());

    ll cnt=0;

    for(ll j=n-3;j>=0;j-=3){
        cnt+=v[j];
    }
    cout<<cnt<<endl;
}

}
