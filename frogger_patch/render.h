#ifndef RENDER_H
#define RENDER_H

#include "gamestate.h"

/* Draw the provided game state into the current Allegro target (do not change target inside). */
void draw_game_state(game_state *g);

#endif /* RENDER_H */
