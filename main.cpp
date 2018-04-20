#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>

int main(int argc, char* argv[])
{
	srand((unsigned int)time(nullptr));

	int inside_circle = 0;
	unsigned long long runs = 0;
	while (1)
	{
		runs++;
		double x = 2.0 * ((double)rand() / (double)RAND_MAX) - 1.0;
		double y = 2.0 * ((double)rand() / (double)RAND_MAX) - 1.0;
		if (x*x + y*y < 1.0)
			inside_circle++;
		if (runs % 100000 == 0)
			std::cout << "Estimate of Pi = " << 4.0 * double(inside_circle) / runs << "\n";
	}


	return 0;
}