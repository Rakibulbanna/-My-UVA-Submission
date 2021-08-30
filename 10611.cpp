#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

vector<ll>gf;
vector<ll>lu;

int main(){
    #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif

ll g;
cin>>g;
for (ll i=0;i<g;i++){ll x;cin>>x;gf.push_back(x);}
sort(gf.begin(),gf.end());
ll l;
cin>>l;
for (ll i=0;i<l;i++){ll x;cin>>x;lu.push_back(x);}

 for (ll j=0;j<l;j++){

    auto ui = lower_bound(gf.begin(),gf.end(),lu[j]);
    ll u = ui-gf.begin();

    auto vi = upper_bound(gf.begin(),gf.end(),lu[j]);
    ll v = vi-gf.begin();

    //cout <<"u= "<<u<<'\n'<<"v= "<<v<<endl;

    if(gf[u-1]==0 || u==0)
        cout<<"X";
    else
        cout<<gf[u-1];
    cout<<" ";
    if (gf[v]==0)
        cout<<"X";
    else
    cout <<gf[v];

   if (j!=l-1){printf("\n");}

}
printf("\n");

    #ifndef ONLINE_JUDGE
    //printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
    #endif
}
