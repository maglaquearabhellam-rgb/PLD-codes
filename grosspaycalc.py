print("--- 1. Gross Pay Calculator ---")
hours = float(input("Enter hours worked per week: "))
rate = float(input("Enter rate per hour: "))

weekly_pay = hours * rate
monthly_pay = weekly_pay * 4  # Sinusukat bilang 4 na linggo sa isang buwan
annual_pay = weekly_pay * 52  # 52 linggo sa isang taon

print(f"Weekly Gross Pay:  ${weekly_pay:.2f}")
print(f"Monthly Gross Pay: ${monthly_pay:.2f}")
print(f"Annual Gross Pay:  ${annual_pay:.2f}\n")