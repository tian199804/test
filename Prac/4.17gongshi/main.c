

//公式L(n)=1+n*(n+1)/2第一小问

#include<stdio.h>
int calc_spaces(int n) {
if(n==0)
return 1;
   else
    return calc_spaces(n-1)+n;
}
int main(){
    int n;
    printf("请输入根数： ");
    scanf("%d", &n);
    printf("可以划分出%d个空间\n", calc_spaces(n));
    return 0;
}
