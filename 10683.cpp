#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
    ll n;
    while (scanf("%lld",&n)!=EOF){

        ll h,m,s,c;
            c=(n%100);
            n/=100;

            s=(n%100);
            n/=100;
            s=s*100;

            m=(n%100);
            n/=100;
            m=m*60*100;

            h=(n%100);
            n/=100;
            h=h*60*60*100;

            ll no=h+m+s+c;

            ll de=(10*100*100*no)/(24*60*60);
            printf("%.7lld\n",de);
            }


    }
