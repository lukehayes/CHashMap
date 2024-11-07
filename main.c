#include "map.h"

int main()
{
    Map* map = MapCreate(10);

    MapInsert(map, "speed", "100");
    MapInsert(map, "health", "10");

    MapPrint(map);

    MapDestroy(map);

    return 0;
}
