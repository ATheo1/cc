typedef struct node 
{
    int val;
    struct node* next;

} noeud;

typedef noeud* liste;

void swap(liste l, liste p)
{
    int tmp = l->val;
    l->val = p->val;
    p->val = tmp;
}

void tri_liste(liste l, liste p, int taille)
{
    bool count = true;
    while(count)
    {
        count = false;
        for (int i = 0; i < taille -2; i++)
        {
            if (l->val > p->val)
            {
                swap(l, p);
                count = true;
                l = l->next;
                p = p->next;
                printf("val l =%d, val p =%d\n", l->val, p->val);
            }
        }
    }
}

int main(void)
{
    liste test_list1 = (liste)calloc(1, sizeof(noeud));
    liste test_list2 = (liste)calloc(1, sizeof(noeud));
    liste test_list3 = (liste)calloc(1, sizeof(noeud));
    liste test_list4 = (liste)calloc(1, sizeof(noeud));

    test_list1->next = test_list2;
    test_list2->next = test_list3;
    test_list3->next = test_list4;

    test_list1->val = 4;
    test_list2->val = 2;
    test_list3->val = 1;
    test_list4->val = 5;
    tri_liste(test_list1, test_list2, 4);
    print_list(test_list1);

    return 0;
}
