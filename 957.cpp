#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
      ll y,np;
    while (cin>>y>>np){

        vector<ll>p;

       for(ll i=0;i<np;i++){
        ll x;cin>>x;
        p.push_back(x);
       }


       ll maxi= -1,first=0,last=0;

       for(ll j=0;j<np;j++){

           ll cnt=0;

           ll n=p[j]+y;

           while (cnt<np && p[cnt]<n) {
            cnt++;


           if(cnt-j>maxi){
              // cout<<"j= "<<j<<" , "<<"cnt "<<cnt<<endl;
              //  cout<<"cnt-j ="<<cnt-j<<endl;
          // cout<<endl;
               maxi=cnt-j;
               first=p[j];
               last=p[cnt-1];
           }
          // else {
           // cout<<"         "<<"j= "<<j<<" , "<<"cnt "<<cnt<<endl;
          //  cout<<"         "<<"cnt-j ="<<cnt-j<<endl;
          // cout<<"         "<<endl;
          // }
        }

       }

        cout<<maxi<<" "<<first<<" "<<last<<endl;

    }
}
