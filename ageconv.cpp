cout << "--- 2. Age Converter ---\n";
    double age_years;
    cout << "Enter your age in years: ";
    cin >> age_years;

    double months = age_years * 12;
    double days = age_years * 365;
    double hours_age = days * 24;
    double seconds = hours_age * 3600;

    cout << "Months:  " << months << "\n";
    cout << "Days:    " << days << "\n";
    cout << "Hours:   " << hours_age << "\n";
    cout << "Seconds: " << seconds << "\n\n";