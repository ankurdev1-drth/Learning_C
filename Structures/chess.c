#include <stdio.h>
typedef enum { EMPTY = 0, PAWN = 1, KNIGHT = 2, BISHOP = 3, ROOK = 4, QUEEN = 5, KING = 6 } Piece;
typedef enum {BLACK, WHITE} Color;

typedef struct {  
//		int Piece; wrong approach if we want to store Piece in a variable and if we want to create a structure then : 
//		int Color; // shouldn't it be char?
	Piece  piece;// here Piece is form enum earlier and is acting as an identifier i mean c'mmon Piece is a variable that identifies any of the 7 things in that list!
	Color color; 


} Square;


