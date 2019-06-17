#include "header.h"
#include <stdio.h>

unsigned int setPlace(unsigned int parkingRow, int pos) {
	if (!(parkingRow & (1 << pos))) {
		parkingRow |= (1 << pos);
	}
	return parkingRow;
}