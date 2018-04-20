#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>

int main(int argc, char* argv[])
{
	srand((unsigned int)time(nullptr));

	int inside_circle = 0;
	int inside_circle_stratified = 0;
	int N = 1000000;
	float sum = 0;

	for (int i = 0; i < N; i++)
	{
		float x = 2.0f * ((float)rand() / float(RAND_MAX));
		sum += x*x;
	}

	std::cout << "I = " << 2 * sum / N << "\n";

	return 0;
}