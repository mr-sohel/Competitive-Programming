#include <bits/stdc++.h>

using namespace std;

struct mystruct {
    int age;
    float height;
};

int main()
{
    struct mystruct s1;
    s1.age = 18;
    s1.height = 5.5;
    // printf("%d\n", s1.age);
    // printf("%f\n", s1.height);
    struct mystruct* ps1;
    ps1 = &s1;
    //(*ps1).age = 21;
    ps1 -> age = 21;
    //(*ps1).height = 5.7;
    ps1 -> height = 5.7;
    printf("%d\n", s1.age);
    printf("%f\n", s1.height);

    mystruct* ps = (mystruct*)malloc(sizeof(mystruct));  // allocating memory for mystruct in heap memory
    ps->age = 25;
    ps->height = 5.9;
    printf("%d\n", ps->age);
    printf("%f\n", ps->height);
    free(ps); // to clear heap memory.
    ps = NULL;

    return 0;
}