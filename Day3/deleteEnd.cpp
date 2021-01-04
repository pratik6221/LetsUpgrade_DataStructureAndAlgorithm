//function for deleting a node from the end of the linked list.
void deleteEnd()
{
	Node *ptr;
	Node *prev;
	
	if(head==NULL)
	{
		cout<<"List is empty";
	}
	
	if(head->link==NULL)
	{
		ptr=head;
		head=NULL;
		free(ptr);
	}
	else
	{
		ptr=head;
		while(ptr->link!=NULL)
		{
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=NULL;
		free(ptr);
	}
}
