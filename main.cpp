#include <random>

#include "imshow.h"
int main(int argc, char * argv[])
{
	int test[320 * 240];
	std::default_random_engine eng;
	std::uniform_int_distribution<> dist;
	do {
		for (int i = 0; i < 320 * 240; i++) {
			test[i] = dist(eng);
		}
		imshow("test", { test, IM_8U, 320, 240, 4 });
	} while (getKey(false) != 'q');
	return 0;
}