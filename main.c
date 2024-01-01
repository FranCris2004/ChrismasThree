// christmastree

#include <stdio.h>
#include <stdint.h>

int draw_triangle(uint8_t height, uint8_t margin, uint8_t cut)
{
    if (cut >= height)
        return -1;
    
    for (size_t i = 1 + cut; i <= height; i++)
    {
        for (size_t j = (height + margin - i); j-- > 0;)
            putc(' ', stdout);

        for (size_t j = 0; j < (i * 2); j++)
            putc('#', stdout);
        
        putc('\n', stdout);
    }
    
    
    return 0;
}

int draw_line(uint8_t height,  uint8_t margin)
{
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = margin; j > 0; j--)
            putc(' ', stdout);

        puts("##");
    }
}

int main()
{
    int ret;
    
    if ((ret = draw_triangle(4, 2, 0)) != 0)
        return ret;

    if ((ret = draw_triangle(6, 0, 2)) != 0)
        return ret;

    ret = draw_line(2, 5);

    return ret;
}
