#include <stdio.h>
#include <omp.h>

int main(int argc, char *argv[]) {
    #pragma omp target teams parallel \
        num_teams(4) thread_limit(64)
    {
    int global_thread_id = omp_get_thread_num() + (omp_get_team_num() * omp_get_num_threads()) + 1;
    int global_num_threads = omp_get_num_threads() * (omp_get_num_teams());
    // To wait for all threads done weuse two separate offload regions
    printf("Hello world! I'm thread %d out of %d in team %d. My global thread id is %d out of %d.\n",
            omp_get_thread_num() + 1, 64, omp_get_team_num(), global_thread_id, global_num_threads);
    } // end target
    return(0);
}