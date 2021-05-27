#ifndef AUFGABE_HPP
#define AUFGABE_HPP
#include <string>
#include <ctime>

class Aufgabe {
   std::string _description;
   std::time_t _todo;
public:
   Aufgabe(std::string description): _description(description), _todo(std::time(nullptr)) {}
   std::string getDescription();
   void setDescription(std::string desription);
   std::string getDueDate();
};

#endif /* AUFGABE_HPP */