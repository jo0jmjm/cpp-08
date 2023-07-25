#ifndef EASY_TPP
# define EASY_TPP

template<typename T>
typename T::iterator easyfind(T &t, const int &n){
	typename T::iterator itr = std::find(t.begin(), t.end(), n);
	if (itr == t.end())
		throw std::exception();
	return itr;
}

template<typename T>
typename T::const_iterator easyfind(const T &t, const int &n){
	typename T::const_iterator itr = std::find(t.begin(), t.end(), n);
	if (itr == t.end())
		throw std::exception();
	return itr;
}

#endif