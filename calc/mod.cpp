#include "mod.h"
#include "sub.h"

int mod(int a, int b) {
	while (a >= b) {
		a = sub(a, b);
	}
	return a;
}