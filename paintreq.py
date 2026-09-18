print("--- 6. Paint Requirement Calculator ---")
length = float(input("Enter room length (ft): "))
width = float(input("Enter room width (ft): "))
height = float(input("Enter room height (ft): "))
price_per_gallon = float(input("Enter price per gallon of paint: "))
coverage_per_gallon = float(input("Enter coverage per gallon (sq ft): "))

# Total wall area = 2 * length * height + 2 * width * height
wall_area = (2 * length * height) + (2 * width * height)

# Round up technique directly from instructions (+ 0.9999 then convert to int)
gallons_needed = int((wall_area / coverage_per_gallon) + 0.9999)
total_cost = gallons_needed * price_per_gallon

print(f"Total Wall Area: {wall_area:.2f} sq ft")
print(f"Gallons Needed: {gallons_needed}")
print(f"Total Paint Cost: ${total_cost:.2f}\n")