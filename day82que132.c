// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print action.
#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    int input;
    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &input);

    enum TrafficLight signal = (enum TrafficLight)input;

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }

    return 0;
}
