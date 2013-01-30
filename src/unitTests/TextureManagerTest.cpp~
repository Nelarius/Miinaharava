#include "UnitTest++.h"
#include "engine/TextureManager.h"

struct TextureFixture
{
    TextureManager manager;
    TextureFixture()    {}
    ~TextureFixture()   {}
};

SUITE(TextureManagerTest)
{
    TEST_FIXTURE(TextureFixture, LoadingTextureReturnsNonNullPointer)
    {
        CHECK(bool (manager.getTexture("textures/covered.png")));
    }

    TEST_FIXTURE(TextureFixture, LoadingIncorrectTextureReturnsNullPointer)
    {
        CHECK(!bool (manager.getTexture("asdfasdf.png")));
    }
}
