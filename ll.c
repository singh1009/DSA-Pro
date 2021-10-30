// function to delete first node: uses approach 2.2
// See http://ideone.com/P5oLe for complete program and output
struct Node *deleteFirst(struct Node *head)
{
	if(head != NULL)
	{
	// store the old value of head pointer
	struct Node *temp = head;

	// Change head pointer to point to next node
	head = head->next;

	// delete memory allocated for the previous head node
	free(temp);
	}

	return head;
}
