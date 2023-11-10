#include <iostream>

class Counter {
private:
    int count;

public:
    Counter(int initialCount = 1) : count(initialCount) {}

    void increment() {
        count++;
    }

    void decrement() {
        count--;
    }

    int getValue() {
        return count;
    }
};

int main() {
    char command;
    int initialValue;

    std::cout << "‚ë å®â¨â¥ ãª § âì ­ ç «ì­®¥ §­ ç¥­¨¥ áçñâç¨ª ? ‚¢¥¤¨â¥ ¤  ¨«¨ ­¥â: ";
    std::string response;
    std::cin >> response;

    Counter counter; // ¥à¥¬¥é ¥¬ ®¡êï¢«¥­¨¥ counter §  ¯à¥¤¥«ë ¡«®ª  if

    if (response == "¤ ") {
        std::cout << "‚¢¥¤¨â¥ ­ ç «ì­®¥ §­ ç¥­¨¥ áçñâç¨ª : ";
        std::cin >> initialValue;
        counter = Counter(initialValue); // à¨á¢ ¨¢ ¥¬ ­®¢ë© ®¡ê¥ªâ Counter
    }

    while (true) {
        std::cout << "‚¢¥¤¨â¥ ª®¬ ­¤ã ('+', '-', '=' ¨«¨ 'x'): ";
        std::cin >> command;

        if (command == '+') {
            counter.increment();
        }
        else if (command == '-') {
            counter.decrement();
        }
        else if (command == '=') {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == 'x') {
            std::cout << "„® á¢¨¤ ­¨ï!" << std::endl;
            break;
        }
        else {
            std::cout << "¥¢¥à­ ï ª®¬ ­¤ . ®¯à®¡ã©â¥ ¥éñ à §." << std::endl;
        }
    }

    return 0;
}