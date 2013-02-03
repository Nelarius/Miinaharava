#ifndef PARAMETERS_H
#define PARAMETERS_H

/// Variables declared in the following order:
/// TileSize
/// GridWidth
/// GridHeight
/// Minecount
class Parameters
{
    public:
        static void load();

        static float TileSize();
        static unsigned int GridWidth();
        static unsigned int GridHeight();

        static int MineCount();

        static int ScreenHeight();
        static int ScreenWidth();

    private:
        static float _values[4];
};

#endif // PARAMETERS_H_INCLUDED
