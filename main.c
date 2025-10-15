#include <stdio.h>
#include "matrix.h"


void main_menu()
{
    printf("=========================================\n");
    printf("  __  __       _            __  __\n");
    printf(" |  \\/  | __ _| |_          \\ \\/ /\n");
    printf(" | |\\/| |/ _` | __|  _____   \\  / \n");
    printf(" | |  | | (_| | |_  |_____|  /  \\ \n");
    printf(" |_|  |_|\\__,_|\\__|         /_/\\_\\\n");
    printf("=========================================\n");
    printf("1. Add matrix\n");
    printf("2. View matrix\n");
    printf("3. Matrix arithmetic\n");
    printf("4. Matrix properties\n");
    printf("5. Exit\n");
    printf("=========================================\n");

}

int main(void)
{
    int choice;

    do
    {
        main_menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addMatrix();
            break;
        case 2:
            viewMatrix();
            break;
        case 3:
            matArithmetic();
            break;
        case 4:
            //matProperties();
            break;
        case 5:
            printf("Byee..");
            break;
        default:
            printf("Invalid input! please input this range value (1-5).");
            break;
        }
    }while (choice != 5);




    return 0;
}