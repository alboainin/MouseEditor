#include "log.h"

void generate_time()
{
    time_t timer;
    char buffer[26];
    struct tm* time_info;
    FILE* filePtr;

   
    timer = time(NULL);
    time_info = localtime(&timer);

    strftime(buffer, 26, "%H:%M:%S", time_info);
    
    if (access("LOG.txt", F_OK) != -1){
        filePtr = fopen("LOG.txt", "a");
    }
    else{
        filePtr = fopen("LOG.txt", "w");
    }
    fprintf(filePtr,"%s\n", buffer);
    fclose(filePtr);
}


void delay(int num_sec)
{
    int milli_sec = 1000 * num_sec;

    clock_t start_time = clock();

    while(clock() < start_time + milli_sec);
}

void log_init(int user_time)
{
    int time = 0;
    while(time < user_time)
    {
        generate_time();
        delay(1000);
        time++;
    }
}
