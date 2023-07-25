#include "MutantStack.hpp"

// #define MYTEST1
// #define MYTEST2
#define FIN
#define ITE

void test1(){
{
	myPutStr("MutantStack<char> a","",PINK201);
	MutantStack<char> a;
	myPutStr("a.size()","",PINK198);
	std::cout << a.size() << std::endl;
	myPutStr("a.empty()","",PINK198);
	std::cout << a.empty() << std::endl;
}
{
	myPutStr("std::list<char> a","",PINK201);
	std::list<char> a;
	myPutStr("a.size()","",PINK198);
	std::cout << a.size() << std::endl;
	myPutStr("a.empty()","",PINK198);
	std::cout << a.empty() << std::endl;
}
}

template <typename T, typename Container>
void test2(MutantStack<T, Container> b){
	myPutStr("b.size()","",PINK198);
	std::cout << b.size() << std::endl;
	myPutStr("b.push(5)","",PINK198);
	b.push(5);
	myPutStr("b.top()","",PINK198);
	std::cout << b.top() << std::endl;
	myPutStr("b.push(17)","",PINK198);
	b.push(17);
	myPutStr("b.top()","",PINK198);
	std::cout << b.top() << std::endl;
	myPutStr("b.size()","",PINK198);
	std::cout << b.size() << std::endl;
	myPutStr("b.pop()","",PINK198);
	b.pop();
	myPutStr("b.top()","",PINK198);
	std::cout << b.top() << std::endl;
	myPutStr("b.size()","",PINK198);
	std::cout << b.size() << std::endl;
	myPutStr("b.pop()","",PINK198);
	b.pop();
	myPutStr("b.size()","",PINK198);
	std::cout << b.size() << std::endl;
	std::cout << std::endl;
	
	myPutStr("b.push(3)","",PINK198);
	b.push(3);
	myPutStr("b.push(4)","",PINK198);
	b.push(4);
	myPutStr("b.push(6)","",PINK198);
	b.push(6);
	myPutStr("iterator it = b.begin();","",PINK198);
	typename MutantStack<T, Container>::iterator it = b.begin();
	std::cout << *it << std::endl;

	myPutStr("iterator it = b.end();","",PINK198);
	typename MutantStack<T, Container>::iterator ite = b.end();
	std::cout << *ite << std::endl;

	myPutStr("it++","",PINK198);
	it++;
	std::cout << *it << std::endl;
	myPutStr("++it","",PINK198);
	++it;
	std::cout << *it << std::endl;
	myPutStr("it--","",PINK198);
	it--;
	std::cout << *it << std::endl;
	myPutStr("--it","",PINK198);
	--it;
	std::cout << *it << std::endl;
	std::cout << std::endl;
	
	myPutStr("iterator ite = b.end();","",PINK198);
	for (; it != ite; ++it)
		std::cout << *it << std::endl;
	myPutStr("=end of test2;=====================","",PINK201);

}

void test3(){
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
// myPutStr("=end of test3;=====================","",PINK201);
}

void test4(MutantStack<int, std::list<int> > mstack){
	MutantStack<int, std::list<int> >::iterator it = mstack.begin();
	MutantStack<int, std::list<int> >::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::list<int> > s(mstack);
	// myPutStr("=end of test4;=====================","",PINK201);
}

void test5(MutantStack<int, std::list<int> > mstack){
	MutantStack<int, std::list<int> >::reverse_iterator it = mstack.rbegin();
	MutantStack<int, std::list<int> >::reverse_iterator ite = mstack.rend();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::list<int> > s(mstack);
	// myPutStr("=end of test5;=====================","",PINK201);
}

void test6(const MutantStack<int, std::list<int> > cpy){
	MutantStack<int, std::list<int> >::const_iterator it = cpy.begin();
	MutantStack<int, std::list<int> >::const_iterator ite = cpy.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::list<int> > s(cpy);
	// myPutStr("=end of test6;=====================","",PINK201);

}

void test7(const MutantStack<int, std::list<int> > cpy)
{
	MutantStack<int, std::list<int> >::const_reverse_iterator it = cpy.rbegin();
	MutantStack<int, std::list<int> >::const_reverse_iterator ite = cpy.rend();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::list<int> > s(cpy);
	// myPutStr("=end of test7;=====================","",PINK201);
}


int main(){
#ifdef MYTEST1
	myPutStr("=test1======================","",PINK183);
	test1();
	myPutStr("=end of MYTEST1;=====================","",PINK183);
#endif

#ifdef MYTEST2
	myPutStr("=test2	MutantStack<int> b;=====================","",PINK201);
	MutantStack<int> b;
	test2(b);
	myPutStr("=test2	MutantStack<int, std::list<int> > c;=====================","",PINK201);
	MutantStack<int, std::list<int> > c;
	test2(c);
	myPutStr("=end of MYTEST2;=====================","",PINK183);
#endif
#ifdef FIN
	myPutStr("=test3 example from subject PDF=====================","",PINK201);
	test3();
#endif 
#ifdef ITE
	MutantStack<int, std::list<int> > mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	myPutStr("=test4 std::list<int> =====================","",PINK201);
	test4(mstack);
	myPutStr("=test5 std::list<int> r====================","",PINK201);
	test5(mstack);

	const MutantStack<int, std::list<int> > cpy(mstack);
	myPutStr("=test6 const =====================","",PINK201);
	test6(cpy);
	myPutStr("=test7 const r=====================","",PINK201);
	test7(cpy);
#endif
}
