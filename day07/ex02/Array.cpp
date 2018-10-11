#include "Array.hpp"

template <typename T>
Array<T>::Array(void): _len(0), _arr(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n): _len(n)
{
	if ( _len == 0 )
		_arr = NULL;
	else
	{
		_arr = new T[n];
		for (unsigned int i = 0; i < _len; i++)
			_arr[i] = 0;
	}
}

template <typename T>
Array<T>::Array(Array<T> const & arr)
{
	*this = arr;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] _arr;
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return _len;
};

template <typename T>
Array<T> &	Array<T>::operator=(Array<T> const & array)
{
	if (this != &array)
	{
		delete [] this->_array;
		this->_len = array._len;
		if (array._arr != NULL)
		{
			this->_arr = new T[this->_len];
			for (unsigned int i = 0; i < array._len; i++)
				this->_arr[i] = array._arr[i];
		}
		else
			this->_arr = NULL;	
	}
	return *this;
}

template <typename T>
T &			Array<T>::operator[](unsigned int i)
{
	if (i >= _len)
		throw (std::out_of_range("Warning: '[ ]' operator is out of range!"));
	else
		return (_arr[i]);
}

