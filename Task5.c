/*#include<stdio.h>

int main()
{
    int a;
    printf(" nhap vao thu tu ngay trong tuan\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("nay la chu nhat\n");
        break;
    case 2:
        printf("nay la thu 2\n");
        break;
    case 3:
        printf("nay la thu 3\n");
        break;
    case 4:
        printf("nay la thu 4\n");
        break;
    case 5:
        printf("nay la thu 5\n");
        break;
    case 6:
        printf("nay la thu 6\n");
        break;
    case 7:
        printf("nay la thu 7\n");
        break;
    default:
        printf("so thu tu khong phu hop");
        break;
    }
}*/
#include<stdio.h>

int main()
{
    int thang, nam;
    printf("nhap thang\n");
    scanf("%d",&thang);
    printf("nhap nam\n");
    scanf("%d",&nam);
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("co 31 ngay");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("co 30 ngay");
        break;
    case 2:
        if((nam%400==0)||(nam%4==0 && nam%100!=0))
        {printf("co 29 ngay");}
        else
        {printf("co 28 ngay");}
    break;
    default:
        printf("nhap du lieu khong dung");
    }
}