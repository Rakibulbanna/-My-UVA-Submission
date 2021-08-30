#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    string s1,s2;
    while (cin>>s1>>s2){
            ll cnt=0;
            bool flag=false;

            for (ll i=0;i<s2.size();i++){

                 if (s1[cnt]==s2[i]){
                    cnt++;
                    //cout<<s2[j]<<endl;
                 }
                 if (cnt==s1.size()){flag=true;break;}

            }

        if (flag){printf("Yes\n");}
        else {printf("No\n");}

    }
}
