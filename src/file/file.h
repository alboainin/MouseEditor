#ifndef _FILE_
#define _FILE_
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "state.h"


int GetFileSize(struct app_state *state);
void WriteFile(struct app_state *state);
void ReadFile(struct app_state *state);
void LogFile(FILE* filePtr, char ch);
#endif
