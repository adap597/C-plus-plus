/*You are running a camp and must decide what activities to schedule. You decide to base the decision on the temperature measured in degrees Fahrenheit. 
If the temperature is above 85°, you schedule swimming. If the temperature is above 70° and less than or equal to 85°, you schedule baseball. 
If the temperature is above 32° and less than or equal to 70°, you schedule basketball. Finally, if the temperature is below 32°, you send everyone home.

Create a program that takes the temperatures as input and provides as output your sports decision. (Assume that temperatures are only expressed as integers.) 
In the program include 2 void functions titled getTemp and printActivity, each with an int argument.

The function getTemp should have a Reference parameter that gets the temperature in getTemp and then passes the value back to be printed in main( ), and
printActivity should have a Value parameter.

The function getTemp should prompt the user for the temperature in Fahrenheit, get the input from the user, and return to main( ) 
where it prints the temperature on the screen. The function printActivity should determine the activity and print it as output on the screen. 
(Be careful and note that this problem requires you to input the temperature into getTemp and not directly into the main function.)      

Output should be displayed as the following: “The temperature for today of xyz is considered to be a good 
temperature for the following activity temp-based-activity.” 	
 
Where xyz is the temperature entered and temp-based-activity is Swimming, Baseball, Basketball or No Activity – Sending Everyone Home.
*/

// Comprehensive 2.cpp : This program accepts user input of the current temperature in Fahrenheit.
//Depending on the temperature, it displays the recommended summer camp activity or the instruction to 
//send everyone home if it is too cold. 

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include <string>

using namespace std;

void getTemp(int& temp) {//getTemp function
    cout << "Enter the temperature in Fahrenheit: ";//requests user input
    cin >> temp;//stores input in temp variable

    //validates if a integer was entered
    while (cin.fail()) {//if an integer has not been entered, displays an error message and requests user to try again
        //until an integer has been entered
        cout << "Invalid input. Please enter the temperature in Fahrenheit: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> temp;
    }
        cout << "You entered: " << temp << endl;//if an integer has been entered, it displays back user input
    
}
void printActivity(int temp) {//printActivity function
    string activity;
   
    if (temp > 85)//if else statement to determine the activity based on temperature entered by user
    {
        activity = "swim!";//if above 85, the activity is swimming
        cout << "Be the dolphin. It's time to";
    }
    else if ((temp > 70) && (temp <= 85))//if greater than 70 and less than or equal to 85, baseball
    {
        activity = "baseball!";
        cout << "Stand tall, talk small, play ball! It's time to play some";
    }
    else if ((temp > 32) && (temp <= 70))//if greater than 32 and less than or equal to 70, basketball
    {
        activity = "basketball!";
        cout << "Play like a champion! It's time to play some";
    }
    else {
        activity = "send everyone home";// if less than 32, send everyone home
        cout << "Brrrr. It's too cold today. We have to";
    }

    cout << " " << activity;// print the activity
}

int main(){
    cout << "Welcome to Summer Camp!" << endl;// welcome message
    int temp;// int variable for temperature input
    string activity;// string variable for activity input
    getTemp(temp);//calls get temp function
    
    cout << "The temperature for today of " << temp << " is considered a good temperature for the following activity: \n";
    printActivity(temp);//displays final message with temperature and activity
  
    return 0;
}

