#include <iostream>
#include <vector>
#include <train.hpp>

using namespace std;

struct User {
    string userId;
    string name;
    string adharCard;
    vector<Train> trains;
};

// https://github.com/Abhishek-Jaiswar/train-booking-cli.git