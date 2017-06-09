#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10
int list[10];
int sorted[10];

void merge_sort(int list[], int left, int right);
void merge(int list[], int left, int mid, int right);
void showList(int list[], int left, int right);