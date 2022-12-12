#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	FILE *fp;
	char str[]="and that piece of art is useful\" -Dora Korpar, 2015-10-19";
	fp=fopen("file.txt","w");
	fwrite(str, 1, sizeof(str), fp);
	return (0);
}
