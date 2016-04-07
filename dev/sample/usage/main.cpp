#include <iostream>
#include <string>
#include "cppformat/format.h"

class Date
{
	public:

		Date(int year, int month, int day)
		:	year_(year)
		,	month_(month)
		,	day_(day)
		{

		}

		friend std::ostream &operator<<(std::ostream &os, const Date &d)
		{
			return os << d.year_ << '-' << d.month_ << '-' << d.day_;
		}

	private:

		int year_, month_, day_;
};

int main(int, char* [])
{
	fmt::print("Hello, {}!\n", "world");

	std::string abracadabra = fmt::format("{0}{1}{0}", "abra", "cad");
	std::cout << abracadabra << std::endl;

	fmt::MemoryWriter w;
	w << 42; // replaces itoa(42, buffer, 10)
	w << fmt::hex(42); // replaces itoa(42, buffer, 16)
	std::cout << w.str() << std::endl;

	std::string date = fmt::format("The date is {}", Date(2016, 4, 7));
	std::cout << date << std::endl;
}