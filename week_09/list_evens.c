int list_evens(struct node *head1, struct node *head2) {
    int found1 = 0, found2 = 0;
    while (head1 != NULL && found1 == 0) {
        if (head1->data % 2 == 0) {
            found1 = 1;
        }
        head1 = head1->next;
    }

    while (head2 != NULL && found2 == 0) {
        if (head2->data % 2 == 0) {
            found2 = 1;
        }
        head2 = head2->next;
    }

    if (found1 && found2) {
        return -1;
    }
    
    if ( found1 || found2) {
        return 1;
    }
    
    return 0;

}
