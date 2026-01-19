#include <iostream>

enum EyeColor { Brown, Blue, Green, Gray, Hetrochroma, Other};

int main(int argc, char const *argv[]) {

    EyeColor myEyeColor = Brown;

    std::cout << myEyeColor << std::endl;

    return 0;
}
