/* Parking Management project */
#include<stdio.h>  
#include<stdlib.h>
#include<conio.h>
int menu();
void Bus();
void cycle();
void rickshaw();
void remve();
void showdetail();
int nor,nob,noc,amount=0,count=0; /* variables used for calculation */
void main()
{
    while(1)
    {
        system("cls");
        fflush(stdin);
        /* Representation of menu */
        switch(menu())
        {
            case 1:
                Bus();
                break;
                getch();
            case 2:
                cycle();
                break;
                getch();
            case 3:
                rickshaw();
                break;
                getch();
            case 4:
                remve();
                break;
                getch();
            case 5:
                showdetail();
                break;
                getch();
            case 6:
                printf("Thank you for using the service");
                exit(0);
                getch();
            default:
                printf("Invalid choice");
        }
    }
    getch();
}
int menu()
{
    int ch;
    /* No. of entries */
    printf("\n1. Enter bus");
    printf("\n2. Enter cycle");
    printf("\n3. Enter rickshaw");
    printf("\n4. Remove detail");
    printf("\n5. Show status");
    printf("\n6. Exit");
    printf("\nEnter your choice:\n");
    scanf("%d",&ch);
    return(ch);
}
/*function to remove data*/
void remve()
{
    nob=0;
    nor=0;
    noc=0;
    getch();
}
/* Calculation for Rickshaw entries */
void rickshaw()
{
    printf("\nEntries succesfull");
    nor++;
    amount=amount+50;
    count++;
    getch();
}
/* Calculation for cycle entries */
void cycle()
{
    printf("\nEntries succesfull");
    noc++;
    amount=amount+20;
    count++;
    getch();
}
/* Calculation for bus entries */
void Bus()
{
    printf("\nEntries succesfull");
    nob++;
    amount=amount+100;
    count++;
    getch();
}
/* function to print the details */
void showdetail()
{
    printf("\nNo. of bus:%d",nob);
    printf("\nNo. of cycle:%d",noc);
    printf("\nNo. of rickshaw:%d",nor);
    printf("\nTotal no. of vehicle:%d",count);
    printf("\nTotal  amount =RS%d",amount);
    getch();
}
