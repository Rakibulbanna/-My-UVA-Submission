#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n,v;
        cin>>n;
        string c="";
        ll b[n];

        for(ll i=0;i<n;i++){
                char cc;
                cin>>cc;
                c+=cc;
            cin>>b[i];
        }
        double sum=0;
        cin>>v;
        string s;
        getline(cin,s);
        for(ll j=0;j<v;j++){
        getline(cin,s);

            for(ll k=0;k<s.size();k++){
                for(ll l=0;l<n;l++){
                    if(s[k]==c[l]){
                        sum+=(double)b[l];
                    }
                }
            }
        }
       printf("%.2lf",sum/100.00);
       cout<<"$"<<endl;
    }
    return 0;
}
