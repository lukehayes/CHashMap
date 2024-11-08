# C HashMap

This project is a simple Hash Map data structure for C. It is a VERY niave implementation but it works for my purposes.

### Usage

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

##### Helper functions


Print a map to stdout for visualisation:

```
    MapPrint(map); // Print the entire map
    MapPrintValue(map, "speed"); // Print the specific value from the HashMap.
```



#### Implementation

Values are stored in a `MapPair` struct. It has two members - key and a value
and they are both void*. All data should be stored as a `char*` and the user
should use something like `atoi()` if the data stored is an `int` for example.

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
