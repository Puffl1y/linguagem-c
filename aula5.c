#include <stdio.h>

int main(){
    int i=1;

    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    int k=1;
    do
    {
        printf("%d ", k);
        k++;
    } while (i <= 10);
    
    
    return 0;
}