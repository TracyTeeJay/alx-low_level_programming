#include "main.h"

/**
  * read_textfile - function to read a text file and print to standard output
  * @filename: the file to be read
  * @letters: gives the number of letters to write
  * Return: the read file
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fileDesc, rdr;
char *buffr = malloc(sizeof(char *) * letters);
if (!buffr)
return (0);
if (!filename)
return (0);
fileDesc = open(filename, O_RDONLY, 0600);
if (fileDesc == -1)
return (0);
rdr = read(fileDesc, buffr, letters);
write(STDOUT_FILENO, buffr, rdr);
free(buffr);
close(fileDesc);
return (rdr);
}
