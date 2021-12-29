#ifndef CITY_H
#define CITY_H

#include <string>

class City
{
private:
	std::string name;
	double x;
	double y;
	int populationDensity;
	double livingIndex;
	std::string climate;
	std::string language;
	std::string activites;
	std::string country;

	static std::string comparisonType;
	static std::string outputType;

public:
	City();

	City(std::string name, double x, double y, int popDens, double livingIndex, std::string climate, std::string language, std::string activities, std::string country);

	int getX();

	void setX(int);

	int getY();

	void setY(int);

	std::string getName();

	void setName(std::string);

	int getPopulationDensity();

	void setPopulationDensity(int);

	double getLivingIndex();

	void setLivingIndex(double);

	std::string getClimate();

	void setClimate(std::string);

	std::string getLanguage();

	void setLanguage(std::string);

	std::string getActivities();

	std::string getCountry();

	void setCountry(std::string);

	static void setComparisonType(std::string);

	static void setOutputType(std::string);

	friend bool operator>(City&, City&);

	friend bool operator<(City&, City&);

	friend bool operator==(City&, City&);

	friend std::ostream& operator<<(std::ostream&, City*);

	friend std::istream& operator>>(std::istream&, City&);
};

#endif // !CITY_H