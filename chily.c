#include<stdio.h>
int main(){
    int chocolates=13;
    int picked;
    printf("the total chocolates %d\n\n",chocolates);

    player1:
    printf("player 1 turn \n");
    printf("pick chocolates (1-3):");
    scanf("%d",&picked);
    chocolates=chocolates-picked;
    printf("chocolates remaining =%d\n\n",chocolates);
    if(chocolates==0){
        printf("only chilly remaining \n");
        printf("player 2 gets chilly\n\n");
        goto title1;
    }


    printf("player 2 turn \n");
    printf("pick chocolates (1-3):");
    scanf("%d",&picked);
    chocolates=chocolates-picked;
    printf("chocolates remaining =%d\n\n",chocolates);
    if(chocolates==0){
        printf("only chilly remaining \n");
        printf("player 2 gets chilly\n\n");
        goto title2;
    }

    if(chocolates>=1)
       goto player1;
    
    title1:
    printf("player 1 win \n");
    printf("player 2 Lost\n");
    return 0;
    
    title2:
    printf("player 2 win \n");
    printf("player 1 Lost\n");

    return 0;
    



    
}