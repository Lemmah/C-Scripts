#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp
{
    char name[15];
    int age;
    int salary;
    char address[30];
};

int main(void)
{
    char const binFileName[] = "sampledata.bin";
    struct emp emp1[5] =
    {
        { "Yoda",  23, 45000, "Asia"      },
        { "Darth", 34,  2344, "N America" },
        { "Jabba", 22,  5566, "Africa"    },
        { "Luke",  33,  3399, "S America" },
        { "Leia",  44,  6677, "Europe"    },
    };

    FILE *binaryFile;

    binaryFile = fopen(binFileName, "wb");
    if (binaryFile != 0)
    {
        if (fwrite(emp1, sizeof(emp1), 1, binaryFile) != 1)
        {
            fprintf(stderr, "Failed to write to %s\n", binFileName);
            exit(1);
        }
        fclose(binaryFile);
    }

}
