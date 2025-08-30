#include <iostream>

class Book{
    private:
        // data members
        std::string name;
        int id;
        std::string author;
        int price;
    public:
        // function methods
        Book(){}
        
        // parameterised constr
        Book(std::string name, int id, std::string author, int price){
            this->name = name;
            this->id = id;
            this->author = author;
            this->price = price;
        }
        
        // getter & setter
        void set(std::string name, int id, std::string author, int price){
            this->name = name;
            this->id = id;
            this->author = author;
            this->price = price;
        }

        void display(){
            std::cout << "Name: " << this->name << std::endl;
            std::cout << "Id: " << this->id << std::endl;
            std::cout << "Author: " << this->author << std::endl;
            std::cout << "Price: " << this->price << std::endl;
        }
        
        std::string get_name(){
            return this->name;
        }
        int get_id(){
            return this->id;
        }
        int get_price(){
            return this->price;
        }
        std::string get_author(){
            return this->author;
        }

        ~Book(){}
};

int main(){
    Book b1;
    b1.set("Dune",32,"Dennis",900);
    b1.display();
}