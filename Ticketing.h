#ifndef TICKETING_H
#define TICKETING_H
#include "Theater.h"
#include "Movie.h"
#include <iostream>
#include <list>
using namespace std;

#define ADMIN_PASSWORD "1234"

class Ticketing {
	int genId = 1000;
	list<Movie> movieList;
public:
	Ticketing();
	~Ticketing();
	int generateId();
	void showMenu();
	void showAdminMenu();
	void showTitle();
	int inputMenu();
	void searchMovie();
	void reserveMovie();
	void reserveCheck(int);
	void reserveCancel();
	void deleteMovie();
	void changeAdmin();
	void initMenu();
	void addMovie();
};

#endif
