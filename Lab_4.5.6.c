#include <stdio.h>

void show(const char *label, size_t s) {
    // imprime "1 byte" o "N bytes" según corresponda
    printf("%zu %s for %s\n", s, s == 1 ? "byte" : "bytes", label);
}

int main(void) {
    char c; 
    char *pchar = &c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    void *pv = NULL;

    show("chars", sizeof(char));
    show("char variables", sizeof(c));
    show("shorts", sizeof(short));
    show("short variables", sizeof(s));
    show("ints", sizeof(int));
    show("int variables", sizeof(i));
    show("longs", sizeof(long));
    show("long variables", sizeof(l));
    show("long longs", sizeof(long long));
    show("long long variables", sizeof(ll));
    show("floats", sizeof(float));
    show("float variables", sizeof(f));
    show("doubles", sizeof(double));
    show("double variables", sizeof(d));
    show("pointers", sizeof(void *));
    show("pointer variables", sizeof(pv));
    show("address of char variable", sizeof(&c));
    show("pointer to char variable", sizeof(char *));
    show("value stored by pointer to char variable", sizeof(*pchar));

    return 0;
}
