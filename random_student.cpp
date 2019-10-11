#include <stdio.h>
#include <conio.h>

#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()


int main()
{
    srand(time(NULL));
    int select = 1 + rand()%16;
    printf("Ramdom number: %d\n", select);
    switch(select)
    {
        printf("SV may man duoc chon:\n");
        case 1:
            printf("Le Tri Dung\n");
            break;

        case 2:
            printf("Duong Hoang Dat\n");
            break;

        case 3:
            printf("Lan Nhat Hao\n");
            break;

        default:
            printf("Ngoai le");
    }

    return 0;
}
