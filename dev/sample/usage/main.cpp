#include <iostream>
#include <string>
#include <fmt/format.h>
#include <fmt/ostream.h>
#include <fmt/time.h>

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

	std::string date = fmt::format("The date is {}.", Date(2016, 8, 2));
	std::cout << date << std::endl;

	std::time_t t = std::time(nullptr);
	date = fmt::format("The local date is {:%Y-%m-%d}.", *std::localtime(&t));
	std::cout << date << std::endl;

	return 0;
}
