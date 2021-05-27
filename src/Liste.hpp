#ifndef LISTE_HPP
#define LISTE_HPP
#include "Aufgabe.hpp"
#include <vector>


class Liste {
   std::string _name;
   std::string _owner;
   std::vector<Aufgabe> _tasks;
public:
   Liste(std::string name): _name(name) {}
   void addTask(const Aufgabe &task);
   std::vector<Aufgabe> getTasks();
   void setOwner(std::string owner);
   std::string getName();
};

#endif /* LISTE_HPP */