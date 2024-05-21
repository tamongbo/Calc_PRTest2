#include <stdexcept>
using namespace std;

class Calc {
public:
	int getSum(int a, int b) {
		return a + b;
	}
	
	int getGop(int a, int b) {
		return 0;
	}
	
	int getZegop(int a) {
		return a * a;
	}
	
	int getMinus(int a, int b) {
		return 0;
	}
	
	int getDivide(int a, int b) {
		return 0;
	}
	
	int getSumSum(int op1, int op2, int op3) {
		return op1 + op2 + op3;
	}
};