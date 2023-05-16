class User:
    def __init__(self, username, password, balance=0):
        self.username = username
        self.password = password
        self.balance = balance
        self.activity_history = []

    def deposit(self, amount):
        self.balance += amount
        self.activity_history.append(f"Deposited {amount}")

    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
            self.activity_history.append(f"Withdrew {amount}")
        else:
            self.activity_history.append("Insufficient funds")

    def get_account_info(self):
        return f"Username: {self.username}\nBalance: {self.balance}"

# Example usage
user = User("JohnDoe", "password123")
print(user.get_account_info())  # Output: Username: JohnDoe, Balance: 0
user.deposit(100)
print(user.get_account_info())  # Output: Username: JohnDoe, Balance: 100
user.withdraw(50)
print(user.get_account_info())  # Output: Username: JohnDoe, Balance: 50
