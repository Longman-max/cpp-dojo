/*
	A **Destructor** is called automatically when an object goes out of scope or is explicitly deleted.
 	It is used to clean up resources, such as closing files or freeing memory allocated with `new`.
*/
#include <iostream>


class BlackBox {
public:
    BlackBox() {
        std::cout << "Flight Recorder: ON" << std::endl;
    }

    // Destructor
    ~BlackBox() {
        std::cout << "Flight Recorder: Saving data and shutting down..." << std::endl;
    }
};
