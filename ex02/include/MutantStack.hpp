#ifndef MUTANT_HPP
# define MUTANT_HPP

# include <iostream>
# include <vector>
# include <stack>
# include <iterator>
# include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>{
	private:
		//継承　protected:    container_type c;
	public:
		// ↓しなくてもdequeを継承しているから--itrが動いてる？
		// typedef std::bidirectional_iterator_tag iterator_category;

		MutantStack(){};
		~MutantStack(){};
		MutantStack(const MutantStack &other);
		MutantStack &operator=(const MutantStack<T, Container> &other);
		
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator begin(){ return this->c.begin(); };
		iterator end(){ return this->c.end(); };

		const_iterator begin()const{ return this->c.begin(); };
		const_iterator end() const { return this->c.end(); };

		reverse_iterator rbegin(){ return this->c.rbegin(); };
		const_reverse_iterator rbegin() const { return this->c.rbegin(); };

		reverse_iterator rend(){ return this->c.rend(); };
		const_reverse_iterator rend()const{ return this->c.rend(); };

};

// class statck メンバ関数
// (constructor)	コンストラクタ	
// (destructor)	デストラクタ	
// operator=	代入	
// top	次の要素へアクセスする	
// empty	要素が空であるかを確認する	
// size	要素数を取得する	
// push	要素を追加する	
// pop	次の要素を削除する	

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

# include "MutantStack.tpp"
#endif