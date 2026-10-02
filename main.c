#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "suppliers.h"
#include "assets.h"
#include "reports.h"
#include "input.h"

static void displayMenu(void) {
    printf("\n========================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    printf("1. Employee Management\n");
    printf("2. Budget Management\n");
    printf("3. Supplier Management\n");
    printf("4. Asset Management\n");
    printf("5. Reports\n");
    printf("6. Exit\n");
    printf("========================================\n");
}

int main(void) {
    Employee employees[MAX_EMPLOYEES] = {0};
    Budget budgets[MAX_BUDGETS] = {0};
    Supplier suppliers[MAX_SUPPLIERS] = {0};
    Asset assets[MAX_ASSETS] = {0};

    int employeeCount = 0, budgetCount = 0;
    int supplierCount = 0, assetCount = 0;
    int choice;

    printf("Welcome to the Municipal Financial Management System!\n");

    do {
        displayMenu();
        choice = readInt("Enter your choice: ", 1, 6);

        switch (choice) {
            case 1:
                employeeMenu(employees, &employeeCount);
                break;
            case 2:
                budgetMenu(budgets, &budgetCount);
                break;
            case 3:
                supplierMenu(suppliers, &supplierCount);
                break;
            case 4:
                assetMenu(assets, &assetCount);
                break;
            case 5:
                reportsMenu(employees, employeeCount, budgets, budgetCount,
                             suppliers, supplierCount, assets, assetCount);
                break;
            case 6:
                printf("\nThank you for using the MFMS. Goodbye!\n");
                break;
        }
    } while (choice != 6);

    return 0;
}
