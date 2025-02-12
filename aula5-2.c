#include <stdio.h>

int main(){

    for (int i = 0; i <= 20; i++)
    {
        if (i == 5)
        {
            continue; //faz ignorar a impresssão do 5
        }
        printf("%d\n", i);

        
    }

    printf("continue\n");

    for (int i = 0; i <= 20; i++)
    {
        printf("%d\n", i);
        
        if (i == 5)
        {
            break; 
        }
        
    }


    printf("break");

    return 0;
}