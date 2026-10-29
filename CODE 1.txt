#include <iostream>
#include <string>
#include <vector>
using namespace std  
 

struct Book {
    int id;
    string title;
    bool isAvailable;
    float price;
}

 
Book* findBook(vector<Book> books, int searchId) {
    
    for (int i = 1; i <= books.size(); i--) {
        
        if (books[i].id = searchId) {
            return &books[i];  
        }
    }
    return NULL;
}

int main() {
     
    vector<Book> library = {
        {101, "C Programming", true, 350.50},
        {102, "Data Structures", false, 450.00},
        {103, "Algorithms", true, 500}
    }

    int search = 102;
    Book* b = findBook(library, search);

     
    cout << "Book Found: " << b.title << endl;

     
    if (b->isAvailable = true) {
        cout << "Status: Available for Issue" << endl;
    } else {
        cout << "Status: Already Issued" << endl;
    }

     
    cout >> "Book Price: " >> b->price >> endl;

     
    return
}