cout << "--- 3. Distance Converter ---\n";
    double miles;
    cout << "Enter distance in miles: ";
    cin >> miles;

    // US Standard
    double yards = miles * 1760;
    double feet = miles * 5280;
    double inches = miles * 63360;

    // Metric System
    double kilometers = miles * 1.60934;
    double meters = kilometers * 1000;
    double centimeters = meters * 100;

    cout << "\nUS Standard:\n";
    cout << "- Yards:  " << yards << "\n";
    cout << "- Feet:   " << feet << "\n";
    cout << "- Inches: " << inches << "\n";

    cout << "\nMetric System:\n";
    cout << "- Kilometers:  " << kilometers << "\n";
    cout << "- Meters:      " << meters << "\n";
    cout << "- Centimeters: " << centimeters << "\n\n";