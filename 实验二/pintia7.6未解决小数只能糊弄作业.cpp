#include<stdio.h>
int main(void){
    int N,i,k;
    int A,B,C,D,E;
    A=B=C=D=E=0;
    int score[99999],j;
    float trans;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&score[i]);
        getchar();
    }
     for(j=0;j<N;j++){
         switch(score[j]/10)
         {
             case 10:case 9:A++;break;
             case 8:B++;break;
             case 7:C++;break;
             case 6:D++;break;
             case 5:case 4:case 3:case 2:case 1:case 0:E++;break;
         }
     }
    printf("%d %d %d %d %d",A,B,C,D,E);
    return 0;
}