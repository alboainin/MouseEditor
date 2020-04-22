#ifndef _LOG_ERROR_
#define _LOG_ERROR_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include "state.h"
#include "../file/file.h"
void generate_time();
void delay(int num_sec);
void log_init(int user_time);
#endif
