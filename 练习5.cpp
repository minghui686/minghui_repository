#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    printf("Enter amout of loan: \nEnter interest rate: \nEnter monthly payment: ");
    scanf("%f%f%f",&a,&b,&c);
    g=(0.01*b)/12;
    d=a-c+g*a;
    e=d-c+g*d;
    f=e-c+g*e;
    printf("Balance remaining after first payment:%.2f\n",d);
    printf("Balance remaining after second payment:%.2f\n",e);
    printf("Balance remaining after third payment:%.2f\n",f);
    return 0;
    
}
