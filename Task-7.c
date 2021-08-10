#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; int c;
    FILE *f;
    f = fopen("data.txt","w");
    for (c = 1; c<= 1000; c++){
        n = rand()% 1000;
        fprintf(f,"%d\n",n);
    }
    fclose(f);
}
