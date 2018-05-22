#include <stdio.h>
#include <stdlib.h>
int main()
{
    char inicial[50];
    int desp;
    printf("Escribe una cadena de caracteres \n");
    scanf("%s", &inicial);
    printf("Ingrese cuanto se va desplazar\n");
    scanf("%d", &desp);
    for (int i = 0; i < 49; i++)
    {
        if ((inicial[i] > 96) & (inicial[i] < 123))
        {
            inicial[i] =+ desp;
            printf("%s",inicial[i]);
        }
    }
    return 0;

}