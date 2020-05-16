#ifndef _LOG_ERROR_
#define _LOG_ERROR_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#ifdef _Win32
#include "misc/win/win_unistd.h"
#else
#include <unistd.h>
#endif

#include "state.h"
#include "../file/file.h"
#include "../vendor/log/log.h"

void log_init();
void log_terminate();
#endif
