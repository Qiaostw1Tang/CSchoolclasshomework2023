#include<stdio.h>
#include<string.h>
int main(void){
    int i;
    char a[80];
    for(int i=0;i<80;i++){
        scanf("%c",&a[i]);
        if(a[i]=='#')
        break;
    }
    for(int i=0;i<80;i++){
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]+=32;
        }else if(a[i]=='#'){
        break;}
        else if(a[i]>='a'&&a[i]<='z'){
            a[i]-=32;
        }else{ a[i]=a[i];}
    }
    for ( i = 0; a[i] != '#'; i++){
	printf("%c", a[i]);}
    return 0;}