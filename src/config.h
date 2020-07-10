#ifndef CONFIG_H
#define CONFIG_H

/* configuration switches for enabling/disabling of features */

#define CONFIG_SWITCH_LOG_ENABLE true
#define CONFIG_SWITCH_LOG_STDOUT false
#define CONFIG_SWITCH_LOG_FILE false

/* configuration logic ahead */

/* config logic: !CONFIG_LOG_STDOUT & !CONFIG_LOG_STDOUT */
#if CONFIG_SWITCH_LOG_ENABLE
#if !CONFIG_SWITCH_LOG_STDOUT && !CONFIG_SWITCH_LOG_FILE
#warning config log : stdout and file output are disabled, but log is enabled
#endif
#endif

/* config logic: CONFIG_LOG_STDOUT */
#if CONFIG_SWITCH_LOG_ENABLE && CONFIG_SWITCH_LOG_STDOUT
#ifndef NDEBUG // if not debug is not defined. (O_o)
#define CONFIG_LOG_STDOUT
#endif
#endif

/* config logic: CONFIG_LOG_FILE */
#if CONFIG_SWITCH_LOG_ENABLE && CONFIG_SWITCH_LOG_FILE
#ifdef NDEBUG // if not debug defined
#if defined(__unix__)
#define CONFIG_LOG_OUTPUT_FILE "/var/log/mouse"
#elif defined(_WIN32) || defined(_WIN64)
#define CONFIG_LOG_OUTPUT_FILE "%TMP%/mouse/log.txt"
#endif
#elif !defined(NDEBUG) // if not debug is not defined
#define CONFIG_LOG_OUTPUT_FILE "logfile.txt"
#endif
#endif

#endif
