#ifndef LINGEN_H
#define LINGEN_H

/// \brief Park-Miller linear congruental random number generator.
///
/// \param
/// \param
/// \return
///
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
