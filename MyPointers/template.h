#pragma once

template<typename T>
T Sum(T* pa, T* pb)
{
	return *pa + *pb;
}
template<typename T>
T Sum(T& a, T& b)
{
	return a + b;
}

template<typename T>
T Avg(T* pa, T* pb)
{
	pa = *pa;
	pb = *pb;
	return (double)Sum(T * pa, T * pb) / 2;
}

