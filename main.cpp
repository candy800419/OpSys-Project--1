// Tiffany Milano and Meng Jung Lin 
// Project 1 - Operating Systems 
// October 20th 2011

#include <iostream>
#include <time.h>
#include <ctime>
#include "classSim.h"
using namespace std;

void fcfs(Sim p);  // First-Come First Served(FCFS)
void sjf(Sim p);   // Shortest-Job First (SFS)
void psjf(Sim p);  // Preemptive Shortest-Job First (SJF)
void rr(Sim p);    // Round-Robin (RR)
void pp(Sim p);    // Preemptive Priority (PP) 

int main(int argc, char * argv[])
{	
	Sim p[20];	// An array which holds all the processes
	srand(time(0)); // the seed value for the random number generator
	int time = 0; 
	for (int i = 0; i < 20; i++)
	{
		int cpuTime = rand() % 7000 + 500; // This generates a random number between 500 - 7500
		int priority = rand() % 5; // this generates a random number between 1 and 4 
		Sim process(i, cpuTime, priority ); 
		p[i] = process; 
		
		cout << "[time " << time << "ms] Process " << i+1 << " created (requiring " << cpuTime << "ms CPU time)\n"; 
	
	}
	

	/*
	1. Process creation (display the process ID, required CPU time, and priority, if applicable)
	2. Context switch (display the two before/after process IDs involved)
	3. Process's first CPU usage (display the process ID and initial wait time)
	4. Process termination (display the process ID, its turnaround time, and its total wait time)*/ 


	system("pause");
	return 0;
}




// First-Come First Served(FCFS)
void fcfs(Sim p)
{
	
}

// Shortest-Job First (SFS)
void sjf(Sim p)
{
}

// Preemptive Shortest-Job First (SJF)
void psjf(Sim p)
{
}

// Round-Robin (RR)
void rr(Sim p)
{
}

// Preemptive Priority (PP) 
void pp(Sim p)
{
}