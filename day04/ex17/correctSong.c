#include <stdio.h>
#include "header.h"

void	correctSong(struct s_bit *bit, int l, int row, int col, int dist) {
	(void)l;
	for (int i = row; i < row + dist; i++) {
		bit->arr[i] = 1 << (col);
	}
}