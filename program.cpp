#include <iostream>
#define db(x) cerr << #x << ": " << x << '\n';
#define CPS CLOCKS_PER_SEC

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("./input.txt", "r", stdin);
		freopen("./output.txt", "w", stdout);
	#endif
	clock_t clk = clock();

	// CODE GOES HERE
	
	cerr << double(clock() - clk) * 1000.0 / CPS << '\n';
	return 0;
}
