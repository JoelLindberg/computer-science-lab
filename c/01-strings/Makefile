BUILD_DIR = build
STRINGS_TARGET = $(BUILD_DIR)/strings
REVERSE_TARGET = $(BUILD_DIR)/reverse_string

all: $(STRINGS_TARGET) $(REVERSE_TARGET)

$(STRINGS_TARGET): strings.c | $(BUILD_DIR)
	gcc -g strings.c -o $(STRINGS_TARGET) -std=c99

$(REVERSE_TARGET): reverse_string.c | $(BUILD_DIR)
	gcc -g reverse_string.c -o $(REVERSE_TARGET) -std=c99

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
