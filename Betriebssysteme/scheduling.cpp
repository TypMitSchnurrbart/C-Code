#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <string>
#include <vector>
using namespace std;

// Class of Processes ----------------------------------------------------
class Process {
    
    private:

        static int32_t number_processes;
        int32_t pid;
        int32_t burst_time;
        int32_t arrival_time;
        int32_t waiting_time;
        int32_t deadline;

    public:
        // Constructor for Process
        Process(int32_t given_burst = 0, int32_t given_arrival = 0) {
            number_processes++;
            pid = number_processes;
            burst_time = given_burst;
            arrival_time = given_arrival;
        }

        // Destuctur to complete the Process
        ~Process() {
            cout << "Finished Process:\t" << this->pid << endl;
            cout << "Arrived at:\t\t" << this->arrival_time << endl;
            cout << "And had to wait:\t" << this->waiting_time << endl;
            number_processes--; 
        }

        inline int32_t get_pid() { return this->pid; }
};

// Creating a Vector to handle differing amount of processes--------------
vector<Process> process_list;

// Init the pid counter
int32_t Process::number_processes = 0;

// Adding at least one process to start with------------------------------
int add_start_process() {

    cout << "Add Processes to start with: " << endl;

    int32_t burst_time;
    string input = "Y";

    Process* Test;

    while (input == "Y") {
        cout << "Burst Time:\t";
        cin >> burst_time;

        // Vector does some weird stuff
        Process Test = Process(burst_time);
        process_list.push_back(Test);

        cout << endl << "Continue? Y / N\t";
        cin >> input;
    }

    return 0;
}

int first_come_first_serve()
{
    cout << "Starting First-Come-First-Serve Scheduler!\n" << endl;

    add_start_process();

    cout << process_list[0].get_pid() << endl;

    return 0;
}

int small_job_first()
{
    cout << "Starting Smallest-Job-First Scheduler!" << endl;

    add_start_process();

    return 0;
}

// Main ------------------------------------------------------------------
int main(int argc, char *argv[])
{
    // Param possibilities
    string fcfs = "fcfs";
    string sjf = "sjf";

    // List of Processes for later
    

    // Welcome Message
    cout << "Welcome to Process Scheduling Simulation\n" << endl;

    // If no Params are given
    if (argc == 1) {
        cout << "You should pass an Scheduling algorithm as Parameter" << endl;
        cout << "Like:\n\t\tfcfs\t->\tFirst-Come-First-Serve\n\t\tsjf\t->\tSmallest Job First" << endl;
        exit(404);
    }

    // Get Argument as String
    string arg = argv[1];

    // Decide which algorithm to start
    if (arg == fcfs) 
    {
        first_come_first_serve();
    }
    else if (arg == sjf) 
    {
        small_job_first();
    }

    
}