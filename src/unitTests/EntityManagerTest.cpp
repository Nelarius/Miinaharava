#include "UnitTest++.h"
#include "engine/EntityManager.h"
#include "game/GridEntity.h"
#include "game/SplashScreenEntity.h"

struct EntityFixture
{
    EntityManager manager;

    EntityFixture()     {}
    ~EntityFixture()    { manager.removeAll(); }
};

SUITE(EntityManagerTest)
{
    TEST_FIXTURE(EntityFixture, AddingNothingGivesHighestAvailableZero)
    {
        CHECK_EQUAL(0u, manager.getHighestAvailableIdent());
    }

    TEST_FIXTURE(EntityFixture, AddingValidEntityReturnsTrue)
    {
        CHECK(manager.add(1u, new SplashScreenEntity()));
    }

    TEST_FIXTURE(EntityFixture, GetHighestAvailableReturnsCorrect)
    {
        manager.add(4u, new SplashScreenEntity());
        CHECK_EQUAL(5u, manager.getHighestAvailableIdent());
    }

    TEST_FIXTURE(EntityFixture, AddingWithTooLowIdentReturnsFalse)
    {
        manager.add(4, new SplashScreenEntity());
        CHECK(!manager.add(3u, new SplashScreenEntity()));
    }

    TEST_FIXTURE(EntityFixture, ClearingReturnsHighestAvailableToZero)
    {
        manager.add(4u, new SplashScreenEntity());
        manager.removeAll();
        CHECK_EQUAL(0u, manager.getHighestAvailableIdent());
    }

    TEST_FIXTURE(EntityFixture, AddingWithSameIdentTwiceReturnsFalse)
    {
        manager.add(4u, new SplashScreenEntity());
        CHECK(!manager.add(4u, new SplashScreenEntity()));
    }

    TEST_FIXTURE(EntityFixture, RemovingEntityDoesNotChangeHighestAvailableIdent)
    {
        manager.add(4u, new SplashScreenEntity());
        manager.remove(4u);
        CHECK_EQUAL(5u, manager.getHighestAvailableIdent());
    }

    TEST_FIXTURE(EntityFixture, RemovedEntityCannotBeGetted)
    {
        manager.add(4u, new SplashScreenEntity());
        manager.remove(4u);
        CHECK(!bool (manager.getEntity(4u)));
    }
}
