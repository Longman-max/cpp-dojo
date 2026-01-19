#include <iostream>
#include <vector>


int main(int argc, char const *argv[])
{

        // Token tokens[100]; // --> the old way what if we have 101 tokens? Crash
    // int token_count = 0;


    // to create it no size needed
    std::vector<Token> tokens;

    // add to it push back
    tokens.push_back(my_new_token);

    // to loop through it (the range-based for loop)
    for (const auto& toekn : tokens)
    {
        std::cout << token.type << "\n";
    }
    

    return 0;
}



// why it is better:
// no maloc and no realloc, noo counting indexes, it just works
