#include<bits/stdc++.h>
using namespace std;

int main(){
    int bb,i,j;
    int flag;
    string s;

    while(getline(cin,s)){

    bb=s.size();
    flag = -1;

        for(i=0;i<bb;i++){

        if(s[i]==' '){

        for(j = i-1;j>flag;j--){

        printf("%c",s[j]);
    }

    printf(" ");
    flag = i;

    }

    }

   for(i=bb-1;i>flag;i--){
    printf("%c",s[i]);
   }
    printf("\n");

}
//printf("\n");
return 0;
}
