#include <iostream>


enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

TrafficLight light = RED;

// we can manually assign a specific value
enum ErrorCode {
    SUCCESS = 0,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};


ErrorCode msg = SUCCESS;


enum class Color {
    RED,
    BLUE
};

enum class Mood {
    RED, // OK! No conflict with Color::RED
    HAPPY
};

Color c = Color::RED;
// int x = c; // Error: Cannot implicitly convert
int x = static_cast<int>(c); // OK

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
