cout << "--- 4. Area of Plane Shapes ---\n";
    // Rectangle
    double length_rect, width_rect;
    cout << "Enter rectangle length: ";
    cin >> length_rect;
    cout << "Enter rectangle width: ";
    cin >> width_rect;
    cout << "Rectangle Area: " << (length_rect * width_rect) << "\n\n";

    // Triangle
    double base_tri, height_tri;
    cout << "Enter triangle base: ";
    cin >> base_tri;
    cout << "Enter triangle height: ";
    cin >> height_tri;
    cout << "Triangle Area: " << (0.5 * base_tri * height_tri) << "\n\n";

    // Circle
    double radius;
    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Circle Area: " << (3.14159 * radius * radius) << "\n\n";