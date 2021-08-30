#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){

    //ll tc,c=0;
    //cin>>tc;

    while(true) {

        ll r,f;
        cin>>r;
        if(r==0){break;}
        cin>>f;

    vector<ll>m;for(ll i=0;i<r;i++){ll x;cin>>x;m.push_back(x);}
    vector<ll>n;for(ll j=0;j<f;j++){ll y;cin>>y;n.push_back(y);}

    vector<double>d;

    for (ll i=0;i<f;i++){
        for (ll j=0;j<r;j++){
            double cnt=(double)n[i]/(double)m[j];
            d.push_back(cnt);
        }
    }
    sort(d.begin(),d.end());

    ll l=d.size();


    double maxi= -1;
    for(ll k=0;k<l-1;k++){
        double aa=d[k+1]/d[k];
        maxi=max(maxi,aa);
    }


   printf("%.2lf\n",maxi);

    }


}
