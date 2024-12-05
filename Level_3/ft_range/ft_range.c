/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*dest;
	int	range;
	int	i;

	if (start > end)
	{
		range = start - end;
		dest = (int *)malloc(sizeof(int) * range);
		i = 0;
		while (start >= end)
			dest[i++] = start--;
		return (dest);
	}
	range = end - start;
	dest = (int *)malloc(sizeof(int) * range);
	if (!dest)
		return (0);
	i = 0;
	while (start <= end)
		dest[i++] = start++;
	return (dest);
}
