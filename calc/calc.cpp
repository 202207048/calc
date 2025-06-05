// calc.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "add.h"
#include "sub.h"
#include "dive.h"
#include "mod.h"
#include "mul.h"


int main()
{
	int a = 0;
	int b = 0;


	std::cout << "첫번째 수를 입력하세요 : ";
	std::cin >> a;
	std::cout << "두번째 수를 입력하세요 : ";
	std::cin >> b;

	printf("입력된 수 a[ %d ] b [ %d ]\n", a, b);
	printf("add[ %d ] sub[ %d ] mul[ %d ] dive[ %d ] mod[ %d ]\n",
		add(a, b), sub(a, b), mul(a, b), dive(a, b), mod(a, b));



}
