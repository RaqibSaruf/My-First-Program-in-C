#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void clrscr()
{
    system("cls||clear");
}


//User defined function declaration

int main_menu();
int products();
double payment();
int customer();

//User defined sub menus



//under products

int home_products();

//under home products

int soaps();
int face_wash();


//Under electronics
int electronics();
int chargers();
int headphones();

int add_products();
int remove_products();
int products_quantity();

//Under payment

double billing();


//under customer menu()

int customer_inf();
int edit_customer();




int main ()
{
    int input;

    printf("                              Hello ADMIN\n                          SHIRONAMHIN Super Shop\n================================================================================");
    printf("                              -Products\n                              -Payment/Billing\n                              -Customer information\n");
    printf("\n");
    printf(" Press 1 for Products \n Press 2 for Billing \n Press 3 for Customer information \n Press 0 to terminate program\n\t");
    scanf("\n%d", &input);
    if(input==0)
    {
        return 0;  //Program will be terminated if 0 is pressed
    }
    switch(input)
    {
    case 1:
        if(input==1)
        {
            clrscr();
            products();
        }
        break;
    case 2:
        if(input==2)
        {
            clrscr();
            payment();
        }
        break;
    case 3:
        if(input==3)
        {
            clrscr();
            customer();
        }
        break;

    default:
        printf("Enter a valid number");
        break;
    }
}


int products()

{
    int input;
    printf("\n                              1)Home products\n                              2)Electronics\n\n Press any key rather than 1 and 2 two return to main menu\n\t");

    scanf("%d", &input);

    switch (input)
    {
    case 1:
        if(input == 1){
            clrscr();
            home_products();
        }
        break;

    case 2:
        if(input == 2){
         clrscr();
            electronics();
        }
        break;

    default:
        {
            clrscr();
        main();
        }
        break;
    }

}

 int home_products()
{

     int input;
    printf("                              -Soaps\n                              -Face wash\n\n return to main menu by pressing 0 on the keyboard\n\t");
    scanf("%d", &input);
    if(input == 0)
    {
        clrscr();
        return main();
    }

    switch(input)
    {
    case 1:
        if(input==1){
         clrscr();
            soaps();
        }
        break;


    case 2:
        if(input==1){
            clrscr();
            face_wash();
        }
        break;

    default:
        {
        clrscr();
        home_products();
        }
        break;
    }


}

int soaps()
{
    int input;

    printf("Name           Product code           Price           Tax           Discount\n\nLux milk soap       100               25tk           0.0%         0%\n");
    printf("Lux alovera soap    101               25tk             0%             0%\n");
    printf("\n\nEnter 0 to return to main menu\n");
    scanf("%d", &input);
    if(input==0)
    {
        clrscr();
        return main();
    }

}

int face_wash()
{   clrscr();
    printf("Code yet to be written");

    return 0;
}

int electronics()
{
    int input;

    printf("                              1)Headphones\n                              2)Charger\n");
    printf("Press 1 for headphones\npress 2 for Charger\nEnter 0 to go to main menu\n");

    scanf("%d", &input);

    switch(input)
    {
    case 1:
        if(input==1)
        {
            clrscr();
            headphones();
        }
        break;
    case 2:
        if(input==2)
        {
            clrscr();
            chargers();
        }
        break;

    case 3:
        if(input==0)
        {
            clrscr();
            main();
        }
    default:
        {
            printf("Wrong choice. Try again");
            electronics();
        }
    }




}

int headphones()
{
    int input;

      printf("Name                    Product code         Price         Tax         Discount\n");
      printf("\n");
      printf("\nRemax Candy earphone    201                  990tk         0perc         0perc    ");
      printf("\nApple earpod            202                 2500tk         0perc         0perc    ");
      printf("\nMi basic                203                  750tk         0perc         0perc    ");
      printf("\nJBL Headphone           204                 1900tk         0perc         0perc    ");
      printf("\nFor main menu press 1\nFor billing press 2\n");

      scanf("%d", &input);

      if(input==1)
      {
          clrscr();
          main();
      }
      else if(input==2)
      {
          clrscr();
          payment();
      }
      else{
        printf("Wrong choice");
        clrscr();
        headphones();
      }

      return 0;
}

int chargers()
{
    return 0;
}

double payment()
{
    int  quantity, p_c, input, c_p;
    double cost, tax, discount, due;
    printf("\nEnter product code below:\n");
    scanf("%d", &p_c);

    printf("\nEnter quantity:");
    scanf("%d", &quantity);

    if(p_c == 100)
    {
        cost = quantity * 25;
    }

    else if(p_c == 201)
    {
        cost = quantity * 990;


    }
    else if(p_c==202)
    {
        cost = quantity * 2500;


    }
    else if(p_c==203)
    {
        cost = quantity * 750;


    }
    else if(p_c==204)
    {
        cost = quantity * 1900;


    }

    else
    {
        printf("Wrong Code. Try again\n");
        clrscr();
        payment();
    }

    printf("Enter customer payment in tk\n");
    scanf("%d", &c_p);

    due = c_p - cost;

    printf("\n============================");
    printf("\n");
    printf("Product code: %d\nCustomer paid: %d\nProduct cost = %lf (With tax included)\n", p_c,c_p, cost);
    printf("\nDue amount : %lf\n", due);
    printf("\n");
    printf("\n============================\n");

    printf("Press 0 to return to main menu");
    scanf("%d",&input);

    if(input == 0)
    {
        clrscr();
        main();
    }





    return 0;

}




int customer()
{
    printf("Code yet to be written");

    return main();
}









