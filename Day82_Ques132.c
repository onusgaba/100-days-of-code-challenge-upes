//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;

    light = RED;

    if (light == RED) {
        printf("Stop");
    }
    else if (light == YELLOW) {
        printf("Wait");
    }
    else if (light == GREEN) {
        printf("Go");
    }

    return 0;
}
