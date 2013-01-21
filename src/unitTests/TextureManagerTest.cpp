#include "UnitTest++.h"
#include "engine/TextureManager.h"

SUITE(TextureManagerTest)
{
    TEST(LoadingTextureReturnsNonNullPointer)
    {
        TextureManager manager;
        CHECK(bool (manager.getTexture("textures/test_tile.png")));
    }
}
