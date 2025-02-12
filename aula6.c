#include <stdio.h>

int main(){
    int v[5];
    float s = 0;
    int i;

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
        s += v[i];
    }

    printf("Resultado> %2.f\n", s/5);

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("Dados inseridos:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    } 
}