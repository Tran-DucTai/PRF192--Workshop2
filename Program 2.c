#include <stdio.h>


int main()
{
    long pa = 9000000, pd = 3600000;
    long tf, n, ti, income;
    
    printf("Your income this year: ");
    scanf("%ld", &income);
    
    printf("Number of dependents: ");
    scanf("%ld", &n);
    
    tf = 12 * (pa + n * pd); // thue duoc mien trong nam
    
    printf("Tax-free income: %ld\n", tf);
    
    ti = income - tf; // thue thu nhap = tong thu nhap - thue duoc mien trong nam
    
    if (ti <= 0)
    {
        printf("Taxable income: 0\n");
        printf("Income tax: 0\n");
    }
    else if (ti > 0 && ti <= 5000000)
    {
        printf("Taxable income: %ld\n", ti);
        printf("Income tax: %ld\n", (long)(ti * 0.05));
    }
    else if (ti >= 5000001 && ti <= 10000000)
    {
        printf("Taxable income: %ld\n", ti);
        printf("Income tax: %ld\n", (long)(5000000 * 0.05 + (ti - 5000000) * 0.1));
        
        //5000000 * 0.05 là muc thue ap dung cho thu nhap dau tien 5 trieu
        //(ti - 5000000) * 0.1 la muc thue 10% duoc ap dung cho phan con lai cua thu nhap ( ti -5trieu), sau khi tru di muc thue 5% cho 5 trieu dau tien
        // vi du: Neu ti là 7000000, thì thu nhap chiu thue là 7000000 - 5000000 = 2000000. Do do, muc thue là:
        //5000000 * 0.05 + 2000000 * 0.1 = 250000 + 200000 = 450000.
    }
    else if (ti >= 10000001 && ti <= 18000000)
    {
        printf("Taxable income: %ld\n", ti);
        printf("Income tax: %ld\n", (long)(5000000 * 0.05 + 5000000 * 0.1 + (ti - 10000000) * 0.15));
    }
    else
    {
        printf("Taxable income: %ld\n", ti);
        printf("Income tax: %ld\n", (long)(5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + (ti - 18000000) * 0.2));
    }
    
    return 0;
}

