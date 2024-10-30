# Variables
TASK ?= task1
FILE ?= main
SRC = $(TASK)/$(FILE).c
EXEC = $(TASK)/$(FILE)
COMMIT_MSG ?= "Initial commit"
USERNAME ?= Nehal-2

# Current directory
REPO_NAME := $(notdir $(shell pwd))

# Default target: compile the C source files
all: compile

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
	@find . -type f -executable -exec rm -f {} +

# Edit the specified C file with vim
edit:
	@echo "Opening $(SRC) in vim..."
	@vim $(SRC)

# Git repository target
git:
	@echo "Initializing git repository if not initialized..."
	@git init
	@echo "Setting the remote repository URL..."
	@-git remote add origin https://github.com/$(USERNAME)/$(REPO_NAME).git || echo "Remote origin already exists, skipping..."
	@echo "Setting the branch to main..."
	@git branch -M main
	@git add .

# Git commit target
commit:
	@echo "Committing changes..."
	@git commit -m "$(COMMIT_MSG)"
	@echo "Pushing changes to the main branch..."
	@git push -u origin main

# Declare phony targets
.PHONY: all compile run clean edit push
