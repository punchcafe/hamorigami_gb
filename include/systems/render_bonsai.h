#ifndef SYSTEM_RENDER_BONSAI_H
#define SYSTEM_RENDER_BONSAI_H

#include "../bonsai_state.h"
#include "../game_state.h"

#define BACKGROUND_PATTERN_BLOCK_SIZE 229
#define BONSAI_STATE_ICON_OFFSET BACKGROUND_PATTERN_BLOCK_SIZE + 1
#define BONSAI_OK_ICON_INDEX BONSAI_STATE_ICON_OFFSET + 0
#define BONSAI_WATER_ICON_INDEX BONSAI_STATE_ICON_OFFSET + 1
#define BONSAI_FIRE_ICON_INDEX BONSAI_STATE_ICON_OFFSET + 2

typedef struct {
    unsigned char last_level_rendered;
} BonsaiRenderState;

void system_render_bonsai(BonsaiRenderState * render_state, BonsaiState * bonsai_state);
void system_render_bonsai_result(GameState * render_state);

#endif