#ifndef LINGEN_H
#define LINGEN_H

/// \brief A random-number generator using the linear congruental algorithm.
///
/// \param
/// \param
/// \return
///
/// Uses values proposed by Park and Miller:
/// http://en.wikipedia.org/wiki/Lehmer_RNG
///

class LinGen
{
    private:
        static long _seed;
        static const int a;
        static const long m;
        static const int q;
        static const int r;
    public:
        static void srand(long seed);   //should not be seeded with zero
        static double rand();
};

#endif // LINGEN_H
