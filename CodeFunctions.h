#pragma once
enum class Error
{
	Success = 0,
	TooSmall,
	TooLarge
};

Error testnum(int num);

Error process1(int num, int& answer);
Error process2(int num, int& answer);
Error process3(int num, int& answer);