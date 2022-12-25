#include <fstream>
#include <cstring>
#include <iostream>
#include <cstdlib>

using namespace std;

struct chis {
    char val[10];
    char i[15];
    chis* next;
};

struct Dynamic {
    chis* head;
    chis* tail;
};

void Create(Dynamic& l)
{
    l.head = NULL;
}

bool IsEmpty(Dynamic l)
{
    return (l.head == NULL);
}

chis* Search(Dynamic l, char* n)
{
    while (l.head != NULL)
    {
        if (!strcmp(l.head->i, n))
            return l.head;
        l.head = l.head->next;
    }
    return l.head;
}

void Add(Dynamic& l, char* n, char* v)
{
    chis* c = new chis();
    strcpy_s(c->i, 20, n);
    strcpy_s(c->val, 10, v);
    c->next = NULL;
    if (IsEmpty(l))
        l.head = c;
    else
        l.tail->next = c;
    l.tail = c;
}

chis* search(Dynamic l, char* n)
{
    while (l.head != NULL)
    {
        if (!strcmp(l.head->i, n))
            return l.head;
        l.head = l.head->next;
    }
    return l.head;
}

void Edit(chis& c, char* v)
{
    strcpy_s(c.val, 10, v);
}

void Del(Dynamic& l, chis* c)
{
    if (c == l.head)
    {
        l.head = c->next;
        return;
    }
    chis* r = new chis();
    r = l.head;
    while (r->next != c)
        r = r->next;
    r->next = c->next;
    delete c;
}

int main()
{
    setlocale(LC_ALL, "Russian");    
    return 0;
}