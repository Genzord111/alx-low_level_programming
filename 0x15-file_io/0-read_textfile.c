#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytesRead, bytesWritten;
    char *buffer;

    if (filename == NULL)
        return 0;

    
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

   
    buffer = malloc(letters);
    if (buffer == NULL)
    {
        close(fd);
        return 0;
   }

    bytesRead = read(fd, buffer, letters);

    if (bytesRead == -1)
    {
        perror("Error reading from file");
        free(buffer);
        close(fd);
        return 0;
    }

    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

    if (bytesWritten == -1 || (size_t)bytesWritten != (size_t)bytesRead)
    {
        perror("Error writing to standard output");
        free(buffer);
        close(fd);
        return 0;
    }

    free(buffer);
    close(fd);

    return bytesRead;
}
