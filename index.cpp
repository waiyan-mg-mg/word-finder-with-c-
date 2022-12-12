#include <stdio.h>
int findNcc();
int findWinHtut();
char ncc[17] = {'N', 'a', 't', 'i', 'o', 'n', 'a', 'l', 'C', 'y', 'b', 'e', 'r', 'C', 'i', 't', 'y'};
char winhtut[7] = {'w', 'i', 'n', 'h', 't', 'u', 't'};
// NationalCyberCity , winhtut

int main()
{
    int count = findNcc();
    printf("%d \n", count);
    int counts = findWinHtut();
    printf("%d", counts);
    return 0;
}

int findNcc()
{
    int count = 0;
    FILE *fptr = fopen("words.txt", "r");
    char charactor = fgetc(fptr);
    while (!feof(fptr))
    {

        if (charactor == 'N')
        {
            charactor = fgetc(fptr);
            for (int i = 1; i < 17; i++)
            {
                char key = ncc[i];
                if (charactor == key)
                {
                    if (i == 16 && ncc[i] == 'y')
                    {
                        count++;
                        charactor = fgetc(fptr);
                        break;
                    }
                    charactor = fgetc(fptr);
                }
                else
                {
                    charactor = fgetc(fptr);
                    break;
                }
            }
        }
        else
        {
            charactor = fgetc(fptr);
        }
    }
    return count;
}

int findWinHtut()
{
    int count = 0;
    FILE *fptr = fopen("words.txt", "r");
    char charactor = fgetc(fptr);
    while (!feof(fptr))
    {

        if (charactor == 'w')
        {
            charactor = fgetc(fptr);
            for (int i = 1; i < 7; i++)
            {
                char key = winhtut[i];
                if (charactor == key)
                {
                    if (i == 6 && winhtut[i] == 't')
                    {
                        count++;
                        charactor = fgetc(fptr);
                        break;
                    }
                    charactor = fgetc(fptr);
                }
                else
                {
                    charactor = fgetc(fptr);
                    break;
                }
            }
        }
        else
        {
            charactor = fgetc(fptr);
        }
    }
    return count;
}