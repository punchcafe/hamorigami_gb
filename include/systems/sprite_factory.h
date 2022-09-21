#ifndef SYSTEM_SPRITE_FACTORY_H
#define SYSTEM_SPRITE_FACTORY_H

#include "../../include/systems/sunsprite_behaviour.h"
#include "../../include/systems/rainsprite_behaviour.h"

typedef struct {
    unsigned int total_number_of_commands;
    unsigned short tick;
    unsigned int next_command;
    unsigned short current_delay;
} SpriteFactoryState;

typedef enum {
    S_T_RAIN,
    S_T_SUN
} SpriteType;

typedef struct {
    unsigned int starting_x;
    unsigned int starting_y;
    SpriteType type;
    // Time (seconds) until next command
    unsigned short delay;
} SpriteFactoryCommand;

void system_sprite_factory(SpriteFactoryState * proc_state, 
                           SpriteFactoryCommand * commands, 
                           RainspriteInstance * rainsprite_instaces,
                           SunspriteInstance * sunsprite_instances);
#endif