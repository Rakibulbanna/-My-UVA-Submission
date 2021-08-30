#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("input.txt", "r", stdin);
    //        freopen("output.txt", "w", stdout);




  ll num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  vector< pair<ll,ll> > v[10000];

  while (next_permutation(num, num+10)){
    ll a,b;
    a = num[0] * 10000 + num[1] * 1000 + num[2] * 100 + num[3] * 10 + num[4];
    b = num[5] * 10000 + num[6] * 1000 + num[7] * 100 + num[8] * 10 + num[9];

    if (a % b == 0) {
      v[a/b].push_back(make_pair(a,b));
    }
  }

  bool flag = true;

 while (true) {
    ll n;
    cin >> n;
    if (n == 0)
      break;

    if (!flag)
      cout << endl;

    if (v[n].size() == 0) {
      cout << "There are no solutions for " << n << "." << endl;
    }
    else {
      for (ll i=0;i<v[n].size();i++) {

        cout << v[n][i].first << " / ";

        if (v[n][i].second<10000){
            cout<<"0";
        }
        cout<< v[n][i].second << " = " << n << endl;
      }
    }
    flag=false;
  }

}
