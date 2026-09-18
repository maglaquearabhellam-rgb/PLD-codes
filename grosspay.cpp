cout << "--- 1. Gross Pay Calculator ---\n";
    double hours, rate;
    cout << "Enter hours worked per week: ";
    cin >> hours;
    cout << "Enter rate per hour: ";
    cin >> rate;

    double weekly_pay = hours * rate;
    double monthly_pay = weekly_pay * 4;
    double annual_pay = weekly_pay * 52;

    cout << "Weekly Gross Pay:  $" << weekly_pay << "\n";
    cout << "Monthly Gross Pay: $" << monthly_pay << "\n";
    cout << "Annual Gross Pay:  $" << annual_pay << "\n\n";