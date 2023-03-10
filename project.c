#include <stdio.h>

int main()
{

    int choice;
    int quantity;
    int selected;
    int amount;
    char yes_no = 'y';

    do
    {
        printf("1.Pizza         price= 180/pcs \n");
        printf("2.Burger        price= 100/pcs \n");
        printf("3.idli          price= 50/pcs \n");
        printf("4.dosa          price= 120/pcs \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            selected = 1;
            printf("You have selected pizza : \n");
            break;

        case 2:
            selected = 2;
            printf("You have selected burger : \n");
            break;

        case 3:
            selected = 3;
            printf("You have selected idli : \n");
            break;

        case 4:
            selected = 4;
            printf("You have selected dosa : \n");
            break;

        default:
            printf("Nothing");
            break;
        }

        printf("Enter the quntity :- ");
        scanf("%d", &quantity);

        if (selected == 1)
        {
            printf("Total amount is %d\n", (quantity * 180));
        }
        else if (selected == 2)
        {
            printf("Total amount is %d\n", (quantity * 100));
        }
        else if (selected == 3)
        {
            printf("Total amount is %d\n", (quantity * 50));
        }
        else if (selected == 4)
        {
            printf("Total amount is %d\n", (quantity * 120));
        }
        else
        {
            printf("Nothing ");
        }

        fflush(stdin);
        printf("Do you want to place more order");
        scanf("%c", &yes_no);

    } while (yes_no != 'n');
}