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

    int t, n;
    fscanf(inputFile, "%d", &t);

    while (t--)
    {
        fscanf(inputFile, "%d", &n);
        if (n > 0)
        {
            while (n >= (-1*n))
            {
                fprintf(outputFile, "%d ", n);
                n--;
            }
        }
        else
        {
            while (n <= (-1*n))
            {
                fprintf(outputFile, "%d ", n);
                n++;
            }
        }
        fprintf(outputFile,"\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}