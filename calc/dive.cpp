#include "dive.h"
#include "sub.h"

int dive(int a, int b) {
	int count = 0;
	while (a >= b) {
		a = sub(a, b);
		count++;
	}
	return count;

}