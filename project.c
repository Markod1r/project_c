#include <stdio.h>

float Rupiah(float a);
float Dollar(float b);
float Euro(float c);
float Pound(float d);

int main() {
    int choice;
    float rupiah, dollar, euro, pound;
            
    do {
    
        int choice;

        printf("======== WELCOME TO CURRENCY CONVERTER ========\n");
        printf("menu : \n");
        printf("1. Rupiah\n");
        printf("2. USD\n");
        printf("3. Euro\n");
        printf("4. Pound\n");
        printf("5. Exit\n");
        printf("Please select the menu : ");

        scanf("%d", &choice);

        switch (choice){
        case 1:
            printf("Masukan nominal :");
            scanf("%f", &rupiah);
            Rupiah(rupiah);
            break;
        case 2:
            printf("Masukan nominal :");
            scanf("%f", &dollar);
            Dollar(dollar);
            break;
        case 3:
            printf("Masukan nominal :");
            scanf("%f", &euro);
            Euro(euro);
            break;
        case 4:
            printf("Masukan nominal :");
            scanf("%f", &pound);
            Pound(pound);
            break;
        case 5:
            printf("==================== GOODBYE ====================\n");
            break;
        default:
            printf("======= menu invalid, please try again ========\n");
            break;
        }
    }while(choice != 5);

    return 0;
}

float Rupiah (float a){
    printf("%.2f Rupiah = %.2f USD \n",a , a / 15872.11);
    printf("%.2f Rupiah = %.2f Euro \n",a , a / 16746.58);
    printf("%.2f Rupiah = %.2f Pound \n",a , a / 20123.76);
}

float Dollar (float b){
    printf("%.2f USD = %.2f Rupiah \n",b , b * 15848.55);
    printf("%.2f USD = %.2f Euro \n",b , b * 0.95);
    printf("%.2f USD = %.2f Pound \n",b , b * 0.79);
}

float Euro (float c) {
    printf("%.2f Euro = %.2f Rupiah \n",c , c * 16746.58);
    printf("%.2f Euro = %.2f USD \n",c , c * 0.95);
    printf("%.2f Euro = %.2f Pound \n",c , c * 0.83);
}

float Pound (float d){
    printf("%.2f Pound = %.2f Rupiah \n",d , d * 20123.76);
    printf("%.2f Pound = %.2f USD \n",d , d * 0.79);
    printf("%.2f Pound = %.2f Euro \n",d , d * 0.83);
}