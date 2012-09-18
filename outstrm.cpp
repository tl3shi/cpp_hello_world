#include <stdlib.h>    // Need rand(), srand()
#include <time.h>      // Need time()
#include <algorithm>   // Need sort(), copy()
#include <vector>      // Need vector
#include <iostream>
#include <iterator>

using namespace std;

void Display(vector<int> v, const char* s);

int main()
{
	// Seed the rand number generator
	srand( time(NULL) );

	// Construct vector and fill with rand integer values
	vector<int> collection(10);
	for (int i = 0; i < 10; i++)
		collection[i] = rand() % 10000;;

	// Display, sort, and redisplay
	Display(collection, "Before sorting");
	sort(collection.begin(), collection.end());
	Display(collection, "After sorting");
	return 0;
}

// Display label s and contents of integer vector v
void Display(vector<int> v, const char* s)
{
	cout << endl << s << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;
}

