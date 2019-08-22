#pragma once

#define DEF_SCR_BOUNDS_X stdscr->_maxx
#define DEF_SCR_BOUNDS_Y stdscr->_maxy
//^^ default window size on initialization does not match up with this

#define HUD_SCR_BOUNDS_X DEF_SCR_BOUNDS_X
#define HUD_SCR_BOUNDS_Y 6

#define MAP_SCR_BOUNDS_X DEF_SCR_BOUNDS_X
#define MAP_SCR_BOUNDS_Y (DEF_SCR_BOUNDS_Y - HUD_SCR_BOUNDS_Y) 