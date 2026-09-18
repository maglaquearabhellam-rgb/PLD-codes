cout << "--- 7. Dog Age Calculator ---\n";
    string dog_name;
    double human_years;

    cout << "Enter your dog's name: ";
    cin >> dog_name;
    cout << "Enter " << dog_name << "'s age in human years: ";
    cin >> human_years;

    double dog_years = human_years * 7;

    cout << dog_name << " is approximately " << dog_years << " dog years old!\n";

    return 0;
}