/*

반복되는 부분이 2개 이상이면 바로 함수로 쪼개버리라!!!
+) 함수도 메모리에 저장된다. (재귀함수

*/


#include <iostream>

using namespace std;


int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;

	return sum;
}


int main()
{
	
	cout << multiplyTwoNumbers(1,2) << endl;
	cout << multiplyTwoNumbers(3, 8) << endl;
	cout << multiplyTwoNumbers(9, 13) << endl;

	return 0;
}