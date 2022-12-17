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

    int n;
    fscanf(inputFile, "%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            fprintf(outputFile, " ");
        }
        for (int i = 0; i < n; i++)
        {
            fprintf(outputFile, "#");
        }
        fprintf(outputFile, "\n");
    }
    
    fprintf(outputFile, "\n");

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}