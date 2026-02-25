#ifndef PART_H
#define PART_H

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};

/* 只声明，不定义 */
extern struct part inventory[MAX_PARTS];
extern int num_parts;

#endif