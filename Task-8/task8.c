#include <stdio.h>
#include "qsort.c"

int main()
{
    FILE *f;
    FILE *fp;
    int value;
    int number[1000];
    int N =1000;
    f = fopen("data.txt","r");
    fp = fopen("data_sorted.txt","w");
    for(int i=0;i<N;i++)
    {
        fscanf(f,"%d",&number[i]); //data to list

    }
    quicksort(number,0,999);
    for(int i=0;i<N;i++)
    {
        fprintf(fp, "%d\n",number[i]);
    }
    fclose(f);
}
