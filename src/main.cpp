#include <stdio.h>
#include <stdlib.h>
#include <memory>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

#include "config.h"
#include "state.h"

int main(int argc, char *argv[])
{
#if CONFIG_SWITCH_LOG_ENABLE
	std::vector<spdlog::sink_ptr> log_sinks;
#ifdef CONFIG_LOG_STDOUT
	log_sinks.push_back(
		std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
#endif
#ifdef CONFIG_LOG_OUTPUT_FILE
	log_sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>(
		CONFIG_LOG_OUTPUT_FILE));
#endif
	auto combined_logger = std::make_shared<spdlog::logger>(
		"log", std::begin(log_sinks), std::end(log_sinks));
	spdlog::register_logger(combined_logger);
	spdlog::set_default_logger(combined_logger);
#endif

	std::unique_ptr<app_state> state(new app_state());
	state->argc = argc;
	state->argv = argv;

	spdlog::info("Hello, World!\nArgument count: {}", state->argc);

	return 0;
}
