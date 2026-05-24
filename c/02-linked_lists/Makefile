BUILD_DIR = build
TARGET = $(BUILD_DIR)/linked_lists

linked_lists: linked_lists.c | $(BUILD_DIR)
	gcc -g linked_lists.c -o $(TARGET) -std=c99

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
