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