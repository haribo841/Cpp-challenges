//Create a function that can turn JPY (Japanese yen) to USD (American dollar).
#include "091 Yen to USD.h"
double yenToUsd(int yen) {
	double result = yen / 107.5;
	result = std::round(result * 100.0) / 100.0;
	return result;
}