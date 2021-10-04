#include <string>
#include <list>
#include <iostream>

using namespace std;

int main() {
   list<string> personnel;
   
   // ajouter des elements
   personnel.ajouter("ania");

   // ajouter un element a la quatrieme position
   list<string>::iterator pos = personnel.begin();
   pos++; pos++; pos++;
   personnel.insert(pos, "Sage Stephane");
   
   // supprimer l'element a la deuxieme position
   pos = personnel.begin();
   pos++;
   personnel.erase(pos);
   
   // afficher tous les elements
   for (pos = personnel.begin(); pos != personnel.end(); pos++)
      cout << *pos << endl;

   return 0;
}

