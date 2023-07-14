#define PNG_DEBUG 3
#include <png.h>

#include <stdio.h>

static int readPngHeader(char* filename)
{
        unsigned char header[8];

        FILE *fp = fopen(filename, "rb");
        if (!fp)
                return -4;

        fread(header, 1, 8, fp);
        if (png_sig_cmp(header, 0, 8))
                return -5;

        return 0;
}


int main(int argc, char **argv)
{
    return readPngHeader(argv[1]);
}
