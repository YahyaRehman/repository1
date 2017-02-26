#include <iostream>
#include <mpi.h>

using namespace std; 

int main(int argc, char** argv) {
    int myrank, nprocs, namelen;
    char processorName[10];


    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
    MPI_Get_processor_name(processorName, &namelen);

    
    cout << "Hello from process having rank: " << myrank 
    << " Running on processor:" << processorName << endl;



    MPI_Finalize();
    return 0;
}
