#include <game/Parameters.h>
#include <fstream>

float Parameters::_values[4];

void Parameters::load()
{
    std::ifstream fin("Parameters.txt", std::ios_base::in);

    if (fin.is_open())
    {
        for (int i = 0; i < 4; i++)
        {
            while (fin.get() != '=')
                continue;

            fin >> _values[i];
        }
    }

    fin.clear();
    fin.close();
}

float Parameters::TileSize()
{
    return _values[0];
}

unsigned int Parameters::GridWidth()
{
    return _values[1];
}

unsigned int Parameters::GridHeight()
{
    return _values[2];
}

int Parameters::MineCount()
{
    return _values[3];
}

int Parameters::ScreenWidth()
{
    //return TileSize * GridWidth
    return _values[0] * _values[1];
}

int Parameters::ScreenHeight()
{
    //return TileSize * GridHeight
    return _values[0] * _values[2];
}
