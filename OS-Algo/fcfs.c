#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int id;
    int arrival_time;
    int burst_time;
    int completion_time;
    int turn_around_time;
    int waiting_time;
}PROCESS;


int compare_process(const void *p, const void *q)
{
    int l = ((PROCESS *)p)->arrival_time;
    int r = ((PROCESS *)q)->arrival_time;

    return (l-r);
}


void schedule(PROCESS *processes, int num_processes)
{
    int time_track = 0, wait_time_sum = 0;

    qsort(processes, num_processes, sizeof(PROCESS), compare_process);

    puts("Information about individual processes:");

    for(int i=0; i<num_processes; i++)
    {
        time_track += processes[i].burst_time;
        processes[i].completion_time = time_track;
        processes[i].turn_around_time = processes[i].completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turn_around_time - processes[i].burst_time;
        wait_time_sum += processes[i].waiting_time;

        printf("Process %d:\n", i+1);
        printf("  ID              : %d\n", processes[i].id);
        printf("  Arrival Time    : %d\n", processes[i].arrival_time);
        printf("  Burst Time      : %d\n", processes[i].burst_time);
        printf("  Completion Time : %d\n", processes[i].completion_time);
        printf("  Turn Around Time: %d\n", processes[i].turn_around_time);
        printf("  Waiting Time    : %d\n", processes[i].waiting_time);
        printf("\n");
    }

    printf("Average Waiting Time: %.2f\n", (float)wait_time_sum/num_processes);
}


int main()
{
    int num_processes;

    printf("Enter the number of processes you would like to schedule:");
    scanf("%d", &num_processes);

    PROCESS processes[num_processes];

    for(int i=0; i<num_processes; i++)
    {
        printf("Arrival time and burst time for process %d(space-separated):", i+1);
        processes[i].id = i+1;
        scanf("%d %d", &processes[i].arrival_time, &processes[i].burst_time);
    }

    schedule(processes, num_processes);
    puts("Process scheduling completed successfully.");

    return 0;
}