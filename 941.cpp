#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
        vector<ll>fac;
        fac.push_back(1);
        for (ll i=1;i<=20;i++){
            fac.push_back(fac[i-1]*i);
        }
    ll tc,t=0;
    cin>>tc;
    while(tc--){
        ll n;
        string s;
        cin>>s;
        cin>>n;
        sort(s.begin(),s.end());

        string cnt="";

        while(s.size()>0){
                
            ll x=fac[s.size()-1];
        
            ll tem=n/x;
            
            cnt+=s[tem];
            
            s.erase(s.begin()+tem);
            
            n=n%x;
        }
        cout<<cnt<<endl;

    }

}
