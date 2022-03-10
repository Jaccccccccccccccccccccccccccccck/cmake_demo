#include <fstream>
#include <iostream>
#include <gtest/gtest.h>


#include "json.h"

using namespace std;

int add(int lhs, int rhs) { return lhs + rhs; }

int main(int argc,char *argv[]) {
    if (argc != 2) {
        cout << "need one and only one json file path arg!" << endl;
        exit(1);
    }
    Json::Value root;
    ifstream file(argv[1]);
    file >> root;
    cout << root << endl;

    EXPECT_EQ(add(1,1), 2); // PASS
    EXPECT_EQ(add(1,1), 1) << "FAILED: EXPECT: 2, but given 1";; // FAILDED

    return 0;

}