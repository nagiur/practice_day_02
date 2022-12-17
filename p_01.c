#include<stdio.h>

int main(){
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Input File Not Found!\n");
        return 0;
    }
    outputFile = fopen("output.txt", "w");

    while (1)
    {
        char ch = fgetc(inputFile);
        if(ch == EOF){
            break;
        }
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}