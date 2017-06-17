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
    char const filename[] = "sampledata.bin";
    struct emp emp1[5] =
    {
        { "Yoda",  23, 45000, "Asia"      },
        { "Darth", 34,  2344, "N America" },
        { "Jabba", 22,  5566, "Africa"    },
        { "Luke",  33,  3399, "S America" },
        { "Leia",  44,  6677, "Europe"    },
    };
    struct emp emp2[5];
    FILE *ifp;
    FILE *ofp;
    int i;

    ofp = fopen(filename, "wb");
    if (ofp != 0)
    {
        if (fwrite(emp1, sizeof(emp1), 1, ofp) != 1)
        {
            fprintf(stderr, "Failed to write to %s\n", filename);
            exit(1);
        }
        fclose(ofp);
    }
}
