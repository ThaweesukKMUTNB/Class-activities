#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char* tohex(int64_t value)  
{
    char* HEX_DIGITS = "0123456789abcdef";
    char* s =malloc(sizeof(char)*10); 

    if(value<0) 
    {
        value += ((int64_t)1<<32); 

    }
    int lim = 0;
    while(1){
        char d[2] = {HEX_DIGITS[value & 0xf],'\0'}; 
        char *temp = strdup(s);
        strcpy(s,d); 
        strcat(s,temp);

        value >>=4 ;
        lim++;
        if (value ==0 || lim == 8) 
        {
            break;
        }
    }
    char front[] = "0x";
    char* tmp2= strdup(s);
    strcpy(s,front);
    strcat(s,tmp2);

    return s;
}
int main(){ 
    int val_1 =40;
    printf("%d = %s\n",val_1,tohex(val_1));
    int val_2 = -1;
    printf("%d = %s" ,val_2,tohex(val_2));
    return 0;
}