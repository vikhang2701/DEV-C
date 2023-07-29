/*#include<stdio.h>

int main()
{
    float a,b;
    printf("Nhap vao 2 so a b : ");
    scanf("%f %f",&a,&b);
    float tong = a + b;
    float hieu = a - b;
    float tich = a * b;
    float thuong = a/b;
    int c = ((int) a) % ((int) b);

    printf("gia tri tong la %.2f + %.2f = %.2f",a,b,tong);
    printf("\ngia tri hieu la %.2f - %.2f = %.2f",a,b,hieu);
    printf("\ngia tri tich la %.2f * %.2f = %.2f",a,b,tich);
    printf("\ngia tri thuong la %.2f / %.2f = %.2f",a,b,thuong);
    printf("\ngia tri c la %.2f / %.2f = %d",a,b,c);
    a++;
    b--;
    printf("\nso a hien tai %f ",a);
    printf("\nso b hien tai %f",b);

    
}*/
#include<stdio.h>
int main()
{ 
    int a = 5;
    int b = 5;
    printf("%d",a++);
    printf("\n%d",a);
    printf("\n%d",++a);

    printf("\n%d",b--);
    printf("\n%d",b);
    printf("\n%d",--b);
}