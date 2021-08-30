#include <stdio.h>
#include <string.h>

int main() {
    int a,sum=0;
    int x;

    char arr[20];

    scanf("%d",&a);

    while(a--) {
        scanf("%s", arr);

        if(strcmp(arr,"donate")==0) {
            scanf("%d", &x);
            sum =sum+ x;
        } else {
            printf("%d\n",sum);
        }
    }
    return 0;
}