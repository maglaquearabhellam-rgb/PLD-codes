print("--- 3. Distance Converter ---")
miles = float(input("Enter distance in miles: "))

# US Standard
yards = miles * 1760
feet = miles * 5280
inches = miles * 63360

# Metric System
kilometers = miles * 1.60934
meters = kilometers * 1000
centimeters = meters * 100

print(f"\nUS Standard:")
print(f"- Yards:  {yards:,.2f}")
print(f"- Feet:   {feet:,.2f}")
print(f"- Inches: {inches:,.2f}")

print(f"\nMetric System:")
print(f"- Kilometers:  {kilometers:,.2f}")
print(f"- Meters:      {meters:,.2f}")
print(f"- Centimeters: {centimeters:,.2f}\n")