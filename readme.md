# C HashMap

This project is a simple Hash Map data structure for C. It is a VERY niave implementation but it works for my purposes.

### Building

You can just take `map.h` and `map.c` and add them to your own projects then build them with a makefile
or CMake etc.

Alternatively:

    * clone the project
    * cd in to project
    * mkdir build
    * cd build
    * cmake ..
    * use the binary that has been built

### Usage

> [!NOTE]
> As stated above, this implementation is very naive but it does work. Use at your own peril.

> [!TIP]
> I welcome pull requests.

---

Create a new instance of the HashMap:

```
Map* map = MapCreate(10);
```

Insert a new value into the HashMap:

```
MapInsert(map, "speed", "100");
```

Retreive a value from the HashMap:

```
MapPair* data = MapGet(map, "speed"); // Should return 100 as a char*
```

Deallocate the entire map from memory:

```
MapDestroy(map);
```

Get the capacity (maximum number of elements):

```
MapGetCapacity(map);
```

Get the size (current number of non-null elements inside the map):

```
MapGetSize(map);
```

#### Helper functions


Print a map to stdout for visualisation:

```
MapPrint(map); // Print the entire map
MapPrintValue(map, "speed"); // Print the specific value from the HashMap.
```

### TODO

- [ ] Name collisions aren't dealt with at all. Currently a larger initial size solves this problem *most* of the time.
- [ ] Check if key already exists in the map.
- [ ] Add way to remove a row from the map.

---

### Implementation

Values are stored in a `MapPair` struct. It has two members - key and a value
and they are both `void*`. All data should be stored as a `char*` and the user
should use something like `atoi()` if the data is stored as an `int` for example.

```
typedef struct MapPair
{
    void* key;
    void* value;
} MapPair;
```

All of the `MapPairs` are stored in a `Map` struct consisting of a pointer
to a `MapPair*` a `size_t capacity` that represents the max size
and a `size_t size` representing the current size of the `Map`.


```
typedef struct Map
{
    MapPair* data;
    size_t capacity;
    size_t size;
} Map;
```
