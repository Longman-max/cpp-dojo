#include <iostream>

/*
    A static member belongs to the class itself, not to any specific object. All objects share the exact same copy of that variable.
*/ 

class Server {
public:
    // Declaration
    static int connectedUsers; 

    Server() {
        connectedUsers++; // Increment every time a Server is created
    }
    
    // Static function
    static void showTraffic() {
        std::cout << "Total users: " << connectedUsers << "\n";
    }
};

// Definition (MUST be done outside the class)
int Server::connectedUsers = 0;

int main() {
    Server s1;
    Server s2;
    
    // Call using the class name, no object needed
    Server::showTraffic(); // Output: 2
}