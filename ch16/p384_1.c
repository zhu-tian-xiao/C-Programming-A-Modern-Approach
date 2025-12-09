#define NAME_LEN 20
struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

typedef struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} Part;

void f(struct part part1)
{
    // expression must have a constant value
    // static struct part part2 = part1;
}
int main()
{
    struct part part1 = {528, "Disk drive", 10};
    struct part part2;
    part2 = part1;

    Part part1, part2;
}
