#include <stdio.h>
#include <string.h>

typedef enum {
    C,
    F,
    K
} TempUnit;

typedef struct {
    float value;
    TempUnit unit;
} Temperature;

char *enumToString(TempUnit k) {
    switch (k) {
        case C: return "CELSIUS";
        case F: return "FAHRENHEIT";
        case K: return "KELVIN";
        default: return "UNKNOWN";
    }
}


int main() {
    Temperature temp = {23.23, C};

    printf("temp is : %.1f %s", temp.value, enumToString(temp.unit));

    return 0;
}
