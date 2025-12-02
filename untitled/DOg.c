#include <stdio.h>
#include <string.h>
void Woof(struct Dog *d) { printf("woof"); }

void BMI(struct Dog *d);

struct Dog {
    double Weight;
    char Name[20];
    int speed;
    int height;
    int x;
};



void walk(struct Dog *d) {
    d->x += d->speed;
}

void run(struct Dog *d) {
    d->x += 2 * d->speed;
}


int main(int argc, char *argv[]) {
    struct Dog GoodDog;
    GoodDog.Weight = 20.3;
    strcpy(GoodDog.Name, "Max");
    GoodDog.speed = 13;
    GoodDog.height = 70;
    GoodDog.x = 0;
    walk(&GoodDog);
    run(&GoodDog);
    printf("the X is:%d", GoodDog.x);


    // write in termnal woof
    // make the d0g walk, run ( 2 times walk )
    // what is the bmi
    return 0;
}
