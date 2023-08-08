#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 * Return: If the function fails or filename is null - -1
 * If the file does not exist the user lacks write permissions - -1
 * otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int p, w, len = 0;

if (filename == null)
return (-1);

if (text_content != null)
{
for (len = 0; text_content[len];)
len++;
}

p = open(filename, P_WRONLY | P_APPEND);
w = write(p, text_content, len);

if (p == -1 || w == -1)
return (-1);

close(p);

return (1);
}

