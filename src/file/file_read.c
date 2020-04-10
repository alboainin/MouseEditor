#include "file.h"

void logFile(FILE* filePtr, char ch)
        
{
    while((ch = fgetc(filePtr)) != EOF)
    {   
        printf("%c", ch);
    }
}

void ReadFile(struct app_state *state)
{
    char charecters;
    
    if (state->argc < 2){
  
    }
    else{
    FILE* readFilePtr;
    readFilePtr = fopen(state->argv[1],"r");

    if (readFilePtr == NULL){
        FILE* writeFilePtr;
        writeFilePtr = fopen(state->argv[1],"w");
        
        logFile(writeFilePtr, charecters);
        fclose(writeFilePtr);
    }

    logFile(readFilePtr, charecters);

    fclose(readFilePtr);
    }
}

