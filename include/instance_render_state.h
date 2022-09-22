#ifndef INSTANCE_RENDER_STATE_H
#define INSTANCE_RENDER_STATE_H

typedef struct 
{
    unsigned short ticks;
    unsigned short current_frame;
    unsigned short last_enum_state;
} InstanceRenderState;

#endif