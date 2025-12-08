#define ADD(x,y) (x+y)

#define MK_STR(x) #x

#define JOIN(x,y,z) x##y##z

int main()
{
    int i = ADD(,2);
    char empty_string[] = MK_STR();
    int JOIN(a,b,c), JOIN(a,b,), JOIN(a,,c), JOIN(,,c);
}

