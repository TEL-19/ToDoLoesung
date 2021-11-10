#include "Liste.hpp"

std::vector<Aufgabe> Liste::getTasks() {
   return _tasks;
}

void Liste::addTask(const Aufgabe &task) {
   _tasks.push_back(task);
}

void Liste::setOwner(std::string owner) {
   _owner = owner;
}

std::string Liste::getName() {
   return _name;
}