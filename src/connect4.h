#include <stdbool.h>

#ifndef CONNECT4_H
#define CONNECT4_H

struct connect4_board {
};

typedef struct connect4_board connect4;

/* 
 * Initializes the board state, setting all the necesary 
 * values to play this game in a board of rows by columns size, and the game
 * being played by `num_of_players` players.
 */
void connect4_init (connect4* game, int rows, int columns, int num_of_players);

/*
 * Returns a string representation for the board state
 * in this case empty locations are represented with 0,
 * places where there is a token for player N contain the
 * number N.
 * 
 * For example a 3 x 4 board, with two players playing, 
 * and after a few turns would look like this:
 * 
 * 0000
 * 0100
 * 2100
 * 1221
 */ 
char* connect4_to_string (connect4* game);

/*
 * Given a player and column where that player
 * wants to make a play, this function makes that
 * play at the given column on "game".
 * It returns 1 if the players wins by doing 
 * that move, 2 if player is not winning yet,
 * 3 in case it is a bad play, like an out of
 * index column, or trying to thorw a ball
 * in a already full column.
 */
int connect4_make_play (connect4* game, int player, int column);

/*
 * Given the last position where player threw
 * a token, this function decides whether the given
 * player already won. It considers horizontal,
 * vertical and diagonal wins.
 */ 
bool connect4_player_won (connect4* game, int player, int row, int column);

/* Releases the memory assigned by connect4_init */
void connect4_free (connect4* game);

#endif
