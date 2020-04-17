#include<stdio.h>
#include<math.h>
int num(int x,int y){
    if(y>x) {
        return -1;
    }
    if (x==1 && y==-1) {
        return 1;
    }
    if (y==1||y==x) {
        return x;
    }
    else {
        return num(x-1,y-1)+num(x-1,y);
    }
}
void draw(unsigned int n){
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("%d",num(i,j));
            
        }
        printf("\n");
    }
}
    int main() {
        int n;
        printf("请输入三角形行数：");
        scanf("%d",&n);
        draw(n);
        return 0;
    }

