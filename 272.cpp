#include <bits/stdc++.h>

#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
using namespace std;
typedef long long ll;

int main(){
    #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    ll cnt=1;
    while(getline(cin,s)){
        for (ll i=0;i<s.size();i++){
            if(s[i]== '"' && cnt==1){
                cout<<"``";
                cnt=2;
            }
            else if (s[i]=='"' && cnt==2){
                cout<<"''";
                cnt=1;
            }
            else {
                cout<<s[i];
            }
        }
        cout<<"\n";

    }

    #ifndef ONLINE_JUDGE
    //printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
    #endif

    }
