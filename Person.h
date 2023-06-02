#pragma once
#include <string>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	Person(std::string first, std::string last, int arbitrary);
	~Person(); // Destructor
	std::string GetName();
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }

	// 6. Operators - Writing an Overload example
	// canonical operator signatures: https://en.cppreference.com/w/cpp/language/operators
	Person operator+(int i) const;

	//auto operator<=>(Person const& p) const { return arbitrarynumber <=> p.arbitrarynumber; }
	auto operator<=>(Person const& p) const default; // Compares all member variables of the objects. Above is specific variable being compared
};
Person operator+(int i, Person const& p);