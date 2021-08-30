#include <bits/stdc++.h>
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
using namespace std;
typedef long long ll;


int main(){
    #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
        //freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    ll tc;
    cin>>tc;

   while(tc--){

   ll a,b;
   cin>>a>>b;

   if (a<b){printf("impossible\n");}

   else if((a+b)%2!=0) {
    printf("impossible\n");
   }
   else {
    ll cnt_a=(a+b)/2;
    ll cnt_b=(a-b)/2;
    cout<<max(cnt_a,cnt_b)<<' '<<min(cnt_a,cnt_b)<<endl;
   }
    }




    #ifndef ONLINE_JUDGE
    //printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
    #endif

    }
