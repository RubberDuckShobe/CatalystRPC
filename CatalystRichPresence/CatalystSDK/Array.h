#pragma once

template<typename T> class BasicArray
{
public:
	T* mpBegin;
};


template<typename T> class Array : public BasicArray<T>
{
public:
};  