#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("nhap 2 so a b:");
    scanf("%d %d",&a,&b);
    float kq = (float)a/b; 
    printf("\nlam tron xuong %f",floor(kq));
    printf("\nlam tron len %f ",ceil(kq));
    printf("\ntri tuyet doi %f",fabs(kq));
}
