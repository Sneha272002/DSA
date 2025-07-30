#include <stdio.h>

int main() {
    for(int i=0; i<=5; i++ )//loop 0 to 5 = i
    {
        printf("\n");
        for(int j=0 ;j<0+i;j++)//loop 0 to 0+i = j
        {
            // print dots
            printf(".");
        }
    }

 
    return 0;
}
