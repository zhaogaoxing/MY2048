#ifndef _2048_common_
#define _2048_common_

#define GAME_FONT_NAME "fonts/tahoma.ttf"
#define TILE_FONT_NAME "fonts/tahoma.ttf"
#define SCORE_FONT_NAME "fonts/tahoma.ttf"

enum class EMoveTo
{
	left,
	right,
	up,
	down
};

enum class GameState
{
	prepare,
	running,
	moveing,
	gameover,
	win
};

#endif
