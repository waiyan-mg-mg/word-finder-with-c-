int count = 0;
FILE *fptr = fopen("words.txt", "r");
char charactor = fgetc(fptr);
while (!feof(fptr))
{
    if (charactor == 'c')
    {
        charactor = fgetc(fptr);
        if (charactor == 'o')
        {
            charactor = fgetc(fptr);
            if (charactor == 'd')
            {
                charactor = fgetc(fptr);
                if (charactor == 'e')
                {
                    count++;
                    charactor = fgetc(fptr);
                }
                else
                {
                    charactor = fgetc(fptr);
                }
            }
            else
            {
                charactor = fgetc(fptr);
            }
        }
        else
        {
            charactor = fgetc(fptr);
        }
    }
    else
    {
        charactor = fgetc(fptr);
    }
}
printf("%d", count);