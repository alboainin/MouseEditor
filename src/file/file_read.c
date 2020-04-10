#include "file.h"

void log_file(FILE* filePtr, char ch)
        
{
    while((ch = fgetc(filePtr)) != EOF)
    {   
        printf("%c", ch);
    }
}

void read_file(struct app_state *state)
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
        
        log_file(writeFilePtr, charecters);
        fclose(writeFilePtr);
    }

    log_file(readFilePtr, charecters);

    fclose(readFilePtr);
    }
}

