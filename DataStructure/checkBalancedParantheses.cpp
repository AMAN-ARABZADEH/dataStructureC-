#include <iostream>
#include <array>
#include <stack>
#include <cstring>




using namespace std;
void Reverse(char c[], size_t size){
	std::stack<char> str;
	// Loop for pushing to a stack of charachters called str;
	for(int i = 0; i < size; i++){
		str.push(c[i]);
	}
	// another loop for pop
	for(int i = 0; i < size; i++){
		c[i] = str.top(); // Overwrite charachter
		str.pop(); // Perform pop 
	}
}



// The solusion by teacher 
bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
    bool isBalanced_parantahes(string exp){
		int len = exp.size();
		stack<char> s;
		for(int i = 0; i <len; i++){
			if(exp[i] == '(' or exp[i]  == '{' or exp[i]  == '[' ){
				s.push(exp[i]);
			}else if(exp[i] == ')' or exp[i] == '}' or exp[i]  == ']'){
				if(s.empty() or !ArePair(s.top(),exp[i])){
					return false;
				}else{
					s.pop();
				}
			}
		}
		return  (s.empty()) ? true : false;
		
	}




// The solusion by me.
// My solution is more clearer to understand


// Check for balanced parentheses using stack 


bool parenthesisChecker(char  arr[]){
	int size = strlen(arr);  // Takes the size of the input
	std::stack<char> stk;
	for(size_t i = 0; i < size; i++){
		if(arr[i]== '(' or arr[i] == '[' or arr[i]  == '{' ){
			stk.push(arr[i]);
		}else if(arr[i] ==  ')' or arr[i] == ']' or arr[i] == '}' ){
			if(stk.empty()){
				return false;
			}else{
				stk.pop();
		    }
	    }    
	}
	if(stk.empty()){
		return true;
	}
	return false;
}

int main(){

	char A[100];
	cout << "Enter a string: ";
	cin.get(A, 100);
	cout << "Original  order is" << A << endl;
	cout << endl;
	cout << "Reverse order is: ";
	int count;
	for(int i = 1; A[i] != '\0'; i++){
		count++;
	}
	int size;
	cout << "The length of charachters are " << count << endl;
	cout << "Enter length of the charachters: ";
	cin >> size;
	
	Reverse(A, size);;
    cout << A << endl;

	string ch = "{}()";
	cout << boolalpha << endl;
	cout << isBalanced_parantahes(ch) << endl;


	char parentsis[] = "[]{}()";

    bool checking_mycode = parenthesisChecker(parentsis);
	if(checking_mycode == true){
		cout << "The list is even: " << endl;
	}else{
		cout << "The list is not even!!" << endl;
	}

	return 0;
}