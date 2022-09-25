#include"../../include/systems/sprite_factory.h"

const SpriteFactoryCommand sprite_commands [] = {
     // tutorial wave
    {20, 0, S_T_SUN, 0},
    {70, 0, S_T_RAIN, 10},
     // 1st wave
    {70, 0, S_T_SUN, 10},
    {70, 0, S_T_SUN, 0},
    {20, 0, S_T_RAIN, 0},
    {20, 0, S_T_SUN, 5},
    {20, 0, S_T_SUN, 0},
    {70, 0, S_T_SUN, 5},
     // 2nd wave
    {20, 0, S_T_RAIN, 20},
    {20, 0, S_T_RAIN, 0},
    {20, 0, S_T_RAIN, 0},
    {20, 0, S_T_SUN, 5},
    {20, 0, S_T_SUN, 0},
    {20, 0, S_T_SUN, 0},
    {70, 0, S_T_SUN, 5},
     // 3rd wave
    {20, 0, S_T_RAIN, 25},
    {20, 0, S_T_RAIN, 0},
    {20, 0, S_T_RAIN, 0},
    {70, 0, S_T_SUN, 5},
    {20, 0, S_T_RAIN, 10},
    {20, 0, S_T_SUN, 5},
    {20, 0, S_T_SUN, 0},
    {20, 0, S_T_SUN, 5},
    {20, 0, S_T_SUN, 0}
};

SpriteFactoryState sprite_factory_state = {sizeof(sprite_commands) / sizeof(SpriteFactoryCommand), 0, 0, 0};
