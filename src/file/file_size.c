#include "file.h"

int get_file_size(struct app_state *state) {
    FILE* GfilePtr;
    char charecter_count;
    int count = 0;
    
    if(state->argc < 2) {
        //return error
    }
    
    else{
    GfilePtr = fopen(state->argv[1], "r");

    while((charecter_count=fgetc(GfilePtr))!=EOF) {
        count++;
    }
    
    fclose(GfilePtr);
    }

    count = count - 2;
    return count;
}


