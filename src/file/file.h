#ifndef _FILE_
#define _FILE_
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "state.h"
#include "../vendor/log/log.h"

int get_file_size(struct app_state *state);
void write_file(struct app_state *state);
void read_file(struct app_state *state);
void access_file(FILE *filePtr, char ch);

#endif
