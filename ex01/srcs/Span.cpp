#include "Span.hpp"

const char *Span::SpanException::what() const throw(){
	return "An exception occurred in Span class.";
}

Span::~Span(){};
Span::Span(const Span &other){ *this = other;};

Span &Span::operator=(const Span &other){
	if (this != &other){
		this->N = other.N;
	}
	return *this;
}

Span::Span(unsigned int num){
	N = num;
#ifdef DEB
	myPutStr("Span(unsigned int N) called", "", PINK180);
	myPutStr("v.size()\t:", v.size(), PINK183);
#endif
}

void Span::addNumber(const double &num){
	if (v.size() < N)
		v.push_back(num);
	else
		throw Span::SpanException();
#ifdef DEB
	myPutStr("addNumber() called", "", PINK180);
	myPutStr("v->back():", static_cast<int>(v.back()), PINK183);
#endif
}

double Span::shortestSpan(){
#ifdef DEB
	myPutStr("shortestSpan() called", "", PINK180);
#endif
	if (v.size() < 2)
		throw Span::SpanException();
	std::sort(v.begin(), v.end());
	double min = __DBL_MAX__;
	std::vector<double>::iterator itr = v.begin();
	for(; itr != v.end(); itr++){
		double dif = *itr - *(itr + 1);
		dif = std::abs(dif);
		if (min > dif)
			min = dif;
	}
	return min;
}

double Span::longestSpan(){
#ifdef DEB
	myPutStr("longestSpan() called", "", PINK180);
#endif
	if (v.size() < 2)
		throw Span::SpanException();
	std::sort(v.begin(), v.end());
	double max = std::abs(v.front() - v.back());
	return max;
}

void Span::assignRandamValueAllElements(){
#ifdef DEB
	myPutStr("assignRandamValueAllElements() called", "", PINK180);
#endif
	v.resize(N);
	std::vector<double>::iterator itr = v.begin();
	srand(time(NULL));
	for (;itr != v.end(); ++itr)
		*itr = rand();
}