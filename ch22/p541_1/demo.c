#include <stdio.h>
int main()
{
    // FILE *in = fopen("../material/in.dat", "rb");
    // FILE *out = fopen("../material/out.dat", "wb");

    if (!stdin || !stdout)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char buffer[4096];
    size_t n;

    while ((n = fread(buffer, 1, sizeof(buffer), stdin)) > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", (int)buffer[i]);
        }
        
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}