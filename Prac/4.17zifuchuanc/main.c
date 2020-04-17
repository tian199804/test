#include<stdio.h>
double my_atof(char *nptr){
double s=0.0;
double d=10.0;
while(*nptr==' ')
{
    nptr++;
}
if(!(*nptr>='0'&&*nptr<='9'))//如果一开始非数字则退出，返回0.0
        return s;
 while(*nptr>='0'&&*nptr<='9'&&*nptr!='.')//计算小数点前整数部分
    {
        s=s*10.0+*nptr-'0';
        nptr++;
    }
 
    if(*nptr=='.')//以后为小树部分
        nptr++;
 
    while(*nptr>='0'&&*nptr<='9')//计算小数部分
    {
        s=s+(*nptr-'0')/d;
        d*=10.0;
        nptr++;
    }
    return s;
}
    int main () {
        printf("%f\n", my_atof("0.123"));
        printf("%f\n", my_atof(".123"));
        printf("%f\n", my_atof("16.4"));
        printf("%f\n", my_atof("16."));
        printf("%f\n", my_atof("0.0"));
        printf("%f\n", my_atof("0."));
        return 0;
    }

