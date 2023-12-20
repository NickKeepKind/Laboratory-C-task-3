/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 20-12-2023  */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int ft_tax(int turnover);
void ft_processBusinessData();

int main()
{
    ft_processBusinessData();
    return 0;
}

// Function to process and display business data
void ft_processBusinessData()
{
    int turnovers[3][4]; // Table to store turnovers of 3 businesses for 4 years
    int i, j;
    int totalTax, yearTax;

    // Gather intel on our business past (hopefully not too dystopian)
    for (i = 0; i < 3; i++)
    {
        printf("Enter turnovers for business %d for years 2020 to 2023:\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &turnovers[i][j]);
        }
    }

    // Displaying taxes for each business and each year in a table format
    printf("\nTaxes for Each Business by Year\n");
    printf("--------------------------------\n");
    for (i = 0; i < 3; i++)
    {
        totalTax = 0;
        printf("Business %d\n", i + 1);
        printf("Year | Turnover | Tax\n");
        printf("---------------------\n");
        for (j = 0; j < 4; j++)
        {
            yearTax = ft_tax(turnovers[i][j]);
            totalTax += yearTax;
            printf("%d | %d Euro | %d Euro\n", 2020 + j, turnovers[i][j], yearTax);
        }
        printf("---------------------\n");
        printf("Total Tax: %d Euro\n", totalTax);
        printf("--------------------------------\n");
    }
}

// Tax calculation: like a game, but with real money
int ft_tax(int turnover)
{
    // Tax brackets: the real 'boss level' in adulting
    if (turnover <= 10000)
    {
        return 0; // Free pass! This is what victory feels like.
    }
    else if (turnover <= 20000)
    {
        return (turnover - 10000) * 0.15; // Starting to feel the heat!
    }
    else if (turnover <= 40000)
    {
        return (turnover - 10000) * 0.35; // Intense level of adulting.
    }
    else
    {
        return (turnover - 10000) * 0.45; // "Welcome to the big leagues!" - says the taxman.
    }
}
