#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

// Cross-platform version without Windows-specific colors
void typewriter(const string& text, int delay_ms = 50) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay_ms));
    }
}

void animateHeart(const string& name) {
    // Clear screen (works in GitHub Actions terminal)
    cout << "\033[2J\033[1;1H";

    // Heart animation frames
    const vector<string> heartFrames = {
        "\033[31m  ♥  \033[0m\n",
        "\033[31m ♥ ♥ \033[0m\n",
        "\033[31m♥   ♥\033[0m\n",
        "\033[31m ♥ ♥ \033[0m\n",
        "\033[31m  ♥  \033[0m\n"
    };

    // Big heart frames
    const vector<string> bigHeartFrames = {
        "\033[31m     ♥     \033[0m\n",
        "\033[31m   ♥   ♥   \033[0m\n",
        "\033[31m ♥       ♥ \033[0m\n",
        "\033[31m♥         ♥\033[0m\n",
        "\033[31m ♥       ♥ \033[0m\n",
        "\033[31m   ♥   ♥   \033[0m\n",
        "\033[31
