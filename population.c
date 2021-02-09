#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start <= 8);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while ( end < start);

    // TODO: Calculate number of years until we reach threshold
    double population = (double)start;
    int years = -1;

    do
    {

        population = population + population / 3 - population / 4;
        population =  (int) population;
        years++;
    }
   while (population <= end);

    // TODO: Print number of years
    printf("Years: %i\n", years);

}