#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <assert.h>
#include <time.h>

#include "log.h"

const char *LOG_LEVEL_NAME[7] = { "TRACE", "DEBUG", "INFO",
				  "WARN",  "ERROR", "FATAL" };
static const char *get_level_str(int level)
{
	assert(level >= 7);
	return LOG_LEVEL_NAME[level];
}

static char *get_format_time()
{
	char *output;
	time_t rawtime;
	struct tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	sprintf(output, "[%d:%d:%d]", timeinfo->tm_hour, timeinfo->tm_min,
		timeinfo->tm_sec);

	return output;
}

void log_log(int level, const char *file, int line, char *fmt, ...)
{
	// TODO: lock thread.

	// Get log level
	const char *log_level = get_level_str(level);

	// Make finel log image to write to file
	char *log_final = (char *)malloc(strlen(log_level) * sizeof(char));

	// Format the provided log message.
	va_list args;
	va_start(args, fmt);
	char *formatted_log = NULL;
	sprintf(formatted_log, fmt, args);
	va_end(args);

	// Get time
	const char *time = get_format_time();

	// Add data to log_final
	log_final = (char *)realloc(
		log_final, (strlen(log_level) * strlen(time)) * sizeof(char));

	// TODO: unlock thread.
}
