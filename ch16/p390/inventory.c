
#include <stdio.h>

#define NAME_LEN 20
#define INVENTORY_LEN 10
struct item {
  size_t part_number;
  char part_name[NAME_LEN + 1];
  int quantity;
};
static int insert_location = 0;

void read_line(char line[], size_t len);
void handle_insert(struct item inventory[]);
void handle_search(struct item inventory[], size_t size);
void handle_update(struct item inventory[]);
void handle_print(struct item inventory[], size_t size);

int main() {
  struct item inventory[INVENTORY_LEN] = {0};
  for (;;) {
    printf("Enter operation code: ");
    char code;
    scanf("%c", &code);
    getchar();

    switch (code) {
      case 'i':
        handle_insert(inventory);
        break;
      case 's':
        handle_search(inventory, insert_location);
        break;
      case 'u':
        handle_update(inventory);
        break;

      case 'p':
        handle_print(inventory, insert_location);
        break;
      case 'q':
        return 0;
      default:
        break;
    }
    putchar('\n');
  }
}

void handle_insert(struct item inventory[]) {
  struct item item;

  printf("Enter part number: ");
  scanf("%lu", &item.part_number);
  getchar();
  printf("Enter part name: ");
  read_line(item.part_name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &item.quantity);
  getchar();

  inventory[insert_location++] = item;
}

void handle_print(struct item inventory[], size_t size) {
  printf("%-32s%-32s%-32s\n", "Part Number", "Part Name", "Quantity on Hand");
  struct item* item = inventory;
  while (item < inventory + size) {
    printf("%7lu\t\t\t\t%-20s\t\t\t%5d\n", item->part_number, item->part_name,
           item->quantity);
    item++;
  }
}

void handle_search(struct item inventory[], size_t size) {
  size_t part_number;
  printf("Enter part number: ");
  scanf("%lu", &part_number);
  getchar();

  struct item* item;
  for (item = inventory; item < inventory + size; item++) {
    if (item->part_number == part_number) {
      printf("Part name: %s\n", item->part_name);
      printf("Quantity on hand: %d\n", item->quantity);
      return;
    }
  }
  printf("Part not found.\n");
}

void handle_update(struct item inventory[]) {
  size_t part_number;
  int change;
  printf("Enter part number: ");
  scanf("%lu", &part_number);
  getchar();
  printf("Enter change in quantity on hand: ");
  scanf("%d", &change);
  getchar();
  struct item* item = inventory;
  while (item < inventory + INVENTORY_LEN) {
    if (item->part_number == part_number) {
      item->quantity += change;
      return;
    }
    item++;
  }
}
void read_line(char line[], size_t len) {
  char ch;
  int i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < len) {
      line[i++] = ch;
    }
  }
  line[i] = '\0';
}