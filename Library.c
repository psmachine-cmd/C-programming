#include <stdio.h>

int main() {
    int book_ID, due_date, return_date, days_overdue;
    float fine_rate = 0.0, fine_amount = 0.0;

    // Input Book ID
    printf("Enter the Book ID: ");
    scanf("%d", &book_ID);
    
    // Input due date and return date
    printf("Enter the due date (in days): ");
    scanf("%d", &due_date);
    
    printf("Enter the return date (in days): ");
    scanf("%d", &return_date);
    
    // Calculate days overdue
    days_overdue = return_date - due_date;
    
    // Determine fine rate based on days overdue
    if (days_overdue <= 0) {
        fine_rate = 0.0;
        fine_amount = 0.0;
    } else if (days_overdue <= 7) {
        fine_rate = 20.0;
    } else if (days_overdue <= 14) {
        fine_rate = 50.0;
    } else {
        fine_rate = 100.0;
    }

    // Calculate total fine amount
    fine_amount = fine_rate * days_overdue;

    // Output the results
    printf("\nBook ID: %d\n", book_ID);
    printf("Due Date: %d\n", due_date);
    printf("Return Date: %d\n", return_date);
    printf("Days Overdue: %d\n", days_overdue);
    printf("Fine Rate (per day): ksh %.2f\n", fine_rate);
    printf("Total Fine Amount: ksh %.2f\n", fine_amount);
    
    return 0;
}

