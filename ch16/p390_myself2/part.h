#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};

// 记录parts的数量，设计仓库
struct info_parts {
  int nums_parts;
  struct part inventory[MAX_PARTS];
};

void init_info(struct info_parts *info);

int find_part(struct info_parts *info, int number);
void insert(struct info_parts *info);
void search(struct info_parts *info);
void update(struct info_parts *info);
void print(struct info_parts *info);