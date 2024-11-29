#include <stdio.h>

int selectMenu();
float Rupiah(float a);
float Dollar(float b);
void Euro();

int main() {
    int choice;
    float rupiah,
            dollar;

    do {
    
        choice = selectMenu();

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
            printf("sss");
            break;
        case 4:
            printf("Test 4\n");
            break;
        case 5:
            printf("===== GOODBYE =====\n");
            break;
        default:
            printf("menu invalid\n");
            break;
        }
    }while(choice != 5);

    return 0;
}

int selectMenu() {
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

    return choice;

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

