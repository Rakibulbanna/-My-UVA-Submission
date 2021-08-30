#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;

    map<int, int> map1;
    vector<int> vec1;

    int empty =0;

    while(scanf("%d",&n) != EOF ) {
        if(map1[n] == empty)
            vec1.push_back(n);
            map1[n]++;
    }

    for(i=0;i < vec1.size(); i++) {

        cout <<vec1[i]<<" "<<map1[vec1[i]]<<endl;
    }
    return 0;
}
