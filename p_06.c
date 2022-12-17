#include <stdio.h>

int leap_year(int year)
{
    if (year % 400 == 0)
        return 1;

    if (year % 100 == 0)
        return 0;

    if (year % 4 == 0)
        return 1;

    return 0;
}

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Input File Not Found!\n");
        return 0;
    }
    outputFile = fopen("output.txt", "a");

    int n, year;

    while (fscanf(inputFile, "%d", &year) != EOF)
    {
        if (leap_year(year))
        {
            fprintf(outputFile, "%d-->YES\n", year);
        }
        else
        {
            fprintf(outputFile, "%d-->NO\n", year);
        }
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}