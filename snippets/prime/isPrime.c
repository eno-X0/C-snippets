#include <stdio.h>

		bool 
is_prime(int num) 
{
	if (num <= 0){
		puts("The num must be a positive integer");
		return false;
	}

	if (num == 1) return false;

	for (int i = 2; i * i <= num; i++){
		if (num % i == 0) return false;
	}

	return true;
}
