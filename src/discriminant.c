// Вспомогательная функция для вычисления дискриминанта.
// Принимает на вход целые коэффициенты.
// Возвращает вещественное число (значение дискриминанта), 
// если дискриминант больше или равен нуля.
// Возвращает -1, если дискриминант отрицателен.
#include "discriminant.h"
float discriminant(int a, int b, int c)
{
	float d = (b * b) - (4 * a * c);
	if (d < 0) {
		return -1;
	}
	return d;
}
