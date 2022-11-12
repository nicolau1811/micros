#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux;
    // 0111 0100 0111 1111 -> 746F
    // 0101 0100 0101 0101 -> 5455
    // 0101 0100 0101 0101 -> 5455
    aux= 0x746F;

    printf("Aux= %i para decimal e 0x%x para hexadecimal\n", aux, aux);
    aux= aux & 0x5455;
    printf("Aux= %i para decimal e 0x%x para hexadecimal\n", aux, aux);
    printf("\nfeito por Nicolas Nunes 4324\n");
}

