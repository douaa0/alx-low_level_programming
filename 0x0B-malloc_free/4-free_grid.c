#include <stdio.h>		
#include <stdlib.h>
#include "main.h"		
/**		
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function		
 * @grid: the address of the two dimensional grid		
 * @height: height dimension of grid		
 * Return: nothing to return		
 */
void free_grid(int **grid, int height)
		
{	
	int j;	

	for (j = 0; j < height; j++)	
	{
		free(grid[j]);
	}
	free(grid);	
}
