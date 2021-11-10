#include "Aufgabe.hpp"

std::string Aufgabe::getDescription() {
   return _description;
}

std::string Aufgabe::getDueDate() {
   return std::asctime(std::localtime(&_todo));
}

void Aufgabe::setDescription(std::string desription) {
   _description = desription;
}

std::ostream& operator<<(std::ostream &os, const Aufgabe& obj) {
   os << "   - " << obj._description << ", due: " << std::asctime(std::localtime(&obj._todo));
   return os;
}