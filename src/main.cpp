#include <iostream>
#include "Liste.hpp"
using namespace std;


int main() {
  Liste *list = new Liste("Liste_1");
  Aufgabe task1("Task1");
  list->addTask(task1);

  Aufgabe task2("C++ Programm fertigstellen");
  list->addTask(task2);

  Aufgabe task3("Für die Klausur lernen");
  list->addTask(task3);

  cout << endl << "Liste: " << list->getName() << endl;
  for(auto el: list->getTasks()) {
    cout << "   - " << el.getDescription() << ", due: " << el.getDueDate();
  }

  cout << endl;

  /*
  * Hier könnte noch user Interaktion zum abrufen und erstelen von Listen/Aufgaben
  * mit Hilfe einer state machine eingebaut werden
  * und die Listen / Aufgaben in einer Datei gespeichert werden
  */
  return 0;
}