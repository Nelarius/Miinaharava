#ifndef PARAMETERS_H
#define PARAMETERS_H

/// \brief Static methods for reading in values from Parameters.txt
class Parameters
{
    public:
        static void load();

        /// \brief Returns the tile texture size (a square).
        static float TileSize();

        /// \brief Returns the current grid width.
        static unsigned int GridWidth();

        /// \brief Returns the current grid height.
        static unsigned int GridHeight();

        /// \brief Returns the current mine count.
        static int MineCount();

        /// \brief Returns the screen height as determined by the current grid dimensions.
        static int ScreenHeight();

        /// \brief Returns the screen width as determined by the current grid dimensions.
        static int ScreenWidth();

        /// \brief Set the difficulty level of the minesweeper game.
        /// \param difficulty The integer corresponding to the difficulty as enumerated in this class.
        ///
        /// Setting the difficulty determines which parameters this class uses for the grid width, grid height and mine count.
        /// The screen height and width is effected by this as a result.
        static void setDifficulty(int difficulty);

        /// \brief Enumerated difficulty values.
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
