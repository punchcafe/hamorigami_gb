#include"../../include/systems/sprite_factory.h"

void system_sprite_factory(SpriteFactoryState * proc_state, 
                           SpriteFactoryCommand * commands, 
                           RainspriteInstance * rainsprite_instaces,
                           SunspriteInstance * sunsprite_instances)
{
    if(proc_state->next_command >= proc_state->total_number_of_commands)
    {
        return;
    }
    if(proc_state->tick >= 60)
    {
        proc_state->tick = 0;
        if(proc_state->current_delay == 0)
        {
            SpriteFactoryCommand * command = &commands[proc_state->next_command];
            switch (command->type)
            {
            case S_T_RAIN:
                system_rainsprite_behaviour_add_sprite(rainsprite_instaces, command->starting_x, command->starting_y);
                break;
            
            case S_T_SUN:
                system_sunsprite_behaviour_add_sprite(sunsprite_instances, command->starting_x, command->starting_y);
                break;
            default:
                break;
            }
            proc_state->current_delay = command->delay;
            proc_state->next_command++;
        } else {
            proc_state->current_delay--;
        }
    } else {
        proc_state->tick++;
    }

}