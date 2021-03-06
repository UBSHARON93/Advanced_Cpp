#include <iostream>

using namespace std;


template < int N>

struct absolute{
	static_assert(N != INT_MIN);
	static constexpr int value = (N < 0) ? -N : N;
};

int main()
{
	const int n = -15;
	std::cout <<(absolute<n>::value)<< std::endl;
	cin.get();
	return 0;

}