#include <unitTest++.h>
#include <game/GridBehavior.h>
#include <game/Parameters.h>

//this test will have to be rewritten if Parameters is to be changed into a file i/o.

struct GridFixture
{
    GridBehavior grid;

    GridFixture()   {}
    ~GridFixture()  {}
};

SUITE(GridBehaviorTest)
{
    TEST_FIXTURE(GridFixture, GetIndexReturnsCorrectFirstTile)
    {
        //in the first tile
        CHECK_EQUAL(0u, grid.getIndex(Parameters::TileSize() - 3u, Parameters::TileSize() - 5u));
    }

    TEST_FIXTURE(GridFixture, GetXReturnsCorrectValueForFirstTile)
    {
        //in the first tile
        CHECK_EQUAL(0.0, grid.getX(0u));
    }

    TEST_FIXTURE(GridFixture, GetYReturnsCorrectValueForFirstTile)
    {
        //in the first tile
        CHECK_EQUAL(0.0, grid.getY(0u));
    }

    TEST_FIXTURE(GridFixture, GetXReturnsCorrectValueForSecondRowTile)
    {
        CHECK_EQUAL(0.0, grid.getX(Parameters::GridWidth()));
    }

    TEST_FIXTURE(GridFixture, GetYReturnsCorrectValueForSecondRowTile)
    {
        CHECK_EQUAL(Parameters::TileSize(), grid.getY(Parameters::GridWidth() + 1u));
    }

    TEST_FIXTURE(GridFixture, GetIndexReturnsCorrectForTenthTile)
    {
        CHECK_EQUAL(9u, grid.getIndex(Parameters::TileSize() - 3, Parameters::TileSize() + 3));
    }
}
