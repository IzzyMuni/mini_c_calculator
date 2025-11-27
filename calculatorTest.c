/*

    Creator:                       Ishmael. V
    Date:                          11/27/25
    Description:                   Simulates a MINI_CALCULATOR with only FOUR_OPERATORS.
                                   Utilize functions.
                                   Error Handling.


*/

#include <stdio.h>

/*----FUNCTION PROTOTPES-----*/
void menu();

float firstNumber();
float secondNumber();

char operatorIn();
float operation(float num1, float num2, char symbol);

void output(float num1, float num2, char symbol, float result);

char askContinue();


int main()
{
    float num1, num2;
    float result;
    char symbol;

    char option;

    do
    {
        menu();

        num1 = firstNumber();
        num2 = secondNumber();
        symbol = operatorIn();
        result = operation(num1, num2, symbol);
        output(num1, num2, symbol, result);

        //printf("Continue (y/n): ");
        // scanf(" %c", &option);

        option = askContinue();

    } while (option == 'y' || option == 'Y');

    printf("\nExiting...\nGoodbye!\n");



    return 0;
}

/*----FUNCTION DEFINITION-----*/

void menu()
{
    printf("*-----------------------------------------*\n");
    printf("*          MINI_C_CALCULATOR              *\n");
    printf("*-----------------------------------------*\n");
}




float firstNumber()
{

    char buffer[100];
    float num1;
    char extra;



    while (1)
    {
        printf("*                                         *\n");
        printf("*  Enter first integer:_____________");

        // int c;
        //while ((c = getchar()) != '\n' && c != EOF){}

        if (!fgets(buffer, sizeof(buffer), stdin))
        {
            printf("\nInput Error,\n");
            return 0;
        }

        // fgets(buffer, sizeof(buffer), stdin);

        if (sscanf(buffer, " %f %c", &num1, &extra) == 1)
            return num1;

            printf("*  Invalid Input! Try again.              *\n");
    }




    //printf("*                                         *\n");
    //printf("*  Enter first integer:_____________");
    //scanf("%f", &num1);

    //return num1;
}


float secondNumber()
{

    char buffer[100];
    float num2;
    char extra;
    while (1)
    {
        printf("*                                         *\n");
        printf("*  Enter second integer:____________");

        // int c;
        // while ((c = getchar()) != '\n' && c != EOF){}

        fgets(buffer, sizeof(buffer), stdin);

        if (sscanf(buffer, "%f %c", &num2, &extra) == 1)
            return num2;

        printf("*  Invalid Input! Try again.              *\n");
    }



    //printf("*                                         *\n");
    // printf("*  Enter second integer:____________");
    // scanf("%f", &num2);

    return num2;
}

char operatorIn()
{
    char buffer[100];
    char symbol;
    char extra;

    while (1)
    {
        printf("*                                         *\n");
        printf("*  Select an operator (+ - * /):____");

        fgets(buffer, sizeof(buffer), stdin);

        if (sscanf(buffer, "%c %c", &symbol, &extra) == 1)
        {
            if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
                return symbol;

            printf("*  Invalid operator! Try again.           *\n");
        }
        else
        {
            printf("*  Invalid Input! Try again.              *\n");
        }
    }



    // printf("*                                         *\n");
    //printf("*  Select an operator (+ - * /):____");
    //scanf(" %c", &symbol);

    return symbol;

}

float operation(float num1, float num2, char symbol)
{

    if (symbol == '+')
        return num1 + num2;
    else if (symbol == '-')
        return num1 - num2;
    else if (symbol == '*')
        return num1 * num2;
    else if (symbol == '/')
        return num1 / num2;
    else
    {
        printf("Operator not recognize!\nPlease select displayed operator!\n");
        return 0;
    }



}



void output(float num1, float num2, char symbol, float result)
{
    printf("*                                         *\n");
    printf("* --------------------------------------- *\n");
    printf("*  Integer One:                     %.1f   *\n", num1);
    printf("*  Integer Two:                     %.1f   *\n", num2);
    printf("*  Operator:                        %c     *\n", symbol);
    printf("*  Output:                          %.1f   *\n", result);
    printf("*                                         *\n");
    printf("* --------------------------------------- *\n");



    printf("*  Yours_Truly:             Coconaut_675  *\n");
    printf("*-----------------------------------------*\n\n\n\n");

    //printf("Do you want to go again (y/n)? ");
    //scanf("%c", &option)
}


char askContinue()
{
    char line[100];
    char ch, extra;

    while (1)
    {
        printf("Continue (y/n): ");
        if (!fgets(line, sizeof(line), stdin))
            return 'n';

        if (sscanf(line, " %c %c", &ch, &extra) == 1 && (ch == 'y' || ch == 'Y' || ch == 'n' || ch == 'N'))
        {
            return ch;
        }

        printf("*  Invalid Input! Try again.              *\n");
    }
}





