#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Name: ");
    string name = get_string();
    int n = 0;

    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
    // for (int i = 0, n = strlen(name); i < n; i++)
    // {
        //char init = name[0];
        //  for (int j = 0; j < name[i]; j++)
        //  {
        //      char init = name[i];
        //      printf("%c", init[j]);
        //  }
        //printf("%c", name[0]);
    // }
    // printf("%c", name[0]);
}