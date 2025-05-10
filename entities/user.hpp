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