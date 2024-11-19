#include <iostream>



int main(){
	uint64_t res = fibo(36);
	std::cout << res << std::endl;
	return 0;
}

// ----recursive function, finding the factorial of some number
// 
//--uint64_t F(int16_t n) {
//	-if (n == 0 || n == 1) {gh
//	-	return 1;
//	-}
//	-else {
//	-	return n * F(n - 1);
//	-}
//--}

//--rec_function of sum of number
//	uint64_t SUM(int n) {
//		if (n == 0) {
//			return 0;
//		}
//		else {
//			return SUM(n / 10) + n % 10;
//		}
//	}

// solving sum of digids of number, NOT RECURSIVE METHOD
// 
// 
//	uint64_t SUM(int n) {
//		if (n == 0) {
//			return 0;
//		}
//		else {
//			uint64_t sum = 0;
//			while (n > 0) {
//				sum += n % 10;
//				n /= 10;
//			}
//			return sum;
//		}
//	}

// fiding n member of fibonacci siquence, RECURSIVE METHOD
//
//	uint64_t fib(int n) {
//		if (n == 0 || n == 1) {
//			return 1;
//		}
//		else {
//			return fib(n - 1) + fib(n - 2);
//		}
//	}

//fibonacci siquence, NOT recursive method
//
//	uint64_t fibo(int n) {
//		if (n == 0 || n == 1) {
//			return 1;
//		}	
//		else {
//			uint64_t a = 0, a1 = 1, a2 = 1;
//			for (int i = 2; i <= n; ++i) {
//				a = a1 + a2;
//				a2 = a1;
//				a1 = a;
//			}
//			return a;
//		}
//	}