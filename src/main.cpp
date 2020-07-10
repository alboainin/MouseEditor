#include <stdio.h>
#include <stdlib.h>
#include <memory>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

#include "state.h"

int main(int argc, char *argv[])
{
	std::vector<spdlog::sink_ptr> log_sinks;
	log_sinks.push_back(
		std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
	log_sinks.push_back(
		std::make_shared<spdlog::sinks::basic_file_sink_mt>("logfile"));
	auto combined_logger = std::make_shared<spdlog::logger>(
		"log", std::begin(log_sinks), std::end(log_sinks));
	spdlog::register_logger(combined_logger);
	spdlog::set_default_logger(combined_logger);

	std::unique_ptr<app_state> state(new app_state());
	state->argc = argc;
	state->argv = argv;

	spdlog::info("Hello, World!\nArgument count: {}", state->argc);

	return 0;
}
