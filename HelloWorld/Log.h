#pragma once
void Message(const int message);
void Log(const char* message);

void Message(const int message)
{
	std::cout << message << std::endl;
}

void Log(const char* log)
{
	std::cout << log << std::endl;
}