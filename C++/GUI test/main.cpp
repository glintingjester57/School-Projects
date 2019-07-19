// Calculator Terminal and GUI test with history in heap

#include <iostream>

using namespace std;

int main() {

    int firstNum;
    int secondNum;
    int answer;
    char op;

    cout << "Type in your equation" << endl;

    cin >> firstNum >> op >> secondNum;

    if(op == '+'){

        answer = firstNum + secondNum;

    }
    else if(op == '-'){

        answer = firstNum - secondNum;

    }
    else if (op == '*'){

        answer = firstNum * secondNum;

    }
    else if (op == '/'){

        answer = firstNum / secondNum;

    }
    else{

        cout << "Error, please run the program again." << endl;
        return 1;
    }

    cout << "Your answer is " << answer << endl;

    return 0;
}