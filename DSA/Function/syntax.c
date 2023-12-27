// In this program i am going to write the syntax of function

#include <stdio.h>
//______________________________________________________________________________________________________________________________________
// First Type:- Without return type and without parameter
void add(); // Function Deceleration & prototype
int main()
{
    add(); // Function Calling
    return 0;
}
void add() // Function Defination
{
    int x = 10, int y = 20;
    printf("/%d", x + y);
}
//______________________________________________________________________________________________________________________________________
// Second Type: without return type, with paramater
void add(int, int);
int main()
{
    int x = 100, y = 200;
    add(x, y); // Actual parameter because it is used by calling function.
    return 0;
}
void add(int x, int y) // Formal Parameter
{
    printf("%d", x + y);
}
//_______________________________________________________________________________________________________________________________________
// third type: With return type without parameter
int add();
void main()
{
    int ans = add();
    printf("%d", ans);
}
int add()
{
    int x = 10, int y = 20;
    return (x + y;)
}
//________________________________________________________________________________________________________________________________________
// Fourth Type: With return type with parameter
int add(int, int);
int main()
{
    int x = 100, y = 200;
    int ans = add(x, y);
    printf("%d", ans);
    return 0;
}
int add(int x, int y)
{
    return (x + y);
}