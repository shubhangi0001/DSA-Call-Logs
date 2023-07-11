#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Call Log struct

struct CallLog {
string callerName;
string phoneNumber;
int callDuration;
int main() {

// Initialize empty stack for call logs

stack<CallLog> callStack;

// Prompt the user to enter call log information

while (true) {
CallLog newCall;
cout "Enter caller name (or 'q' to quit):
getline(cin, newCall.callerName);
if (newCall.callerName "q") {
break;
cout "Enter phone number: "
getline(cin, newCall.phoneNumber);
cout "Enter call duration (in minutes):
cin newCall.callDuration;
cin.ignore();

// Ignore newline character after entering call

duration
callStack.push(newCall);

// Print the current call logs in the stack

cout "\nCurrent call logs in stack:\n";
while (!callStack.empty()) {
CallLog currentCall = callStack.top();
cout "Caller name: "
currentCall.callerName "Xn";
cout << "Phone number: "
currentCall.phoneNumber "Xn";
cout << "Call duration: "
currentCall.callDuration " minutes\n";
callStack.pop();
return O;