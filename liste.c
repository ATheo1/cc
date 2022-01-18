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

void tri_liste(liste l)
{
    bool count = true;
    while(count)
    {
        liste tmp = l;
        count = false;
        while(tmp->next)
        {
            if (tmp->val > tmp->next->val)
            {
                printf("================\n");
                printf("CHANGE : %d with %d\nMy state is: \n", tmp->val, tmp->next->val);
                swap(tmp, tmp->next);
                print_list(l);
                printf("================\n\n");
                count = true;
            }
            tmp = tmp->next;
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
    tri_liste(test_list1);
    print_list(test_list1);

    return 0;
}
