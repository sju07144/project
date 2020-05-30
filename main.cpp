#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
	srand((unsigned)time(NULL));
	vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(rand() % 100);

	sort(v.begin(), v.end(), [](const int& a, const int& b) { return a < b; });
	for_each(v.begin(), v.end(), [](int i) { cout << i << endl; });
	return 0;
}
