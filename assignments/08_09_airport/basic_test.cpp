#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------
//Files we are testing:
#include "../../includes/airport/simulation.h"



//------------------------------------------------------------------------------

using namespace std;

//------------------------------------------------------------------------------
//          COPY BASIC_TEST INTO THIS FILE.
//                    AND THEN,
//         DO NOT EDIT THIS FILE ANY FURTHER
//------------------------------------------------------------------------------

using namespace std;

bool test_airport(bool debug = false)
{
  srand(time(0));
  int simulations = 20;
  cout<<endl<<endl<<"============================================"<<endl<<endl;
  for (int i=0; i<simulations; i++)
  {
    cout << endl << "------------------- [" << i + 1 << "] --------------------" << endl;
    simulate_airport(debug);
  }
  cout <<endl<<endl<< "============================================" << endl;
  
  return true;
}


//Lord help me! 
const bool debug = false;

TEST(TEST_AIRPORT, TestAirport)
{
  bool success = test_airport(debug);
  EXPECT_EQ(success, true);
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running basic_test.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}


/*

08-airport git:(master) ✗  😊 $> tr includes
includes
├── airport
├── linked_list_functions
├── node
├── queue
└── stack

5 directories, 0 files
08-airport git:(master) ✗  😊 $> ./build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from TEST_AIRPORT
[ RUN      ] TEST_AIRPORT.TestAirport


============================================


----------------- [1] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
147 landed
47 took off
1 planes crashed. :(
Average waiting time to land: 8.55102
Average waiting time to take off : 672.255
planes in landing queue : 3
planes in take off queue: 1108

----------------- [2] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
156 landed
44 took off
3 planes crashed. :(
Average waiting time to land: 8.98077
Average waiting time to take off : 685.955
planes in landing queue : 0
planes in take off queue: 1110

----------------- [3] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
139 landed
50 took off
1 planes crashed. :(
Average waiting time to land: 8.53237
Average waiting time to take off : 711.36
planes in landing queue : 1
planes in take off queue: 1112

----------------- [4] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
150 landed
46 took off
2 planes crashed. :(
Average waiting time to land: 8.65333
Average waiting time to take off : 645.174
planes in landing queue : 0
planes in take off queue: 1119

----------------- [5] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
129 landed
53 took off
2 planes crashed. :(
Average waiting time to land: 8.69767
Average waiting time to take off : 633.472
planes in landing queue : 0
planes in take off queue: 1090

----------------- [6] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
126 landed
54 took off
1 planes crashed. :(
Average waiting time to land: 8.02381
Average waiting time to take off : 715.296
planes in landing queue : 0
planes in take off queue: 1096

----------------- [7] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
162 landed
42 took off
5 planes crashed. :(
Average waiting time to land: 9.11728
Average waiting time to take off : 653.095
planes in landing queue : 1
planes in take off queue: 1118

----------------- [8] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
127 landed
54 took off
2 planes crashed. :(
Average waiting time to land: 9.01575
Average waiting time to take off : 676.907
planes in landing queue : 1
planes in take off queue: 1110

----------------- [9] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
153 landed
45 took off
3 planes crashed. :(
Average waiting time to land: 10.7843
Average waiting time to take off : 640.822
planes in landing queue : 2
planes in take off queue: 1122

----------------- [10] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
144 landed
48 took off
3 planes crashed. :(
Average waiting time to land: 9.23611
Average waiting time to take off : 684.354
planes in landing queue : 3
planes in take off queue: 1104

----------------- [11] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
165 landed
41 took off
1 planes crashed. :(
Average waiting time to land: 9.07273
Average waiting time to take off : 678.317
planes in landing queue : 3
planes in take off queue: 1135

----------------- [12] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
142 landed
49 took off
1 planes crashed. :(
Average waiting time to land: 9.92254
Average waiting time to take off : 713.388
planes in landing queue : 0
planes in take off queue: 1102

----------------- [13] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
147 landed
47 took off
1 planes crashed. :(
Average waiting time to land: 9.80272
Average waiting time to take off : 727.532
planes in landing queue : 0
planes in take off queue: 1079

----------------- [14] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
148 landed
47 took off
No planes crashed. :)
Average waiting time to land: 9.10811
Average waiting time to take off : 645.596
planes in landing queue : 1
planes in take off queue: 1096

----------------- [15] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
145 landed
48 took off
1 planes crashed. :(
Average waiting time to land: 9.6
Average waiting time to take off : 700.875
planes in landing queue : 0
planes in take off queue: 1069

----------------- [16] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
141 landed
49 took off
3 planes crashed. :(
Average waiting time to land: 9.78014
Average waiting time to take off : 677.959
planes in landing queue : 1
planes in take off queue: 1103

----------------- [17] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
119 landed
57 took off
3 planes crashed. :(
Average waiting time to land: 9.7563
Average waiting time to take off : 705.684
planes in landing queue : 0
planes in take off queue: 1053

----------------- [18] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
156 landed
44 took off
No planes crashed. :)
Average waiting time to land: 8.28205
Average waiting time to take off : 700.5
planes in landing queue : 0
planes in take off queue: 1095

----------------- [19] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
144 landed
48 took off
1 planes crashed. :(
Average waiting time to land: 9.16667
Average waiting time to take off : 668.833
planes in landing queue : 1
planes in take off queue: 1084

----------------- [20] ----------------------
time to take off      : 15
time to land          : 5
probability of landing: 0.1
probability of takeoff: 0.8
fuel: time to crash   : 20
total simulation time : 1440


. . . . . . . . . . . . . . . . . . . . . . . 
147 landed
47 took off
No planes crashed. :)
Average waiting time to land: 8.65306
Average waiting time to take off : 686.66
planes in landing queue : 0
planes in take off queue: 1101


============================================
[       OK ] TEST_AIRPORT.TestAirport (30 ms)
[----------] 1 test from TEST_AIRPORT (30 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (30 ms total)
[  PASSED  ] 1 test.
08-airport git:(master) ✗  😊 $>   
*/