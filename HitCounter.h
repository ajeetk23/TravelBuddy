#include "city.h"

class HitCounter {
private:
	int counter;
	City* city;
public:
	HitCounter(City* city);
	~HitCounter();
	void incrementCounter();
	City* getCity();
	int getCounter();
};