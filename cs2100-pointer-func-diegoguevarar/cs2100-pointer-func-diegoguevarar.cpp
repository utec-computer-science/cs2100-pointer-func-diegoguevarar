#include "pch.h"
#include <iostream>

void * _bubblesort_(void* _array_, void(*_puntero_)(void*, int _i, int _k), int _tam_) {
	for (int i = 0; i < _tam_; ++i)	
		for (int k = 0; k < _tam_ - i - 1; ++k) 
			_puntero_(_array_, k, k + 1);
	return _array_;
}

void  _b_int_(void* _vector_, int _i, int _k) {
	// TODO: QUE COSA PONGO AQUI?
}

void  _b_float_(void* _vector_, int _i, int _k) {
	// TODO: QUE COSA PONGO AQUI?
}

void  _b_double_(void* _vector_, int _i, int _k) {
	// TODO: QUE COSA PONGO AQUI?
}

void  _b_char_(void* _vector_, int _i, int _k) {
	// TODO: QUE COSA PONGO AQUI?
}

template <typename T>
void print(T* _vector_, int _tam_) {
	for (int i = 0; i < _tam_; ++i) 
		std::cout << _vector_[i] << ' ';
	std::cout << std::endl;
}

int main() {
	int _array_1[5] = { 2,20,7,108,9 }; // RANDOMS
	float _array_2[5] = { (float)4.4, (float)5.4, (float)9.1, (float)7.4, (float)2.2 };
	double _array_3[5] = { 3.0, 8.0, 2.0, 4.0, 15.0 };
	char _array_4[6] = { 'k', 'a', 'r', 'l', 'o', 's' };

//	_bubblesort_(_array_1, _b_int_, 5);
	print(_array_1, 5);

//	_bubblesort_(_array_2, _b_float_, 5);
	print(_array_2, 5);

//	_bubblesort_(_array_3, _b_double_, 5);
	print(_array_3, 5);

//	_bubblesort_(_array_4, _b_char_, 6);
	print(_array_4, 6);

	return 0;
}