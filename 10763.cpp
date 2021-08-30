#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
     #ifndef ONLINE_JUDGE

    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    #endif

   while(true){
    ll n;
    cin>>n;
    if(n==0){break;}

    map<ll,ll>m1,m2;

    while(n--){
        ll x,y;
        cin>>x>>y;
        m1[x]++;
        m2[y]++;
    }
    bool flag=true;

    for(auto i=m1.begin(),j=m2.begin();i!=m1.end(),j!=m2.end();i++,j++){

            if (i->first==j->first){
                if (i->second != j->second){
                    flag=false;
                    break;
            }

            }
            else{
                flag=false;
            }

    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }

}
