#include <stdio.h>

// if (c=='>') return 1; // RED 		62
// if (c=='+') return 4; // BLUE		43
// if (c=='-') return 7; // WHITE		45
// if (c=='.') return 3; // YELLOW		46

#define RESET "\e[0m"

typedef enum {
	RED = 1,
	ORANGE = 1,
	TAO,
	YELLOW,
	BLUE,
	YU,
	TUA,
	WHITE
} color;

void draw(color* colors, int w) {
	for (int i=0; colors[i]!='$'; i++) {
		if (i%w==0) printf(RESET "\n");
		printf("\e[0;10%dm \e[0;10%dm ", colors[i], colors[i]);
	}
	printf(RESET "\n");
}

int main() {

	static color colors[] = {
		#include "taos.bfk"
		,'$'
	};

	draw(colors,98);
  
    return 0;
}