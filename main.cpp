#include <math.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char* argv[])
{
	int N = 1000;
	int inside_circle = 0;
	for (int i = 0; i < N; i++)
	{
		float x = 2.0f * ((float)rand() / (float)RAND_MAX) - 1.0f;
		float y = 2.0f * ((float)rand() / (float)RAND_MAX) - 1.0f;
		if (x*x + y*y < 1)
			inside_circle++;
	}

	std::cout << "Estimate of Pi = " << 4 * float(inside_circle) / N << "\n";

	return 0;
}