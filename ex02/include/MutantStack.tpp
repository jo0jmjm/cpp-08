


template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &other){
	if (this == &other)
		return *this;
	this->c = other.c;
	return *this;
}

//==================
//constructer
//==================

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container> &other){
	this->c = other.c;
}
