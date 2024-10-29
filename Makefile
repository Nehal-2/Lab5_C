# Variables
TASK ?= task1
FILE ?= main
SRC = $(TASK)/$(FILE).c
EXEC = $(TASK)/$(FILE)

# Default target: compile the C source files
compile:
	@echo "Compiling C files in $(TASK)..."
	@gcc $(SRC) -o $(EXEC)

# Run the compiled executable
run: compile
	@echo "Running $(EXEC)..."
	@./$(EXEC)

# Clean up generated executable
clean:
	@echo "Cleaning up $(EXEC)..."
	@rm -f $(EXEC)

# Edit the specified C file with vim
edit:
	@echo "Opening $(SRC) in vim..."
	@vim $(SRC) 
