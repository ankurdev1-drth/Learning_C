#include <stdio.h>
#include <string.h>
#define  MAX 40
 
typedef enum { EM (electromechanical), SS(solid state)} Type;


typedef struct {
	char name[MAX];
	int year;
	Type type;
	int players;
} pinball_machine;

