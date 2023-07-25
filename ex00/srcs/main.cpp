#include "easyfind.hpp"

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}

template<typename T>
bool test(const std::string &testName, T &t){
	myPutStr(testName,"",PINK201);
	typename T::iterator p;
	for (size_t i=0; i<t.size(); ++i){
		p= easyfind(t, i);
		std::cout << *p << std::endl;
	}
	return true;
}
template<typename T>
bool test2(const std::string &testName, T &t){
	myPutStr(testName,"",PINK201);
	const T tC = t;
	typename T::const_iterator p;
	for (size_t i=0; i<t.size(); ++i){
		p= easyfind(tC, i);
		std::cout << *p << std::endl;
	}
	return true;
}

int main(){
	int num[] = {0,1,2,3,4,5};
	std::vector<int> intVector(num, std::end(num));

	//test std::
	myPutStr("std::find() called","",PINK180);
	std::vector<int>::iterator p;
	for (size_t i=0; i<intVector.size(); ++i){
		p = std::find(intVector.begin(), intVector.end(), i);
		std::cout << *p << std::endl;
	}

	// container<int>
	std::list<int> intList(num, std::end(num));
	std::deque<int> intDeque(num, std::end(num));
	std::set<int> intSet(num, std::end(num));
	std::multiset<int> intMulitSet(num, std::end(num));

	myPutStr("====================","",PINK198);
	myPutStr("container<int> test","",PINK198);
	myPutStr("====================","",PINK198);
	test("int Vector",intVector);
	test("int List",intList);
	test("int Deque",intDeque);
	test("int Set",intSet);
	test("int MultiSet",intMulitSet);

	// vector<T>
	std::vector<char> charVector(num, std::end(num));
	float num2[] = {0.0f,1,2,3,4,5.0f};
	std::vector<float> floatVector(num2, std::end(num2));
	std::vector<double> doubleVector(num2, std::end(num2));

	myPutStr("====================","",PINK198);
	myPutStr("vecter<T> test","",PINK198);
	myPutStr("====================","",PINK198);
	test("char Vecotr",charVector);
	test("float Vector",floatVector);
	test("double Vector",doubleVector);

	// const
	myPutStr("====================","",PINK198);
	myPutStr("const container<int> test","",PINK198);
	myPutStr("====================","",PINK198);
	test2("int Vector",intVector);
	test2("int List",intList);
	test2("int Deque",intDeque);
	test2("int Set",intSet);
	test2("int MultiSet",intMulitSet);

	test2("char Vecotr",charVector);
	test2("float Vector",floatVector);
	test2("double Vector",doubleVector);

	// case of NG
	myPutStr(""," case of NG",PINK201);
	try{
		p= easyfind(intVector, -1);
	}catch (std::exception &e){
		myPutStr("Error","",PINK183);
	}
	try{
		p= easyfind(intVector,6);
	}catch (std::exception &e){
		myPutStr("Error","",PINK183);
	}
}
