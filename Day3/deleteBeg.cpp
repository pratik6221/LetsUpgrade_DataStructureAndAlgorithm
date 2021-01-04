//function for deleting a node from the beginning of the linked list.
void deleteBeg()
{	
	if(head==NULL)
	{
		cout<<"List is empty";
	}
	else
	{
		Node *ptr=head;
		head=head->link;
		free(ptr);
	}
}
