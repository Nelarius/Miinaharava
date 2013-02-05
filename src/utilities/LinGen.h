#ifndef LINGEN_H
#define LINGEN_H

/// \brief A random-number generator using the linear congruental algorithm.
///
/// Uses values proposed by Park and Miller:
/// http://en.wikipedia.org/wiki/Lehmer_RNG
/// The period of this generator is 2^31 - 1 (probably good enough for minesweeper).
class LinGen
{
    public:

        /// \brief Seeds the generator.
        /// \param seed The variable to be seeded with. WARNING: it must not be zero!
        static void srand(long seed);   //should not be seeded with zero

        /// \brief Get a random number.
        /// \return A random number in the range [0, 1].
        static double rand();

    private:
        static long _seed;
        static const int a;
        static const long m;
        static const int q;
        static const int r;
};

#endif // LINGEN_H
