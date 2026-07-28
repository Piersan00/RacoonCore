#include <iostream>
#include <RacoonCore/Log.h>

namespace
{
    std::string GetLogLevelString(RacoonCore::LogLevel level)
    {
        switch (level)
        {
        case RacoonCore::LogLevel::Debug:
            return "DEBUG";

        case RacoonCore::LogLevel::Info:
            return "INFO";

        case RacoonCore::LogLevel::Warning:
            return "WARNING";

        case RacoonCore::LogLevel::Error:
            return "ERROR";
        }

        return "UNKNOWN";
    }
}

namespace RacoonCore
{
    void Log(LogLevel level, const std::string& message)
    {
		std::cout << "[" << GetLogLevelString(level) << "] " << message << std::endl;
    }
}