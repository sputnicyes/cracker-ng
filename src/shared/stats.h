
/*!
 * \file stats.h
 * \brief Statistics headers.
 * \author Mickaël 'Tiger-222' Schoentgen
 * \date 2012.08.14
 */


#ifndef STATS_H
#define STATS_H

#include <iostream>
#include <cstdio>
#include <ctime>
#include <string>
#include <cstring>
#include <sstream>
#include <unistd.h> // sleep()

using namespace std;


class Stats {

public:
	size_t *num;
	unsigned int *found;
	
	Stats(size_t *, unsigned int *);
	Stats(const Stats&);
	Stats & operator=(const Stats&);
	~Stats();
	void start();
	void stats_sumary();

protected:

private:
	size_t total;
	time_t start_time;
	unsigned short int sleeping_time;
	char _pad[6];

	time_t elapsed_seconds();
	string format_number(const size_t &);

};

#endif // STATS_H
