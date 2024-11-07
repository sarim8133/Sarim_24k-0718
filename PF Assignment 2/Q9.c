#include <stdio.h>
#include <string.h>

void display(char grid[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}

void game(char grid[5][5], int *px, int *py, char move) {
    int x = *px;
    int y = *py;

    switch (move) {
		case 'W': 
		x--; 
		break; 
        
		case 'S': 
		x++;
		break; 
        
		case 'A': 
		y--; 
		break; 
        
		case 'D': 
		y++;
		break; 
        
		case 'Q':
		return; 
        
		default: 
            printf("Invalid move!\n");
            return;
    }

    if (x < 0 || x >= 5 || y < 0 || y >= 5) {
        printf("Move out of bounds!\n");
        return;
    }
    if (grid[x][y] == 'X') {
        printf("You hit an obstacle!\n");
        return;
    }
    if (grid[x][y] == 'I') {
        printf("Item aquired!\n");
    }

    grid[*px][*py] = ' ';
    *px = x;
    *py = y;
    grid[*px][*py] = 'P';
}

int main() {
    char grid[5][5] = {
        { ' ', ' ', 'I', 'X', ' ' },
        { ' ', 'X', ' ', ' ', ' ' },
        { 'I', ' ', 'X', 'X', ' ' },
        { ' ', ' ', ' ', 'I', 'X' },
        { ' ', 'X', ' ', ' ', 'P' }
    };
    int px = 4, py = 4; 
    char move; 
    printf("Welcome to the Grid Game!\n");
    
	do {
        display(grid);
        printf("Enter a Move (W: up, S: down, A: left, D: right, Q: quit): ");
        scanf(" %c", &move);

        if (move != 'Q') {
            game(grid,&px,&py,move); 
        }

    } while (move != 'Q');
    printf("Game Over!\n");
    return 0;
}


	
	

