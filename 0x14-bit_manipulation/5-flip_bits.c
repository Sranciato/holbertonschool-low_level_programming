#include "holberton.h"
/**
 * flip_bits - return amount of bits needed to be flipped.
 * @n: first number given.
 * @m: second number given.
 * Return: number of flips.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int flip = 0;
	unsigned long int shift, and, mshift, mand, nbin[64], mbin[64];


	for (i = 63; i >= 0; i--)
	{
		shift = n >> i;
		and = shift & 1;
		nbin[i] = and;
		mshift = m >> i;
		mand = mshift & 1;
		mbin[i] = mand;
		if (nbin[i] != mbin[i])
			flip += 1;
	}
	return (flip);
}
