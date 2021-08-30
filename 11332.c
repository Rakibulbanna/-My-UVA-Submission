#include<stdio.h>
main ()
{
    int i,j,x,y,z;
    for (j=1;;j++){
            scanf("%d",&x);
    if (x<1){break;}
    else{
        if (x<10){
            printf("%d\n",x);
        }
        else {
            for (i=1;;i++){
                y=x/10;
                z=x%10;
                x=y+z;
                if (x<10){

                    printf("%d\n",x);
                    break;
                }
                else{continue;}
            }
        }
    }
}
return 0;
}