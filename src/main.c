#include "../include/kodama_state.h"
#include "../include/systems/render_kodama.h"
#include "../include/systems/gravity.h"
#include "../include/systems/catch_landing.h"
#include "../include/systems/horizontal_input.h"
#include "../include/systems/flying_input.h"
#include<gb/gb.h>


KodamaState kodama_state = {30, 20, 50};

const unsigned char kodama_data [] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

int main()
{
    set_sprite_data(1, 2, kodama_data);
    set_sprite_tile(1, 0x01);
    SHOW_SPRITES;
    while(1)
    {
        wait_vbl_done();
        system_render_kodama(&kodama_state);
        system_catch_landing(&kodama_state);
        system_gravity(&kodama_state);
        system_horizontal_input(&kodama_state);
        system_flying_input(&kodama_state);
    }
}