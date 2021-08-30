#include<bits/stdc++.h>

using namespace std;

typedef long long ll;



int main(){
    #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
        //freopen("input.txt", "r", stdin);
       // freopen("output.txt", "w", stdout);
    #endif

    ll tc;
    cin>>tc;
    while (tc--){
    ll n;
    cin>>n;
    n*=567;
    n/=9;
    n+=7492;
    n*=235;
    n/=47;
    n-=498;
    
    ll m=(n/10)%10;

    if (m<0){m*=-1;}

    cout<<m<<endl;



}
#ifndef ONLINE_JUDGE
    //printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

}
