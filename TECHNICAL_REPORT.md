PAP521S – Project A Technical Report
Municipal Financial Management System

1. Introduction

Project A implements the foundation version of a Municipal Financial Management System (MFMS) using C99. The system demonstrates the programming concepts covered during the first part of PAP521S by applying them to a realistic municipal financial management problem.

2. Problem Description

A municipality needs a simple way to organise basic information relating to employees, departmental budgets, suppliers and municipal assets. The foundation system provides menu-driven functionality for entering, processing, searching and reporting this information.

3. System Objectives

The main objectives are to:
- develop a menu-driven C application;
- use variables and suitable data types;
- validate user input;
- apply arithmetic, relational and logical operators;
- use decisions and loops;
- store information in arrays;
- process strings;
- create functions with parameters and return values; and
- organise the program into logical modules.

4. System Features

The system contains Employee Management, Budget Management, Supplier Management, Asset Management and Reports.

Employee Management stores employee ID, name, department and salary components. The program calculates total salary by adding basic salary and allowances.

Budget Management stores departmental allocations and expenditure. The remaining budget is calculated by subtracting expenditure from the allocation. A department is reported as over budget when expenditure is greater than its allocation.

Supplier Management stores supplier ID, name, email, telephone number and location. Users can add, display and search suppliers.

Asset Management stores asset ID, name, type, purchase value, department and condition. Users can display and search registered assets.

The Reports module produces employee, budget, supplier and asset reports.

5. Program Design

The program uses structures to group related data. Arrays store multiple Employee, Budget, Supplier and Asset records. Functions separate the application into manageable modules.

The main program controls navigation through the main menu. Each module has its own menu and functions. Header files contain structure definitions and function declarations, while source files contain implementations.

String processing uses functions such as strlen(), strcmp() and strcspn(). Input validation uses loops and numerical conversion functions to prevent invalid numerical input.

6. Challenges Encountered

Potential implementation challenges include validating different types of input, preventing duplicate IDs, calculating report statistics correctly and keeping the main program organised as the number of features increases.

7. Solutions Implemented

Reusable input functions were created for integers, decimal numbers and non-empty strings. Duplicate IDs are checked before records are stored. Salary and budget calculations are placed in dedicated functions. Separate source and header files keep the system modular and easier to test.

8. Conclusion

The completed MFMS provides the required foundation functionality for Project A. It demonstrates input, processing, storage, search, calculation and output using C programming concepts. The modular design also provides a suitable foundation for future extensions and improvements in Project B.
