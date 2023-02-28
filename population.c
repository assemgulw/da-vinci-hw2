#include <cs50.h>
#include <stdio.h>

int findPopulataionForOneYear(start, end) {
    int result = start/3 - start/4;
    return start+result;
}

int main(void)
{
    // TODO: Prompt for start size
    int start = get_int("Enter start size of population: ");

    while (start < 9) {
        start = get_int("Enter start size of population: ");
    }

    int end = get_int("Enter end size of population: ");

    while (end < start) {
        end = get_int("Enter end size of population: ");
    }

    int population = start;
    int resultYear = 0;

    while (population <= end) {
        population += findPopulataionForOneYear(start, end);
        resultYear++;
    }

    printf("%i \n%i \n %i", start, end, resultYear);

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
