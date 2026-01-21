#include <iostream>
#include <string>

class Book
{
public:
    std::string title;
    std::string author;
    int pages;

    bool isLong(int & pages)
    {

        if (pages > 500){
            return true;
        }else {
            return false;
        }
    }

};


int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "some lady";
    book1.pages = 500;

    std::cout << book1.isLong(book1.pages) << std::endl;

}

