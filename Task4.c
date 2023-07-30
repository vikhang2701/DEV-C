#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x,x1,x2;
    printf("nhap 3 so a b c\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0)
    {        
        printf("PT Vo Nghiem");
    }
    else
    {
        delta = pow(b,2)-4*a*c;
        printf("delta = %.2f",delta);
        if(delta >0)
        {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("\nx1 = %.2f",x1);
            printf("\nx2 = %.2f",x2);
        }
        else if (delta ==0)
            {
                x = -b/2*a;
                printf("x= %.2f",x);
            }
        else
        {
            printf("\nPT Vo nghiem");
        }
    
        }
}