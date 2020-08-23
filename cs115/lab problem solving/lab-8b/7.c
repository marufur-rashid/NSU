#include<stdio.h>
void circle ()
{
    printf("  **\n");
    printf("*     *\n");
    printf("*     *\n");
    printf("  **\n");

}

void triangle()
 {
    printf("    *\n");
    printf("   * *\n");
    printf("  *   *\n");
    printf(" *     *\n");
    printf("*********\n");
}

void invertedV() {
    printf("    *\n");
    printf("   * *\n");
    printf("  *   *\n");
    printf(" *     *\n");
}


void square() {
    printf(" *******\n");
    printf(" *     *\n");
    printf(" *     *\n");
    printf(" *     *\n");
    printf(" *******\n");
}

void show_rocket()
{
  triangle();
  square();
  invertedV();
}

void show_male()
{
    circle();
    square();
    invertedV();
}
void show_female()
{
    circle();
    triangle();
    invertedV();
}
int main ()
{
    show_rocket();
    printf("\n \n");
    show_male();
    printf("\n \n");
    show_female();
    return 0;
}


