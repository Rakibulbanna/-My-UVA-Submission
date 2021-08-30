#include <bits/stdc++.h>
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
using namespace std;
typedef long long int ll;


int main(){
    #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
        //freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    ll tc,j=0;
    cin>>tc;

   while(tc--){
    vector<ll>v;
    for (ll i=0;i<3;i++){
        ll a;
        cin>>a;v.push_back(a);
    }
    sort(v.begin(),v.end());
    auto x = v.begin();
    x++;
    cout<<"Case "<<++j<<": "<<*x<<endl;

   }
    #ifndef ONLINE_JUDGE
    //printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
    #endif

    }
