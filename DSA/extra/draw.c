#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(RED);
    drawheart(320, 240, 200, 150);

    getch();
    closegraph();
    return 0;
}
