#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define END "\033[0m"

int main(int ac, char **av)
{
    int oper;
    if (ac != 4)
    {
        printf("%sUsage: %s <num1> <operator> <num2>\n%s",RED, av[0], END);
        return 1;
    }

    double num1 = atoi(av[1]);
    double num2 = atoi(av[3]);
    char operator = *av[2];

	printf("%s WELCOME TO MY SMALL CALCULATOR PROGRAM ⚙️ %s\n", YELLOW, END);
    if (operator == '+')
    {
        oper = num1 + num2;
    }
    else if (operator == '-')
    {
        oper = num1 - num2;
    }
    else if (operator == '*')
    {
        oper = num1 * num2;
    }
    else if (operator == '/')
    {
        if (num2 == 0)
        {
            printf("%sError: Cannot divide by zero ‼️\n%s", RED, END);
        }
        else
        {
            oper = num1 / num2;
        }
    }
    else
    {
        printf("%sError: Invalid operator\n%s", RED, END);
    }

    printf("%sResult : %d ✅ %s\n",GREEN, oper, END);
    return 0;
}
