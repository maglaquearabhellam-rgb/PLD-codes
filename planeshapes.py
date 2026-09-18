print("--- 4. Area of Plane Shapes ---")
# Rectangle
length_rect = float(input("Enter rectangle length: "))
width_rect = float(input("Enter rectangle width: "))
print(f"Rectangle Area: {length_rect * width_rect:.2f}\n")

# Triangle
base_tri = float(input("Enter triangle base: "))
height_tri = float(input("Enter triangle height: "))
print(f"Triangle Area: {0.5 * base_tri * height_tri:.2f}\n")

# Circle
radius = float(input("Enter circle radius: "))
print(f"Circle Area: {3.14159 * (radius ** 2):.2f}\n")