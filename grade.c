    #include <stdio.h>

int main(int argc, char const *argv[])
{
    int avg_marks;
    printf("Enter your avg marks: ");
    scanf("%d", &avg_marks);
    if (avg_marks >= 90)
    {
        printf("You have an A grade.");
    }
    else if (avg_marks >= 80)
    {
        printf("You have a B grade.");
    }
    else if (avg_marks >= 60)
    {
        printf("You have a C grade.");
    }
    else if (avg_marks >= 33)
    {
        printf("You have a D grade.");
    }
    else
    {
        printf("You have failed.");
    }
    return 0;
}
