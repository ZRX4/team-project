#include <iostream>
#include <cmath>
#define g 9.81

using namespace std;

// ===== Расчётные функции варианта =====

//скорость падения
double fallSpeed(double t) {
	return t * g;

}

//Высота падения
double fallHeight(double t) {
	return (g * t * t) / 2;
}



//Время падения
double fallTime(double h) {

	return sqrt((2 * h) / g);

}