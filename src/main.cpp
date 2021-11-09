#include <iostream>
#include "Liste.hpp"
using namespace std;

enum struct s_state {
  main_menu,
  list,
  task,
  person,
  exit
};

s_state state = s_state::main_menu;

int main() {
  Liste *list = new Liste("Liste_1");
  Aufgabe task1("Task1");
  list->addTask(task1);

  Aufgabe task2("C++ Programm fertigstellen");
  list->addTask(task2);

  Aufgabe task3("Für die Klausur lernen");
  list->addTask(task3);

  /*
  * Hier könnte noch user Interaktion zum abrufen und erstelen von Listen/Aufgaben
  * mit Hilfe einer state machine eingebaut werden
  * und die Listen / Aufgaben in einer Datei gespeichert werden
  */
  bool exit = false;
  int eingabe;
  while (!exit )
  {
    switch (state)
    {
    case s_state::main_menu:
      cout << "Hauptmenü:\n";
      cout << "1. Listen:\n";
      cout << "2. Personen:\n";
      cout << "3. Programm beenden\n";
      cin >> eingabe;
      switch (eingabe)
      {
      case 1:
        state = s_state::list;
        break;
      case 2:
        state = s_state::person;
        break;
      case 3:
        state = s_state::exit;
        break;

      default:
        break;
      }
      break;
    case s_state::list:
      cout << "Listen:\n\n";
      cout << endl << "Liste: " << list->getName() << endl;
      for(auto el: list->getTasks()) {
        // cout << "   - " << el.getDescription() << ", due: " << el.getDueDate();
        cout << el;
      }
      cout << endl;
      state = s_state::main_menu;
      break;
    case s_state::task :
      cout << "Aufgaben:\n\n";
      state = s_state::main_menu;
      break;
    case s_state::person:
      cout << "Personen\n\n";
      state = s_state::main_menu;
      break;
    case s_state::exit:
      cout << "Programm wird beendet:\n";
      exit = true;
      break;

    default:
      break;
    }
  }


  return 0;
}