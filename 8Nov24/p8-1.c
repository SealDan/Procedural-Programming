#include <stdio.h>

int largest_value(int a[]){
    int i, largest=a[0];

    for (i=1; i<10; i++){
        if (a[i] > largest){
            largest = a[i];
        }
    }
    return largest;
}

int average_value(int a[]){
    int i, sum=a[0], average;

    for (i=0; i<10; i++){
        sum = sum + a[i];
    }

    average = sum/10;

    return average;
}

int positive_value(int a[]){
    int i, total_positive = 0;

    for (i=0; i<10; i++){
        if (a[i] > 0){
            total_positive = total_positive + 1;
        }
    }

    return total_positive;
}


int main(){
    int array[10] = {1, 6, -71, 21, -2, 120, 5, 18, 10, 31};
    int large_v, average_v, positives;

    large_v = largest_value(array); 
    printf("The largest value in the array is: %d\n", large_v);

    average_v = average_value(array);
    printf("The average value in the array is: %d\n", average_v);

    positives = positive_value(array);
    printf("The total positive values in the array is: %d\n", positives);
}