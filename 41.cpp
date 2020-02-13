#include <iostream>
using namespace std;

template <typename tt>
class Add
{
public:
	template <typename tt1, typename tt2>
	tt add(tt1 a, tt2 b);
};

template <typename tt>
template <typename tt1, typename tt2>
tt Add<tt>::add(tt1 a, tt2 b)
{
	return a + b;
}

