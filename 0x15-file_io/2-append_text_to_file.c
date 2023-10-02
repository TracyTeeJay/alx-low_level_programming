#include "main.h"

/**
  * append_text_to_file - function to copy text from file and add it elsewhere
  * @filename: the name of the file to be appended
  * @text_content: the text to be copied
  * Return: 1 if successful otherwise -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc;

	if (!filename)
		return (-1);

	fileDesc = open(filename, O_WRONLY | O_APPEND);
	if (fileDesc == -1)
		return (-1);

	if (text_content)
	{
		if (write(fileDesc, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fileDesc);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @ch: String to count
  * Return: String length
  */
int _strlen(char *ch)
{
	int cnt = 0;

	while (ch[cnt])
		cnt++;

	return (cnt);
}
