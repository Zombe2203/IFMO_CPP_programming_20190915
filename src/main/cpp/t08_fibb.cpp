//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;

int t08_fibb() {
    int N = 0; int F = 0;//, F1 = 0;//, F2;//, i = 1;
    cin >>N;
    if ((N == 0) or (N == 1)) {
        F = N;
    } else {
        F = 1;
        int F1 = 0;
        int i =1;
        while (i < N) {
            i++;
            int F2 = F1;
             F1 = F;
            F = F1 + F2;
        }
    }
    cout <<F;
    return 0;
};