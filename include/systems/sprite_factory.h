#ifndef SYSTEM_SPRITE_FACTORY_H
#define SYSTEM_SPRITE_FACTORY_H

#include "../../include/systems/sunsprite_behaviour.h"
#include "../../include/systems/rainsprite_behaviour.h"

typedef struct {
    unsigned char total_number_of_commands;
    unsigned char tick;
    unsigned char next_command;
    unsigned char current_delay;
} SpriteFactoryState;

typedef enum {
    S_T_RAIN,
    S_T_SUN
} SpriteType;

typedef struct {
    unsigned char starting_x;
    unsigned char starting_y;
    SpriteType type;
    // Time (seconds) until next command
    unsigned char delay;
} SpriteFactoryCommand;

void system_sprite_factory(SpriteFactoryState * proc_state, 
                           SpriteFactoryCommand * commands, 
                           RainspriteInstance * rainsprite_instaces,
                           SunspriteInstance * sunsprite_instances);
#endif