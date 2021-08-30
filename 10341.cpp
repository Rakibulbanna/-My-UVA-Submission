#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll p,q,r,s,t,u;

double solve(double x){
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}

int main(){

    while (scanf("%lld %lld %lld %lld %lld %lld",&p,&q,&r,&s,&t,&u)!=EOF){


        if(solve(0)*solve(1)>0){
            cout << "No solution" << endl;
        }

    else{
        double low =0.0,high=1.0;

        double mid, ans;

        ll tc=60;

        while(tc--){

            mid=(low+high)/2.0;


            if(solve(mid)<=0){
               high=mid;
            }
            else {
                low=mid;
            }

        }
        printf("%.4lf\n",mid);
        }


    }

}
