* **Name: yuyang tian**

* **NU ID: 002297971**

### 1 Elapsed Time

```c++
#include <iostream>
using namespace std;
int main() {
 int time;
 int h;
 int m;
 int s;
 cout << "please input the elapsed time for event in seconds:" << endl;
 cin >> time;
 h = time / (60*60);
 time %= 3600;
 m = time / 60;
 s = time % 60;
 cout << "elapsed time:" << h << ":" << m << ":" << s << endl;

 return 0;
}
```



### 2 Milk Carton

```c++
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double amount;
    int cartons;
    double cost;
    double profit;
    cout << "please input the total amount of milk produced in the morning:" << endl;
    cin >> amount;
    cartons = round(amount / 3.78); 
    cost = amount * 0.38;
    profit = cartons * 0.27;
    cout << "the cost of producing milk :" << cost << endl;
    cout << "the profit of producing milk :" << profit << endl;
}

```

### 3 Summer Job

```c++
#include <iostream>
using namespace std;

int main() {
    double rate = 15.50;
    int hours = 40;
    int weeks = 5;
    double tax = 0.14;
    
    double incomePreTax = rate * hours * weeks;
    double incomePostTax = incomePreTax * (1 - tax);
    
    double clothes = incomePostTax * 0.10;
    double school = incomePostTax * 0.01;
    
    double remaining = incomePostTax - clothes - school;
    
    double savings = remaining * 0.25;
    double parentsSavings = savings * 0.50;
    
    cout << "a. Income before tax: $" << incomePreTax << endl;
    cout << "   Income after tax: $" << incomePostTax << endl;
    
    cout << "b. Money spent on clothes and accessories: $" << clothes << endl;
    cout << "c. Money spent on school supplies: $" << school << endl;
    
    cout << "d. Money spent on savings bonds: $" << savings << endl;
    cout << "e. Money your parents spent on additional savings bonds: $" << parentsSavings << endl;

    return 0;
}

```

### 4 Bank

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    char type;
    int minimum;
    int balance;
    cout << "please input your account number:" << endl;
    cin >> number;
    cout << "please input your account type:" << endl;
    cin >> type;
    cout << "please input your account minimum:" << endl;
    cin >> minimum;
    cout << "please input your account balance:" << endl;
    cin >> balance;
    double interest;
    double fee;
    
    if (balance < minimum) {
        fee = (type == 'c' || type == 'C') ? 25.0 : 10.0;
        cout << "Account Number: " << number << endl;
        cout << "Account Type: " << type << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "Service Charge: $" << fee << endl;
    } else {
        if (type == 'c' || type == 'C') {
            interest = (balance > (minimum + 5000)) ? ((balance - (minimum + 5000)) * 0.05 + (minimum + 5000) * 0.03) : balance * 0.03;
        } else {
            interest = balance * 0.04;
        }

        cout << "Account Number: " << number << endl;
        cout << "Account Type: " << type << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "Interest Earned: $" << interest << endl;
    }
    return 0;
}

```

### 5 Transform phone number

```c++
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    char letterMap[26] = {'2', '2', '2', '3', '3', '3', '4', '4', '4', '5', '5', '5', '6', '6', '6', '7', '7', '7', '7', '8', '8', '8', '9', '9', '9', '9'};
    while (true)
    {
        string input;
        string output;
        // get input
        cout << "---------------------------------------------------c" << endl;
        cout << "Program to convert a phrase into a telephone number" << endl;
        cout << "Enter a phrase that contains only letters and is at least seven characters long, and enter q to quit: " << endl;
        getline(cin, input);
        // user wants to quit
        if (input == "q")
        {
            break;
        }
        // transform to digit
        int count = 0;
        bool needHyphen = true;
        for (char c : input)
        {
            if (isalpha(c))
            {
                // it's ok to transform
                output += letterMap[toupper(c) - 'A'];
                count++;
            }
            if (count == 3 && needHyphen)
            {
                // it's time to add hyphen
                output += '-';
                needHyphen = false;
            }
            if (count == 7)
            {
                break;
            }
        }
        cout << "Corresponding telephone number in digits: " << output << endl;
    }
    return 0;
}

```

### 6 Sum of numbers

```c++
#include <iostream>
using namespace std;

int main() {
    int num;
    int sumOfOdd = 0;
    int sumOfEven = 0;
    cout << "Enter integers, separated by spaces. Enter any non-integer to stop:" << endl;
    while(cin >> num) {
        if(num % 2 == 0) {
            sumOfEven += num;
        } else {
            sumOfOdd += num;
        }
    }
    // Print the sums
    cout << "Sum of even integers: " << sumOfEven << endl;
    cout << "Sum of odd integers: " << sumOfOdd << endl;

}

```





