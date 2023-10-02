#include "main.h"

/**
  * create_file - function to create a file
  * @filename: name of file to create
  * @text_content: text in the file
  * Return: 1 if successful, otherwise -1
  */
int create_file(const char *filename, char *text_content)
{
int fileDesc;
if (!filename)
return (-1);
fileDesc = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fileDesc == -1)
return (-1);
if (text_content)
write(fileDesc, text_content, _strlen(text_content));
close(fileDesc);
return (1);
}

/**
  * _strlen - Returns the length of a string
  * @c: String to count
  *
  * Return: String length
  */
int _strlen(char *c)
{
int cnt = 0;
while (c[cnt])
cnt++;
return (cnt);
}
