# Function to calculate gross salary
def calculate_gross_salary(basic, grade):
    # Calculate HRA, DA, and Allowance based on the provided information
    hra = 0.20 * basic
    da = 0.50 * basic
    if grade == 'A':
        allowance = 1700
    elif grade == 'B':
        allowance = 1500
    else:
        allowance = 1300
    
    # Calculate gross salary
    gross_salary = basic + hra + da + allowance
    
    return gross_salary

# Test cases
basic_A = 10000
grade_A = 'A'
gross_salary_A = calculate_gross_salary(basic_A, grade_A)
print(f"Gross Salary (Grade A): ${gross_salary_A:.2f}")

basic_B = 4567
grade_B = 'B'
gross_salary_B = calculate_gross_salary(basic_B, grade_B)
print(f"Gross Salary (Grade B): ${gross_salary_B:.2f}")

# Save this program to GitHub
# Please replace 'username' and 'repository-name' with your actual GitHub username and repository name
github_url = "https://github.com/username/repository-name"
print(f"Save this program to GitHub: {github_url}")

