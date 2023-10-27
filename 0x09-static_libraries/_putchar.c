#include <unistd.h> // Include the necessary header for write() function

// Declaration of _putchar function
int _putchar(char c);

int _putchar(char c) {
    return write(1, &c, 1); // 1 represents stdout (standard output)
}
