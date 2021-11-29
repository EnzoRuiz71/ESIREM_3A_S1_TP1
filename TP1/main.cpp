//#include "borrow.h"
#include "date.h"
#include "reader.h"
#include "book.h"
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {

	//Test de la classe Date
  Date a_day(2001,12,31);
  std::cout << "a day: " << toString(a_day) << std::endl;
  std::cout << "day #" << dayOfYear(a_day) << std::endl;
  a_day.next();
  std::cout << "a day++: " << toString(a_day) << std::endl;
  a_day.back();
  std::cout << "a day: " << toString(a_day) << std::endl << std::endl;

  	//Test de la classe Reader
  Reader reader1("enzoruiz71", "Enzo", "Ruiz", "2-7654-1005-7");
  Reader reader2("raphpagot", "Raphaëlle", "Pagot", "978-1-2345-6789-7");


  std::cout << "READER 1 :" << std::endl;
  std::cout << "Nom d'utilisateur : " << reader1.user_id() << std::endl;
  std::cout << "Prénom : " << reader1.first_name() << std::endl;
  std::cout << "Nom : " << reader1.last_name() << std::endl;
  std::cout << "Dernier ISBN emprunté : " << reader1.borrowed_ISBN() << std::endl << std::endl;

  std::cout << "READER 2" << std::endl;
  std::cout << "Nom d'utilisateur : " << reader2.user_id() << std::endl;
  std::cout << "Prénom : " << reader2.first_name() << std::endl;
  std::cout << "Nom : " << reader2.last_name() << std::endl;
  std::cout << "Dernier ISBN emprunté : " << reader2.borrowed_ISBN() << std::endl << std::endl;
  
  	//Test de la classe Book
  Book book1("Oui-Oui et la cité des Sciences", "Raphou", "Français", "Enfants", a_day, "2-8756-1354-5");
  std::cout << "BOOK 1" << std::endl;
  std::cout << "Titre : " << book1.title() << std::endl;
  std::cout << "Auteur : " << book1.writer() << std::endl;
  std::cout << "Langue : " << book1.language() << std::endl;
  std::cout << "Catégorie : " << book1.type() << std::endl;
  //PROBLEME std::cout << "Date de publication : " << book1.date() << std::endl;
  std::cout << "ISBN : " << book1.ISBN() << std::endl << std::endl;

  return 0;
}