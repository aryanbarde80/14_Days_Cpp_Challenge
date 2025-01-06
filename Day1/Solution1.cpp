#include <iostream>
#include <string>
using namespace std;

// Function to check if glitchPattern exists in videoStream
bool containsGlitchPattern(const string& videoStream, const string& glitchPattern) {
    // Use the `find` method to check for substring
    return videoStream.find(glitchPattern) != string::npos;
}

int main() {
    string videoStream, glitchPattern;

    // Input the video stream and glitch pattern
    cout << "Enter the video stream: ";
    cin >> videoStream;

    cout << "Enter the glitch pattern: ";
    cin >> glitchPattern;

    // Check if glitchPattern exists in videoStream
    if (containsGlitchPattern(videoStream, glitchPattern)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
