#pragma once
#include <math.h>
#include <vector>
using namespace std;
class _204_Count_Primes {
public:
	int countPrimes(int n) {
		if (n <= 2) {
			return 0;
		}
		vector<bool> not_prime(n, false);
		int sum = 1;
		int end = sqrt(n);
		for (int index = 3; index < n; index += 2) {
			if (!not_prime[index]) {
				sum++;
				if (index > end) {
					continue;
				}
				for (int set = pow(index, 2); set < n; set += index) {
					not_prime[set] = true;
				}
			}
		}
		return sum;
	}
	bool is_prime(int n) {
		int part_end = sqrt(n), begin = 2;
		for (; begin <= part_end; begin++) {
			if (n % begin == 0) {
				break;
			}
		}
		if (begin == part_end) {
			return true;
		} else {
			return false;
		}
	}
};
