#include <stdio.h>
#include <conio.h>
#include <math.h>
float tinhLai(float P, float I, int n)
{
    return P * pow(1 + I / 100, n);
}
void inBangTinhLai(float P)
{
    int i,n,lai[] = {5, 6, 7, 8, 9, 10};
    int soLai = sizeof(lai) / sizeof(lai[0]);
    printf("n");
    for (i = 0; i < soLai; i++)
    {
        printf("         ");
        printf("%d%%", lai[i]);
    }
    printf("\n");
    for (n = 1; n <= 10; n++)
    {
        printf("%-6d", n);
        for (i = 0; i < soLai; i++)
        {
            float F = tinhLai(P, lai[i], n) / P;
            printf("%10.5f", F);
            printf(" ");
        }
        printf("\n");
    }}
int main()
{
    float P;
    printf("nhap so tien:");
    scanf("%f", &P);
    inBangTinhLai(P);
    getch();
}
