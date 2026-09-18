cout << "--- 6. Paint Requirement Calculator ---\n";
    double length, width, height, price_per_gallon, coverage_per_gallon;
    cout << "Enter room length (ft): ";
    cin >> length;
    cout << "Enter room width (ft): ";
    cin >> width;
    cout << "Enter room height (ft): ";
    cin >> height;
    cout << "Enter price per gallon of paint: ";
    cin >> price_per_gallon;
    cout << "Enter coverage per gallon (sq ft): ";
    cin >> coverage_per_gallon;

    double wall_area = (2 * length * height) + (2 * width * height);

    // Sumusunod sa formula ng module (+ 0.9999 bago i-cast sa int para mag-round up)
    int gallons_needed = static_cast<int>((wall_area / coverage_per_gallon) + 0.9999);
    double total_cost = gallons_needed * price_per_gallon;

    cout << "Total Wall Area: " << wall_area << " sq ft\n";
    cout << "Gallons Needed: " << gallons_needed << "\n";
    cout << "Total Paint Cost: $" << total_cost << "\n\n";