#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>

int main(int argc, char* argv[])
{
	srand((unsigned int)time(nullptr));

	int inside_circle = 0;
	int inside_circle_stratified = 0;
	int sqrt_N = 10000;

	for (int i = 0; i < sqrt_N; i++)
	{
		for (int j = 0; j < sqrt_N; j++)
		{
			float x = 2.0f * ((float)rand() / (float)RAND_MAX) - 1.0f;
			float y = 2.0f * ((float)rand() / (float)RAND_MAX) - 1.0f;
			if (x*x + y*y < 1.00f)
				inside_circle++;

			x = 2.0f * ((i + ((float)rand() / (float)RAND_MAX)) / sqrt_N) - 1.0f;
			y = 2.0f * ((j + ((float)rand() / (float)RAND_MAX)) / sqrt_N) - 1.0f;
			if (x*x + y*y < 1.0f)
				inside_circle_stratified++;
		}
	}


	std::cout << "Regular    Estimate of Pi = " << 4.0f * float(inside_circle) / (sqrt_N*sqrt_N) << "\n";
	std::cout << "Stratified Estimate of Pi = " << 4.0f * float(inside_circle_stratified) / (sqrt_N*sqrt_N) << "\n";
	return 0;
}