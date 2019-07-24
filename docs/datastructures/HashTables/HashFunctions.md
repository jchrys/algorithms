# Hash Function
A hash function is any funtion that can be used to map data of arbitrary size onto data of a fixed size. We use Hash function to implement Hash Table

## DJB2 Hash Function

- C++
```cpp
unsinged long long djb2(char *str) {
    unsigned long long hash = 5381;
    int c;
    while ((c = *(str++))) {
        hash = (hash << 5) + hash + c;
    }
    return hash;
}
```
[code](Codes/DataStructures/HashTables/HashFunctions/djb2.cpp)
input: "hello world"
output: 13876786532495509697
