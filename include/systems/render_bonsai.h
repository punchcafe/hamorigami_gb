#ifndef SYSTEM_RENDER_BONSAI_H
#define SYSTEM_RENDER_BONSAI_H

#include "../bonsai_state.h"

typedef struct {
    unsigned char already_rendered;
} BonsaiRenderState;

void system_render_bonsai(BonsaiRenderState * render_state, BonsaiState * bonsai_state);

#endif