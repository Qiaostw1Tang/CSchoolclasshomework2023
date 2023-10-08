#include <stdio.h>
int main(void)
{
	int digit,i,letter,blank,other;/*定义四个变量*/
    char ch; /*定义字符变量*/
    digit=letter=other=0; /*存放结果的三个变量初始值归零*/
	for (i=1;i<=10;i++)/*循环10次*/
	{
		ch = getchar();/*读入键盘输入的一个字符并赋值给ch字符变量*/
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))/*附录B，ASCII码集顺序*/
        {letter++;}else if(ch>='0'&&ch<='9'){
            digit++;
        }else if(ch==' '){
            blank++;
        }else if(ch=='\n'){
            blank++;
            }else{other++;}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	return 0;
}
