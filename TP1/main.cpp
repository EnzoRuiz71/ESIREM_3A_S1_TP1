#include "date.h"
#include "reader.h"
#include "book.h"
#include "borrow.h"
#include "writer.h"
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

  	//Test de la classe Writer
  Writer writer1(1, "Raphou", "Pagou", Date (2001,03,05));
  std::cout << "WRITER 1" << std::endl;
  std::cout << "ID : " << writer1.id() << std::endl;
  std::cout << "Nom : " << writer1.first_name() << " " << writer1.last_name() << std::endl;
  std::cout << "Date de naissance : " << toString(writer1.birth_date()) << std::endl << std::endl;

  Writer writer2(2, "J. K.", "Rowling", Date (1965,07,31));
  std::cout << "WRITER 2" << std::endl;
  std::cout << "ID : " << writer2.id() << std::endl;
  std::cout << "Nom : " << writer2.first_name() << " " << writer2.last_name() << std::endl;
  std::cout << "Date de naissance : " << toString(writer2.birth_date()) << std::endl << std::endl;


  	//Test de la classe Book
  Book book1("Oui-Oui et la cité des Sciences", writer1, "Français", "Enfants", Date (2021,12,10), "2-8756-1354-5");
  std::cout << "BOOK 1" << std::endl;
  std::cout << "Titre : " << book1.title() << std::endl;
  std::cout << "Auteur : " << writer1.first_name() << " " << writer1.last_name() << std::endl;
  std::cout << "Langue : " << book1.language() << std::endl;
  std::cout << "Catégorie : " << book1.type() << std::endl;
  std::cout << "Date de publication : " << toString(book1.date()) << std::endl;
  std::cout << "ISBN : " << book1.ISBN() << std::endl << std::endl;

  Book book2("Harry Potter", writer2, "Anglais", "Fantastique", Date (2004,10,27), "4-8468-1245-6");
  std::cout << "BOOK 2" << std::endl;
  std::cout << "Titre : " << book2.title() << std::endl;
  std::cout << "Auteur : " << writer2.first_name() << " " << writer2.last_name() << std::endl;
  std::cout << "Langue : " << book2.language() << std::endl;
  std::cout << "Catégorie : " << book2.type() << std::endl;
  std::cout << "Date de publication : " << toString(book2.date()) << std::endl;
  std::cout << "ISBN : " << book2.ISBN() << std::endl << std::endl;


  	//Test de la classe Reader
  Reader reader1("enzoruiz71", "Enzo", "Ruiz", book1);
  Reader reader2("raphpagot", "Raphaëlle", "Pagot", book2);


  std::cout << "READER 1 :" << std::endl;
  std::cout << "Nom d'utilisateur : " << reader1.user_id() << std::endl;
  std::cout << "Prénom : " << reader1.first_name() << std::endl;
  std::cout << "Nom : " << reader1.last_name() << std::endl;
  std::cout << "Dernier ISBN emprunté : " << book1.ISBN() << std::endl << std::endl;

  std::cout << "READER 2" << std::endl;
  std::cout << "Nom d'utilisateur : " << reader2.user_id() << std::endl;
  std::cout << "Prénom : " << reader2.first_name() << std::endl;
  std::cout << "Nom : " << reader2.last_name() << std::endl;
  std::cout << "Dernier ISBN emprunté : " << book2.ISBN() << std::endl << std::endl;


  	//Test de la classe Borrow
  Borrow borrow1(Date (2021,12,9), book1, reader1);
  std::cout << "BORROW 1" << std::endl;
  std::cout << "Date : " << toString(borrow1.date()) << std::endl;
  std::cout << "ISBN : " << book1.ISBN() << std::endl;
  std::cout << "Utilisateur : " << reader1.user_id() << std::endl << std::endl;

  Borrow borrow2(Date (2021,12,2), book2, reader2);
  std::cout << "BORROW 2" << std::endl;
  std::cout << "Date : " << toString(borrow2.date()) << std::endl;
  std::cout << "ISBN : " << book2.ISBN() << std::endl;
  std::cout << "Utilisateur : " << reader2.user_id() << std::endl << std::endl;

  return 0;
}