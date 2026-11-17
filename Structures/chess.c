#define MAX 8
#include <stdio.h>
typedef enum { EMPTY = 0, PAWN = 1, KNIGHT = 2, BISHOP = 3, ROOK = 4, QUEEN = 5, KING = 6 } Piece;
typedef enum {BLACK, WHITE} Color;

typedef struct {  
//		int Piece; wrong approach if we want to store Piece in a variable and if we want to create a structure then : 
//		int Color; // shouldn't it be char?
	Piece  piece;// here Piece is form enum earlier and is acting as an identifier i mean c'mmon Piece is a variable that identifies any of the 7 things in that list!
	Color color; 


} Square;

Square board[8][8] = {
    /* row 0: black back rank */
    { {ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK},
      {KING, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK} },

    /* row 1: black pawns */
    { {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK},
      {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK} },

    /* rows 2-5: empty squares (empty piece, color black) */
    { {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
      {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK} },
    { {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
      {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK} },
    { {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
      {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK} },
    { {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
      {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK} },

    /* row 6: white pawns */
    { {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE},
      {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE} },

    /* row 7: white back rank */
    { {ROOK, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE},
      {KING, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK, WHITE} }
};

