#include"../../include/systems/sprite_factory.h"

const SpriteFactoryCommand sprite_commands [] = {
    {20, 0, S_T_SUN, 0},
    {70, 0, S_T_SUN, 5},
    {20, 0, S_T_RAIN, 0},
    {20, 0, S_T_SUN, 5},
    {20, 0, S_T_SUN, 0},
    {20, 0, S_T_SUN, 0},
    {70, 0, S_T_SUN, 5},
    {20, 0, S_T_RAIN, 0},
    {20, 0, S_T_SUN, 5},
    {20, 0, S_T_SUN, 0},
    {20, 0, S_T_SUN, 0},
    {70, 0, S_T_SUN, 5},
    {20, 0, S_T_RAIN, 0},
    {20, 0, S_T_SUN, 5},
    {20, 0, S_T_SUN, 0}
};

SpriteFactoryState sprite_factory_state = {sizeof(sprite_commands) / sizeof(SpriteFactoryCommand), 0, 0, 0};
