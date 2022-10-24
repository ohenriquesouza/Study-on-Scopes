#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

 int main(){

    steady_clock::time_point t1 = steady_clock::now();
    steady_clock::time_point t2;

    duration <double> tempo_gastoVET = duration_cast<duration<double>>(t1 - t1);
    duration <double> tempo_gastoVET2 = duration_cast<duration<double>>(t1 - t1);
    duration <double> tempo_gastoVET3 = duration_cast<duration<double>>(t1 - t1);

    static int vetor[10000];

    for(int i = 0; i < 10000; i++){

        t1 = steady_clock::now();
        vetor[i] = i*i;
        t2 = steady_clock::now();
        tempo_gastoVET += duration_cast<duration<double>>(t2 - t1);


    }
    
    printf("Tempo gasto: %lf", tempo_gastoVET.count());
    printf("\n");
    
    int vetor2[10000];

    for(int i = 0; i < 10000; i++){

        t1 = steady_clock::now();
        vetor2[i] = i*i;
        t2 = steady_clock::now();
        tempo_gastoVET2 += duration_cast<duration<double>>(t2 - t1);


    }
    
    printf("Tempo gasto: %lf", tempo_gastoVET2.count());
    printf("\n");
    
    int *vet3;
    vet3 = (int*) malloc (sizeof (int) * 10000);
    
    for(int i = 0; i < 10000; i++){

        t1 = steady_clock::now();
        vet3[i] = i*i;
        t2 = steady_clock::now();
        tempo_gastoVET3 += duration_cast<duration<double>>(t2 - t1);


    }
    
    printf("Tempo gasto: %lf", tempo_gastoVET3.count());

 }