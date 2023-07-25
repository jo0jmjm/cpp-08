#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

#define DEB

class Span{
	private:
		unsigned int N;
		std::vector<double> v;
		//N is an unsigned int variable and will be the only parameter passed to the constructor.
		Span();
	public:
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
		
		Span(unsigned int num);

		void addNumber(const double &num);
		double shortestSpan();
		double longestSpan();

		void assignRandamValueAllElements();

		class SpanException: public std::exception{
			public:
				const char *what() const throw();
		};

};

const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

const std::string PINK136 = "\033[38;5;136m";
const std::string PINK180 = "\033[38;5;180m";
const std::string PINK190 = "\033[38;5;190m";
const std::string PINK208 = "\033[38;5;208m";

template<typename T, typename U>
void myPutStr(T s1, U s2, const std::string &color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}
#endif