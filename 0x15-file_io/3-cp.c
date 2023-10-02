#include "main.h"

/**
  * main - Entry point
  * @argc: argument counter
  * @argv: pointer to the argument vector
  * Return: zero upon success
  */
int main(int argc, char **argv)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fileCopy(argv[1], argv[2]);
exit(0);
}

/**
  * fileCopy - function to copy file from source to desination
  * @src: the file to copy
  * @dest: the location to be copied to
  * Return: nothing
  */
void fileCopy(const char *src, const char *dest)
{
int ffileDesc, tfileDesc, rdr;
char buffr[1024];
ffileDesc = open(src, O_RDONLY);
if (!src || ffileDesc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
exit(98);
}
tfileDesc = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((rdr = read(ffileDesc, buffr, 1024)) > 0)
{
if (write(tfileDesc, buffr, rdr) != rdr || tfileDesc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
exit(99);
}
}
if (rdr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
exit(98);
}
if (close(ffileDesc) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffileDesc);
exit(100);
}
if (close(tfileDesc) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tfileDesc);
exit(100);
}
}
