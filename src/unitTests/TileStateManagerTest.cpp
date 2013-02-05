#include <UnitTest++.h>
#include <game/TileStateManager.h>
#include <game/TileDrawableSprite.h>

struct TileStateManagerFixture
{
    TileStateManagerFixture()   {}
    ~TileStateManagerFixture()  {}

    TileStateManager manager;
    TileDrawableSprite tile;
};

SUITE(TileStateManagerTest)
{
    TEST_FIXTURE(TileStateManagerFixture, TileStateCorrectAfterSettingPeek)
    {
        manager.changeState(TileStateManager::Peek);
        CHECK_EQUAL(TileStateManager::Peek, manager.getState());
    }
    TEST_FIXTURE(TileStateManagerFixture, TileStateCorrectAfterSettingFlagged)
    {
        manager.changeState(TileStateManager::Flagged);
        CHECK_EQUAL(TileStateManager::Flagged, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateCorrectAfterSettingUncovered)
    {
        manager.changeState(TileStateManager::Uncovered);
        CHECK_EQUAL(TileStateManager::Uncovered, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateCorrectAfterSettingUncertain)
    {
        manager.changeState(TileStateManager::Uncertain);
        CHECK_EQUAL(TileStateManager::Uncertain, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateCoveredByDefault)
    {
        CHECK_EQUAL(TileStateManager::Covered, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, LeftClickReturnsFalseWhenNoMine)
    {
        CHECK(!manager.leftClick(&tile));
    }

    TEST_FIXTURE(TileStateManagerFixture, LeftClickReturnsTrueWhenMine)
    {
        tile.placeMine();
        CHECK(manager.leftClick(&tile));
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateCoveredChangesToUncoveredWhenNoMine)
    {
        manager.leftClick(&tile);
        CHECK_EQUAL(TileStateManager::Uncovered, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateUncoveredStaysWhenRightClicked)
    {
        manager.changeState(TileStateManager::Uncovered);
        manager.rightClick(&tile);
        CHECK_EQUAL(TileStateManager::Uncovered, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateCoveredChangesToFlaggedWhenNoMine)
    {
        manager.rightClick(&tile);
        CHECK_EQUAL(TileStateManager::Flagged, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateCoveredChangesToFlaggedWhenMine)
    {
        tile.placeMine();
        manager.rightClick(&tile);
        CHECK_EQUAL(TileStateManager::Flagged, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateFlaggedStaysSameWhenLeftClicked)
    {
        manager.changeState(TileStateManager::Flagged);
        manager.leftClick(&tile);
        CHECK_EQUAL(TileStateManager::Flagged, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateFlaggedChangesToUncertainWhenRightClicked)
    {
        manager.changeState(TileStateManager::Flagged);
        manager.rightClick(&tile);
        CHECK_EQUAL(TileStateManager::Uncertain, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateUncertainChangesToCoveredWhenRightClicked)
    {
        manager.changeState(TileStateManager::Uncertain);
        manager.rightClick(&tile);
        CHECK_EQUAL(TileStateManager::Covered, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateUncertainStaysWhenLeftClicked)
    {
        manager.changeState(TileStateManager::Uncertain);
        manager.rightClick(&tile);
        CHECK_EQUAL(TileStateManager::Uncertain, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateUncoveredStaysWhenLeftClicked)
    {
        manager.changeState(TileStateManager::Uncovered);
        manager.leftClick(&tile);
        CHECK_EQUAL(TileStateManager::Uncovered, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStatePeekGetStateReturnsCorrect)
    {
        manager.changeState(TileStateManager::Peek);
        CHECK_EQUAL(TileStateManager::Peek, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateUncoveredGetStateReturnsCorrect)
    {
        manager.changeState(TileStateManager::Uncovered);
        CHECK_EQUAL(TileStateManager::Uncovered, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateUncertainGetStateReturnsCorrect)
    {
        manager.changeState(TileStateManager::Uncertain);
        CHECK_EQUAL(TileStateManager::Uncertain, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateFlaggedGetStateReturnsCorrect)
    {
        manager.changeState(TileStateManager::Flagged);
        CHECK_EQUAL(TileStateManager::Flagged, manager.getState());
    }

    TEST_FIXTURE(TileStateManagerFixture, TileStateCoveredGetStateReturnsCorrect)
    {
        manager.changeState(TileStateManager::Covered);
        CHECK_EQUAL(TileStateManager::Covered, manager.getState());
    }
}
