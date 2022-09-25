#ifndef SYSTEM_RENDER_BONSAI_H
#define SYSTEM_RENDER_BONSAI_H

#include "../bonsai_state.h"

#define BONSAI_STATE_ICON_OFFSET 170
#define BONSAI_OK_ICON_INDEX BONSAI_STATE_ICON_OFFSET + 0
#define BONSAI_WATER_ICON_INDEX BONSAI_STATE_ICON_OFFSET + 1
#define BONSAI_FIRE_ICON_INDEX BONSAI_STATE_ICON_OFFSET + 2

typedef struct {
    unsigned char last_level_rendered;
} BonsaiRenderState;

void system_render_bonsai(BonsaiRenderState * render_state, BonsaiState * bonsai_state);

#endif