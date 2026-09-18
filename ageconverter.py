print("--- 2. Age Converter ---")
age_years = float(input("Enter your age in years: "))

months = age_years * 12
days = age_years * 365
hours_age = days * 24
seconds = hours_age * 3600

print(f"Months:  {months:,.2f}")
print(f"Days:    {days:,.2f}")
print(f"Hours:   {hours_age:,.2f}")
print(f"Seconds: {seconds:,.2f}\n")