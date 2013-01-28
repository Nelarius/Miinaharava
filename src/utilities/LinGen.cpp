#include <utilities/LinGen.h>

//Park - Miller random number generator methods:
long LinGen::_seed = 7;
const int LinGen::a = 16807;
const long LinGen::m = 2147483647L;
const int LinGen::q = 127773L;
const int LinGen::r = 2836;

void LinGen::srand(long seed)
{
    _seed = seed;
}

double LinGen::rand()
{
    long k = _seed / q;

    //the following 3 lines compute the modulus using Schrage's algorithm:
    _seed = a * (_seed - k * q) - r * k;
    if (_seed < 0)
        _seed += m;
    double ans = _seed * (1.0 / m);

    return ans;
}
