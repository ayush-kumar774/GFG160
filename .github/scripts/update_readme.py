import os
import re
from tabulate import tabulate

# Configurable paths
LANGUAGES = {
    "Java": "Java",
    "C++": "CPP",
    "Python": "Python",
    "JavaScript": "Javascript"
}

PROBLEM_DIR = "Arrays|String|Hashing|Sorting|Recursion|.*"  # flexible match
README_PATH = "README.md"
TABLE_START = "<!-- START -->"
TABLE_END = "<!-- END -->"

# Regex pattern to match filenames like D1_SomeProblemName.ext
FILENAME_PATTERN = re.compile(r"D(\d+)_.*\.(java|cpp|py|js)", re.IGNORECASE)

# Collect all found solutions
day_solutions = {}

for lang, root in LANGUAGES.items():
    for dirpath, _, filenames in os.walk(root):
        for file in filenames:
            match = FILENAME_PATTERN.match(file)
            if match:
                day = int(match.group(1))
                if day not in day_solutions:
                    day_solutions[day] = {}
                day_solutions[day][lang] = "✅"

# Generate table rows
max_day = max(day_solutions.keys()) if day_solutions else 0
table = []

for day in range(1, max_day + 1):
    row = [
        f"Day {day}",
        day_solutions.get(day, {}).get("Java", "❌"),
        day_solutions.get(day, {}).get("C++", "❌"),
        day_solutions.get(day, {}).get("Python", "❌"),
        day_solutions.get(day, {}).get("JavaScript", "❌"),
    ]
    table.append(row)

# Render table
headers = ["Day", "Java", "C++", "Python", "JavaScript"]
table_md = tabulate(table, headers=headers, tablefmt="github")

# Insert into README
with open(README_PATH, "r") as f:
    content = f.read()

if TABLE_START in content and TABLE_END in content:
    new_content = content.split(TABLE_START)[0] + TABLE_START + "\n"
    new_content += table_md + "\n" + TABLE_END + content.split(TABLE_END)[1]
else:
    # Append the table if no markers found
    new_content = content + "\n\n" + TABLE_START + "\n" + table_md + "\n" + TABLE_END

# Write updated README
with open(README_PATH, "w") as f:
    f.write(new_content)

print("✅ README updated with current progress.")
