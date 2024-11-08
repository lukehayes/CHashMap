#include "map.h"

int main()
{
    Map* map = MapCreate(10);

    MapInsert(map, "speed", "100");
    MapInsert(map, "health", "10");

    MapPrintPair(map, "speed");
    MapPrintPair(map, "luck");
    MapPrintPair(map, "a");


    MapPrint(map);

    MapDestroy(map);

    return 0;
}
