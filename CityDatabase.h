#ifndef CITYDATABASE_H
#define CITYDATABASE_H

#include <iostream>
#include <fstream>
#include "city.h"
#include "LinkBasedQueue.h"
#include "BST.h"
#include "HashTable.h"
#include "HitCounter.h"

class CityDatabase
{
private:
	// Data structures will go here
	LinkBasedQueue<City*> data;
	LinkBasedQueue<HitCounter*> hitCounters;
	BST<City*>* bst;
	HashTable<City*>* hashtable;
	SinglyLinkedList<City*>* linkedlist;
	int numCities;

	City* createCity(std::string line);

	void populateBST();
	void populateHashTable();
	void populateLinkedList();
public:
	// Add functions needed in main
	CityDatabase(std::ifstream& input);
	BST<City*>* getBST();
	HashTable<City*>* getHashTable();
	SinglyLinkedList<City*>* getLinkedList();

	City* findByName(std::string name);
	City* findByPopulationDensity(int popDens);
	City* findByClimate(std::string climate);

	void printSorted(std::ostream&);
	void print(std::ostream&);
	void addCity(City* city);
	void removeCity(City* city);
	void displayEfficiency(std::ostream&);
	LinkBasedQueue<City*>* recommendCities(int numRecommendations, double curX, double curY, double distance = 0, int popDens = 0, double livingIndex = 0, std::string climate = "", std::string language = "", std::string activities = "", std::string country = "");

	void writeToFile(std::ofstream& output);
};

#endif // !CITYDATABASE_H