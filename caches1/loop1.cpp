#include <stdio.h>
#include <m5ops.h>

#define HEIGHT 1024
#define WIDTH  768

int image[HEIGHT * WIDTH];

int main(int argc, const char *argv[])
{
    printf("Start Algorithm\n");

    // Reset gem5's statistics
    m5_dump_stats(0, 0);
    m5_reset_stats(0, 0);

    for (unsigned int i = 0; i < WIDTH; i++)
    {
    	for (unsigned int j = 0; j < HEIGHT; j++)
        {
            image[j*WIDTH + i] *= 10;
        }
    }

    // Reset gem5's statistics
    m5_dump_stats(0, 0);
    m5_reset_stats(0, 0);
    
    printf("End Algorithm\n");
    return 0;
}