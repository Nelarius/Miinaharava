#include <game/Parameters.h>
#include <fstream>

float Parameters::_values[10];
float Parameters::_currentGridWidth = 0;
float Parameters::_currentGridHeight = 0;
float Parameters::_currentMineCount = 0;
int Parameters::_currentDifficulty = 0;

void Parameters::load()
{
    std::ifstream fin("Parameters.txt", std::ios_base::in);

    if (fin.is_open())
    {
        for (int i = 0; i < 10; i++)
        {
            while (fin.get() != '=')
                continue;

            fin >> _values[i];
        }
    }

    fin.clear();
    fin.close();

    _currentGridWidth   = _values[4];
    _currentGridHeight  = _values[5];
    _currentMineCount   = _values[6];
}

float Parameters::TileSize()
{
    return _values[0];
}

unsigned int Parameters::GridWidth()
{
    return _currentGridWidth;
}

unsigned int Parameters::GridHeight()
{
    return _currentGridHeight;
}

int Parameters::MineCount()
{
    return _currentMineCount;
}

int Parameters::ScreenWidth()
{
    //return TileSize * GridWidth
    return _values[0] * _currentGridWidth;
}

int Parameters::ScreenHeight()
{
    //return TileSize * GridHeight
    return _values[0] * _currentGridHeight;
}

void Parameters::setDifficulty(int difficulty)
{
    switch (difficulty)
    {
        case Easy :     _currentGridWidth = _values[1];
                        _currentGridHeight = _values[2];
                        _currentMineCount = _values[3];
                        _currentDifficulty = Easy;
                        break;

        case Medium :   _currentGridWidth = _values[4];
                        _currentGridHeight = _values[5];
                        _currentMineCount = _values[6];
                        _currentDifficulty = Medium;
                        break;

        case Hard :     _currentGridWidth = _values[7];
                        _currentGridHeight = _values[8];
                        _currentMineCount = _values[9];
                        _currentDifficulty = Hard;
    }
}

int Parameters::getDifficulty()
{
    return _currentDifficulty;
}

