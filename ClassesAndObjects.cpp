#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include <format>
using std::format;

// Const Member Function example
std::string summary(std::string id, Person const& p)
{
	return format("{}: {} {}", p.GetName(), p.GetNumber());
}

int main()
{
	Person p1("John", "Smith", 123);
	{
		// Destructor example:
		// p2 will be initialised below, then destructed upon closing bracket on L11
		Person p2("Matt", "Jones", 456);
	}
	std::cout << "after innermost block" << '\n';

	// Inheritance
	Person p3("Joe", "Smith", 789);
	{
		Tweeter t1("Someone", "Else", 111, "@whoever");
		std::string name2 = t1.GetName();
	}

	// Member Functions
	Person p4("Kate", "Gregory", 123);
	std::string p1Summary = format("p1: {} {}", p1.GetName(), p1.GetNumber());
	//cout << p1Summary << '\n';
	p1.SetNumber(124);
	p1Summary = format("p1: {} {}", p1.GetName(), p1.GetNumber());
	//cout << p1Summary << '\n';


	// Const Member Function example
	Person p5("Moey", "Dw", 456);
	std::string p5Summary = summary("p5", p5);
	//cout << p5Summary << '\n';
	p5.SetNumber(789);
	p5Summary = summary("p5", p5);
	//cout << p5Summary << '\n';


	// 6. Operators - Writing an Overload example
	Person p6("Moey", "Dw", 456);
	std::string p6Summary = format("p6: {} {}", p6.GetName(), p6.GetNumber());
	//cout << p6Summary << '\n';

	Person p7 = p6 + 7;
	std::string p7Summary = format("p7: {} {}", p7.GetName(), p7.GetNumber());
	//cout << p7Summary << '\n';

	p6 = 4 + p7;
	std::string p7Summary = format("p7: {} {}", p7.GetName(), p7.GetNumber());
	//cout << p7Summary << '\n';

	Person someone("Someone", "Else", 456);
	std::string compare = "p6 is ";
	if (!(p1 < someone))
	{
		compare += "not ";
	}
	compare += "less than someone";
	//cout << compare << '\n';

	return 0;
}