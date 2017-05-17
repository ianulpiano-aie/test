#pragma once
#include <assert.h>

template<typename T>
class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(unsigned int a_capacity);
	~DynamicArray();

	void			PushBack(const T a_value);
	void			Insert(const T a_value, unsigned int a_index);
	void			Remove(unsigned int a_index);
	unsigned int	Find(const T a_value) const;
	void			Resize(unsigned int a_newCapacity);
private:
	T* data;
	unsigned int capacity;
	unsigned int size;
};

template<typename T>
inline DynamicArray<T>::DynamicArray()
{
	//create a new array of Ts
	data = new T[ 10 ];
	capacity = 10;
	size = 0;
}

template<typename T>
inline DynamicArray<T>::DynamicArray( unsigned int a_capacity )
{
	data = new T[a_capacity];
	capacity = a_capacity;
	size = 0;
}

template<typename T>
inline DynamicArray<T>::~DynamicArray()
{
	delete[] data;
}

template<typename T>
inline void DynamicArray<T>::PushBack(const T a_value)
{




}

template<typename T>
inline void DynamicArray<T>::Insert(const T a_value, unsigned int a_index)
{
}

template<typename T>
inline void DynamicArray<T>::Remove(unsigned int a_index)
{
}

template<typename T>
inline unsigned int DynamicArray<T>::Find(const T a_value) const
{
	return 0;
}

template<typename T>
inline void DynamicArray<T>::Resize(unsigned int a_newCapacity)
{
	//capacity should not be zero
	assert(a_newCapacity != 0);

	//create a new array of new capacity
	T* newData = new T[a_newCapacity];

	//copy size elements if the capacity is increasing,
	//capacity elements if it's decreasing
	unsigned int elementsToCopy = (size < a_newCapacity) ? size : a_newCapacity;

	//copy those elements
	for (unsigned int i = 0; i < elementsToCopy; i++)
	{
		newData[i] = data[i];
	}

	//delete old data
	delete[] data;

	//point data at the newData on the heap
	data = newData;

	//increase capacity
	capacity = a_newCapacity;
}


