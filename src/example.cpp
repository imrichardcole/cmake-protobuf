#include <iostream>
#include "sample.pb.h"

int main() {
    tutorial::AddressBook address_book;
    tutorial::Person * person = address_book.add_people();
    person->set_name("Richard");
    person->set_id(256);
    person->set_email("imrichardcole@gmail.com");
    std::cout << "This will be my protobuf example code" << std::endl;
}