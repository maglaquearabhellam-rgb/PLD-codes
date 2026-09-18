cout << "--- 5. Floor Covering Calculator ---\n";
    double room_length, room_width;
    cout << "Enter room length in feet: ";
    cin >> room_length;
    cout << "Enter room width in feet: ";
    cin >> room_width;

    double sq_feet = room_length * room_width;
    double sq_yards = sq_feet / 9.0;

    cout << "Floor Area: " << sq_feet << " sq ft (" << sq_yards << " sq yards)\n\n";