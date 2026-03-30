#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Account {
    string name;
    int accountNumber;
    int balance;
};

struct Transaction {
    int fromAccount;
    int toAccount;
    int amount;
    string date;
};

struct TransactionNode {
    Transaction transaction;
    TransactionNode* prev;
    TransactionNode* next;
    
    TransactionNode(Transaction t) : transaction(t), prev(nullptr), next(nullptr) {}
};

class TransactionSystem {
private:
    vector<Account> accounts;
    TransactionNode* head;
    TransactionNode* tail;
    
public:
    TransactionSystem() : head(nullptr), tail(nullptr) {}
    
    // Add a new account
    void addAccount(string name, int accNum, int initialBalance) {
        accounts.push_back({name, accNum, initialBalance});
        cout << "Account created: " << name << " (ID: " << accNum << ")\n";
    }
    
    // Find account by account number
    int findAccountIndex(int accNum) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].accountNumber == accNum) {
                return i;
            }
        }
        return -1;
    }
    
    // Display all accounts
    void displayAccounts() {
        cout << "\n=== Account List ===\n";
        for (const auto& acc : accounts) {
            cout << "Name: " << acc.name << " | Account #: " 
                 << acc.accountNumber << " | Balance: $" << acc.balance << "\n";
        }
        cout << "====================\n";
    }
    
    // Process a transaction
    bool makeTransaction(int fromAccNum, int toAccNum, int amount, string date) {
        int fromIdx = findAccountIndex(fromAccNum);
        int toIdx = findAccountIndex(toAccNum);
        
        if (fromIdx == -1 || toIdx == -1) {
            cout << "Error: Invalid account number!\n";
            return false;
        }
        
        if (accounts[fromIdx].balance < amount) {
            cout << "Error: Insufficient balance!\n";
            return false;
        }
        
        // Update balances
        accounts[fromIdx].balance -= amount;
        accounts[toIdx].balance += amount;
        
        // Create transaction node and add to linked list
        Transaction trans = {fromAccNum, toAccNum, amount, date};
        TransactionNode* newNode = new TransactionNode(trans);
        
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        
        cout << "Transaction successful!\n";
        return true;
    }
    
    // Display all transactions (forward)
    void displayTransactions() {
        if (head == nullptr) {
            cout << "No transactions yet.\n";
            return;
        }
        
        cout << "\n=== Transaction History (Forward) ===\n";
        TransactionNode* current = head;
        int count = 1;
        
        while (current != nullptr) {
            cout << count << ". From: " << current->transaction.fromAccount 
                 << " -> To: " << current->transaction.toAccount
                 << " | Amount: $" << current->transaction.amount
                 << " | Date: " << current->transaction.date << "\n";
            current = current->next;
            count++;
        }
        cout << "=====================================\n";
    }
    
    // Display transactions in reverse
    void displayTransactionsReverse() {
        if (tail == nullptr) {
            cout << "No transactions yet.\n";
            return;
        }
        
        cout << "\n=== Transaction History (Reverse) ===\n";
        TransactionNode* current = tail;
        int count = 1;
        
        while (current != nullptr) {
            cout << count << ". From: " << current->transaction.fromAccount 
                 << " -> To: " << current->transaction.toAccount
                 << " | Amount: $" << current->transaction.amount
                 << " | Date: " << current->transaction.date << "\n";
            current = current->prev;
            count++;
        }
        cout << "======================================\n";
    }
    
    // Cleanup
    ~TransactionSystem() {
        while (head != nullptr) {
            TransactionNode* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    TransactionSystem system;
    
    // Create accounts
    system.addAccount("Alice", 101, 5000);
    system.addAccount("Bob", 102, 3000);
    system.addAccount("Charlie", 103, 2000);
    
    system.displayAccounts();
    
    // Make transactions
    system.makeTransaction(101, 102, 500, "2025-01-15");
    system.makeTransaction(102, 103, 300, "2025-01-16");
    system.makeTransaction(103, 101, 200, "2025-01-17");
    
    system.displayAccounts();
    system.displayTransactions();
    system.displayTransactionsReverse();
    
    return 0;
}