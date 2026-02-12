#include "part.h"
#include "readline.h"
#include <stdio.h>
void init_info(struct info_parts *info) {
  info->nums_parts = 0;
  // memset(info->inventory, 0, sizeof(info->inventory));
}

/**
 * 根据part.number来查找part位置，如果没有找到，返回-1
 */
int find_part(struct info_parts *info, int number) {
  for (int i = 0; i < info->nums_parts; i++) {
    if (info->inventory[i].number == number) {
      return i;
    }
  }
  return -1;
}

void insert(struct info_parts *info) {
  int part_number;
  if (info->nums_parts == MAX_PARTS) {
    printf("Database is full; can't add more parts.\n");
    return;
  }
  printf("Enter part number: ");
  scanf("%d", &part_number);
  if (find_part(info, part_number) >= 0) {
    printf("Part already exists.\n");
    return;
  }
  info->inventory[info->nums_parts].number = part_number;
  printf("Enter part name: ");
  read_line(info->inventory[info->nums_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &(info->inventory[info->nums_parts].on_hand));
  info->nums_parts++;
}

void search(struct info_parts *info) {
  int number;
  printf("Enter part number: ");
  scanf("%d", &number);
  int i = find_part(info, number);
  if (i >= 0) {
    printf("Part name: %s\n", info->inventory[i].name);
    printf("Quantity on hand: %d\n", info->inventory[i].on_hand);
  } else {
    printf("Part not found.\n");
  }
}

void update(struct info_parts *info) {
  int number;
  printf("Enter part number: ");
  scanf("%d", &number);

  int i = find_part(info, number);
  int change;
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    info->inventory[i].on_hand += change;
  } else {
    printf("Part not found.\n");
  }
}

void print(struct info_parts *info) {
  printf(
      "Part Number Part Name "
      "Quantity on Hand\n");

  for (int i = 0; i < info->nums_parts; i++) {
    printf("%7d %-25s%11d\n", info->inventory[i].number, info->inventory[i].name, info->inventory[i].on_hand);
  }
}