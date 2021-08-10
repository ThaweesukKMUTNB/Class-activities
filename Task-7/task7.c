//7
#include <stdio.h>
#include <stdlib.h>

double Exp(double x,int n)
{
    double PowX = x;
    double sum = 1;
    double FacI = 1;
    int i = 1;
    
    while(i <= n)
    {
        sum += PowX/FacI;
        
        printf("%lf %lf %d\n",PowX,FacI,i); 
        
        PowX *= x;
        FacI *= ++i;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    
    Exp(0.0,10); // n =10
    Exp(4.1,10);
    Exp(10.0,10);
    Exp(-0.05,10);
    Exp(0.0,100); //n =100
    Exp(4.1,100);
    Exp(10.0,100);
    Exp(-0.05,100);

    return 0;
}
