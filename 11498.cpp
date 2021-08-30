 #include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define len 10005
typedef long long ll;
int main(){

    int k,n,m,x,y;

    while(1){
             cin>>k;
             if(k==0){break;}

             cin>>n>>m;

             while (k--){

                   cin>>x>>y;

                   if(x == n || y == m) printf("divisa\n");
                   else if(x > n && y > m) printf("NE\n");
                   else if(x > n && y < m) printf("SE\n");
                   else if(x < n && y > m) printf("NO\n");
                   else if(x < n && y < m) printf("SO\n");
             }
    }

}
