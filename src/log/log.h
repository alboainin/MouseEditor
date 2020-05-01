#ifndef _LOG_ERROR_
#define _LOG_ERROR_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include "state.h"
#include "../file/file.h"
#include "../vendor/log/log.h"

void log_init(FILE* Iptr);
void log_close(FILE* Cptr);
#endif
