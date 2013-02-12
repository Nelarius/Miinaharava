#ifndef PARAMETERS_H
#define PARAMETERS_H

/// \brief Static methods for reading in values from Parameters.txt
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

        static void setDifficulty(int difficulty);

        enum
        {
            Easy,
            Medium,
            Hard
        };

    private:
        static float _values[10];

        static float _currentGridWidth;
        static float _currentGridHeight;
        static float _currentMineCount;
};

#endif // PARAMETERS_H_INCLUDED
