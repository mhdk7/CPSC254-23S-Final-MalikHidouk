#include <iostream>
#include <cstdlib>
#include <ctime>

// User class representing user information
class User {
public:
    std::string username;
    std::string password;
    // Additional user activity history, balance, etc.

    User(const std::string& username, const std::string& password) : username(username), password(password) {}
};

// Function to display a random ad
void displayRandomAd() {
    std::string ads[] = { "Ad 1", "Ad 2", "Ad 3" };  // Replace with actual ads
    int numAds = sizeof(ads) / sizeof(ads[0]);
    std::srand(std::time(0));
    int randomIndex = std::rand() % numAds;
    std::cout << "Random Ad: " << ads[randomIndex] << std::endl;
}

// Function to check if the entered username and password are valid
bool isValidCredentials(const std::string& username, const std::string& password) {
    // Replace with your validation logic
    // For simplicity, let's assume valid credentials are username: "admin", password: "password"
    return (username == "admin" && password == "password");
}

int main() {
    std::string username, password;

    // Display a random ad
    displayRandomAd();

    // Get username and password from the user
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    // Validate the credentials
    if (isValidCredentials(username, password)) {
        std::cout << "Login successful!" << std::endl;
        // Proceed with further actions after successful login
    } else {
        std::cout << "Invalid username or password. Login failed!" << std::endl;
        // Handle login failure
    }

    return 0;
}
