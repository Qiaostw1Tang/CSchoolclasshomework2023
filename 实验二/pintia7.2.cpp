#include<stdio.h>
#define MAXN 3  /*定义符号常量*/
int main(void){
  int i,save,k,temp;
  int a[MAXN];
  for(i=0;i<3;i++){        /*给a[0]-a[2]赋值，i=0,i=1,i=2；i=3时终止输入，后续输入的不算*/
    scanf("%d",&a[i]);
  }

  for(k=0;k<3-1;k++){
    save=k;
    for(i=k+1;i<3;i++){
      if(a[i]<a[save]){
        save=i;
      }
    }
    temp=a[save];
    a[save]=a[k];
    a[k]=temp;
  }
  for(i=0;i<2;i++){
    printf("%d->",a[i]);
  }
  printf("%d",a[i]);
  printf("\n");
  return 0;
}
