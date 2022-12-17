#include <stdio.h>

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
    outputFile = fopen("output.txt", "w");

    int n, item, sum = 0;
    fscanf(inputFile, "%d", &n);

    while (n--)
    {
        fscanf(inputFile, "%d", &item);
        printf("%d ", item);
        sum += item;
    }
    fprintf(outputFile, "%d\n", sum);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}