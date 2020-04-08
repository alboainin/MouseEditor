#include "file.h"

void logFile(FILE* filePtr, char ch)
        
{
    while((ch = fgetc(filePtr)) != EOF)
    {   
        printf("%c", ch);
    }
}

void ReadFile(int argumentC,char *argumentV[])
{
    char charecters;
    
    if (argumentC < 2)
    {
  
    }
    else{
    FILE* readFilePtr;
    readFilePtr = fopen(argumentV[1],"r");

    if (readFilePtr == NULL)
    {
        FILE* writeFilePtr;
        writeFilePtr = fopen(argumentV[1],"w");
        
        logFile(writeFilePtr, charecters);
        fclose(writeFilePtr);
    }

    logFile(readFilePtr, charecters);

    fclose(readFilePtr);
    }
}

