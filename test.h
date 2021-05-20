#ifndef TEST_H
#define TEST_H
#define benchmark(pi,index) time = get_time(); pi(2); timeList[index][i] = get_time() - time;
#define benchmark0 mean(timeList[0], 100)
#define benchmark1 mean(timeList[1], 100)
double timeList[2][100], time;
double get_time();
double mean(double list[], int size);
#endif