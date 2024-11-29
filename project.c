#include <stdio.h>

int main (){

    int opsi;

    do
    {
        
    printf("1. option\n");
    printf("2. option\n");
    printf("3. option\n");
    printf("4. option\n");
    printf("5. exit\n");
    printf("Pilih Option 1 - 5 = ");
    scanf("%d", &opsi);

    switch (opsi)
    {
    case 1:
    printf("ini opsi satu");
        break;
    case 2:
    printf("ini opsi dua");
        break;
    case 3:
    printf("ini opsi tiga");
        break;
    case 4:
    printf("ini opsi empat");
        break;
    case 5:
    printf("Bye");
        break;
    default:
    printf("opsi tidak valid");
        break;
    }

    } while (opsi != 5);
    
}