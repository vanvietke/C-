#include <stdio.h>

int ngaygoc = 1, thanggoc = 1, namgoc = 2023; // chủ nhật

int NamNhuan(int year)
{
    if (year%4 != 0) // nam chia hết cho 4
    {
        return 0;
    }
    else if (year%100 != 0)
    {
        return 1;
    }
    else if (year%400 != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void ConvertDay(int number)
{
    switch (number)
    {
    case 1:
        printf("\nThu 2");
        break;
    case 2:
        printf("\nThu 3");
        break;
    case 3:
        printf("\nThu 4");
        break;
    case 4:
        printf("\nThu 5");
        break;
    case 5:
        printf("\nThu 6");
        break;
    case 6:
        printf("\nThu 7");
        break;
    case 0:
        printf("\nChu Nhat");
        break;
    default:
        break;
    }
}

int convert(int ngaynow, int thangnow, int namnow)
{
    int ngay;
    int total;
    if (ngaynow != ngaygoc)
    {
        ngay = ngaynow - ngaygoc;
    }
    if (thangnow != thanggoc)
    {
    for (int i = thanggoc; i < thangnow; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            ngay = ngay + 31;
        }
        if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            ngay = ngay + 30;
        }
        if (i == 2 && NamNhuan(namnow) == 1)
        {
            ngay = ngay + 29;
        }
        if (i == 2 && NamNhuan(namnow) == 0)
        {
            ngay = ngay + 28;
        }
    }
    }
    if (namnow != namgoc)
    {
        for (int i = namgoc; i < namnow; i++)
        {
            if (NamNhuan(i) == 1)
            {
                ngay = ngay + 366;
            }else
            {
                ngay = ngay + 365;
            }
            
            
        }
        
        return total = ngay%7;
    }
    

}

int main(int argc, char const *argv[])
{
    unsigned char ngaynow;
    unsigned char thangnow;
    unsigned char namnow;

    printf("Nhap vao ngay: ");
    scanf("%u", &ngaynow);
    printf("\nNhap vao thang: ");
    scanf("%u", &thangnow);
    printf("\nNhap vao nam: ");
    scanf("%u", &namnow);

    printf("\nThu la: ");

    ConvertDay(convert(ngaynow, thangnow, namnow));
}

