//
//  main.cpp
//  Lab_3
//
//  Created by Erik Petersen on 7/8/26.
//
#include <iostream>

//function to find the maximum value

int findMaxOfTen(const int (&arr)[10]) {
    int maxVal = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    
    return maxVal;
}

//function to find the minimum value

int findMinOfTen(const int (&arr)[10]) {
    int minVal = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    
    return minVal;
}

//function to calculate the average

int findAverageOfTen(const int (&arr)[10]) {
    int sum=arr[0];
    for (int i = 1; i < 10; i++) {
        sum=sum+arr[i];
    }
    int averageOfTen=sum /10;
    return averageOfTen;
    
}

//function to calculate how many are passing

int findNumberPassing(const int (&arr)[10]) {
    int peoplePassing=0;
    for (int i = 0; i < 10; i++) {
        if (arr[i]>=70)
            peoplePassing=peoplePassing+1;
    }
    return peoplePassing;
}

//function to calculate the sum of all scores

int findSumScores(const int (&arr)[10]) {
    int sumOfScores=arr[0];
    for (int i = 1; i < 10; i++) {
        sumOfScores=sumOfScores+arr[i];
    }
    return sumOfScores;
}


int main() {
    // get the scores from the user/teacher
    int scores[10];

     std::cout << "Student score statistic calculator:" << std::endl;

     for (int i = 0; i < 10; i++) {
         std::cout << "Enter score for student " << i + 1 << " (from 0-99): ";
         std::cin >> scores[i];
     }
    
    //run the numbers through each function and print the results
    
    std::cout << "" << std::endl;
    std::cout << "Class Statistics: " << std::endl;
    
    
    std::cout << "The sum of all scores is: " << findSumScores(scores) << std::endl;
    
    std::cout << "The maximum value is: " << findMaxOfTen(scores) << std::endl;
    
    std::cout<<"The minimum value is: " << findMinOfTen(scores) << std::endl;
    
    std::cout <<"The average value is: " <<findAverageOfTen(scores) << std::endl;
   
    std::cout <<"The amount of people passing is: " <<findNumberPassing(scores) << std::endl;
    return 0;
}

