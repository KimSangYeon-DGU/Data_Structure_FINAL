#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10
#define SWAP(X, Y) {int T; T = X; X = Y; Y = T;}

int list[MAX_SIZE];

void quick_sort(int list[], int left, int right);

int partition(int list[], int left, int right);

void showList(int list[], int left, int right);