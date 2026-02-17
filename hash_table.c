#include <stdio.h>

/*
Hash Table Example
Real-life applications:
- Databases like Redis, MongoDB
- Browser cache
Reason: Hash tables allow fast key-based access
*/

int main() {
    char keys[2][10] = {"name", "age"};
    char values[2][10] = {"Anton", "17"};

    for(int i = 0; i < 2; i++)
        printf("%s: %s\n", keys[i], values[i]);

    return 0;
}
