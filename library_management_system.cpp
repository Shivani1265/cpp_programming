#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Book class definition
class Book {
public:
    string title;
    string author;
    int year;
    
    Book(string t, string a, int y) : title(t), author(a), year(y) {}
    
    void display() const {
        cout << "The book \"" << title << "\" by " << author << " published in the year " << year << endl;
    }
};

// Library class definition
class Library {
private:
    vector<Book> books;
    
public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully." << endl;
    }
    
    void removeBook(const string& title) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->title == title) {
                books.erase(it);
                cout << "Book removed successfully." << endl;
                return;
            }
        }
        cout << "Book not found." << endl;
    }
    
    void searchBook(const string& title) const {
        for (const auto& book : books) {
            if (book.title == title) {
                book.display();
                return;
            }
        }
        cout << "Book not found." << endl;
    }
    
    void listBooks() const {
        if (books.empty()) {
            cout << "No books available." << endl;
            return;
        }
        for (const auto& book : books) {
            book.display();
        }
    }
};

// Function to handle library operations
void handleLibraryOperations(Library& library) {
    int choice;
    string title, author;
    int year;

    while (true) {
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Search Book\n";
        cout << "4. List All Books\n";
        cout << "5. Exit to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left in the buffer

        switch (choice) {
            case 1:
                cout << "Enter the name of the book: ";
                getline(cin, title);
                cout << "Enter the author's name of the mentioned book: ";
                getline(cin, author);
                cout << "Enter the year of publication: ";
                cin >> year;
                cin.ignore(); // To ignore the newline character left in the buffer
                library.addBook(Book(title, author, year));
                break;
            case 2:
                cout << "Enter the book to remove: ";
                getline(cin, title);
                library.removeBook(title);
                break;
            case 3:
                cout << "Enter title of the book to search: ";
                getline(cin, title);
                library.searchBook(title);
                break;
            case 4:
                library.listBooks();
                break;
            case 5:
                return; // Exit the function to return to the main menu
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

// Main function
int main() {
    Library library;
    int types;

    while (true) {
        cout << "\n\t\t\tLibrary Management System\t\t\t\n";
        cout << "1. Literary Classics\n";
        cout << "2. Influential Non-Fiction\n";
        cout << "3. Influential Science Fiction & Fantasy\n";
        cout << "4. Thriller\n";
        cout << "5. Educational Books\n";
        cout << "6. Exit\n";
        cout << "Enter the type of book: ";
        cin >> types;
        cin.ignore();

        switch (types) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                handleLibraryOperations(library);
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
