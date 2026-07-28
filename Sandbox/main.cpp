#include <RacoonCore/Core.h>
#include <RacoonCore/Log.h>

int main()
{
    RacoonCore::Initialize();

    RacoonCore::Log(RacoonCore::LogLevel::Debug, "Debug test");
    RacoonCore::Log(RacoonCore::LogLevel::Info, "Info test");
    RacoonCore::Log(RacoonCore::LogLevel::Warning, "Warning test");
    RacoonCore::Log(RacoonCore::LogLevel::Error, "Error test");

    return 0;
}