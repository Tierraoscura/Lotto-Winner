#include <iostream>

int searchlist(int [], int, int);

int main() {

    const int nums = 10;
    int picks[nums] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};

    int winnums,
    search;

    std::cout << "Enter this week's winning five-digit number: ";
    std::cin >> winnums;

    search = searchlist(picks, nums, winnums);

    if (search == -1)
        std::cout << "Sorry, no winning ticket this week.\n";

    else {

        std::cout << "Congratulations!\nYou have the winning five-digit number: " << picks[search] << "\n";

    }

return 0;
}

int searchlist(int array[], int size, int value){

    int position = -1,
    first = 0,
    last = size - 1,
    middle;
bool found = false;

while (!found && first <= last){

    middle = (first + last) / 2;
    if (array[middle] == value){

        position = middle;
        found = true;

    }
    else if (array[middle] > value)
        last = middle - 1;
    else
        first = middle + 1;

}
return position;
}
