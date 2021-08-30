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
    //printf("\n");
    ll n,h;
    cin>>n>>h;

    string s="";
    
    for (ll i=0;i<n-h;i++){
        s+='0';
    }
    for (ll j=n-h;j<n;j++){
        s+='1';
    }

    cout<<s<<endl;

    while(next_permutation(s.begin(),s.end())){

        cout<<s<<endl;
    }
    if (tc!=0){
            printf("\n");
    }
}

}
