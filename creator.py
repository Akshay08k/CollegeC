import os

# Define the starting and ending program numbers
start_number = 44
end_number = 160

# Directory where the files will be created
directory = "."



# Loop through the range of program numbers and create files
for i in range(start_number, end_number + 1):
    file_name = f"PROG{i}.C"
    file_path = os.path.join(directory, file_name)
    
    # Create and open the file for writing
    with open(file_path, "w") as file:
        # Optionally, you can add some initial content to each file
        file.write(f"/*\n * Program {i}: Description of what this program does\n */\n\n")
        file.write("#include <stdio.h>\n\n")
        file.write("int main() {\n")
        file.write("    // Your code here\n")
        file.write("    return 0;\n")
        file.write("}\n")
    
    print(f"Created {file_name}")

print(f"All files from PROG{start_number}.C to PROG{end_number}.C have been created.")
