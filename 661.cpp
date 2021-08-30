#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
   ll tc=0;
   while(true){
    ll n,m,c;
    cin>>n>>m>>c;
    if(n==0&&m==0&&c==0){break;}

    vector<ll>v;
    map<ll,bool> ma;

    for (ll i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back(x);
    }
    for (ll j=0;j<m;j++){
            ma[j]=false;
    }

    ll cnt=0,maxi=0;

    for (ll k=0;k<m;k++){
        ll y;
        cin>>y;
        y--;
        if (ma[y]==false){
            cnt+=v[y];
            ma[y]=true;
        }
        else if (ma[y]==true){
            cnt-=v[y];
            ma[y]=false;
        }
        maxi=max(maxi,cnt);
    }
  cout<<"Sequence "<<++tc<<endl;


    if (cnt>c){
        printf("Fuse was blown.\n\n");
    }
    else {
        printf("Fuse was not blown.\n");
        cout<<"Maximal power consumption was "<<maxi<<" amperes.\n"<<endl;
    }


   }



}
