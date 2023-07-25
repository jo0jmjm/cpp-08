#include "Span.hpp"

#define MYTEST

bool test(unsigned int N){
	myPutStr("test called.\tN=",N,PINK201); 
	myPutStr("Span sp = Span(N)","",PINK198); 
	Span sp = Span(N);
	myPutStr("assignRandamValueAllElements()","",PINK198); 
	sp.assignRandamValueAllElements();
	myPutStr("", sp.shortestSpan(), PINK183);
	myPutStr("static_cast<int>(shortestSpan()):", static_cast<int>(sp.shortestSpan()), PINK183);
	myPutStr("", sp.longestSpan(), PINK183);
	myPutStr("static_cast<int>(longestSpan()) :", static_cast<int>(sp.longestSpan()), PINK183);
	return true;
}

int main()
{
	myPutStr("=================","",PINK201); 
	myPutStr("case of subject","",PINK201); 
	myPutStr("=================","",PINK201); 
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
#ifdef MYTEST
	myPutStr("=================","",PINK201); 
	myPutStr("normal case","",PINK201); 
	myPutStr("=================","",PINK201); 
	myPutStr("100","",PINK201); 
	myPutStr("=================","",PINK201); 
	test(100);
	myPutStr("=================","",PINK201); 
	myPutStr("UINT16_MAX","",PINK201); 
	myPutStr("=================","",PINK201); 
	test(UINT16_MAX);
	// test(UINT32_MAX);
	// test(-1);
	// test(ULLONG_MAX);
{
	myPutStr("=================","",PINK201); 
	myPutStr("N = 1;","",PINK201); 
	myPutStr("=================","",PINK201); 
	Span b = Span(1);
	try{
		myPutStr("addNumber() add2","",PINK198); 
		b.addNumber(1);
		b.addNumber(1);
	}catch (std::exception &e){
		std::cerr << e.what() << '\n';
	}

	try{
		myPutStr("shortestSpan() N < 2 ","",PINK198); 
		std::cout << b.shortestSpan() << std::endl;
	}catch (std::exception &e){
		std::cerr << e.what() << '\n';
	}

	try{
		myPutStr("longestSpan() N < 2 ","",PINK198); 
		std::cout << b.longestSpan() << std::endl;
	}catch (std::exception &e){
		std::cerr << e.what() << '\n';
	}
}
#endif
return 0;
}

