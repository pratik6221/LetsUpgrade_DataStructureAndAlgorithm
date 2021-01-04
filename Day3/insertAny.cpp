//function to insert a node at any position
void insertAny(Node** current, int pos, int data)
{
    
    if (pos < 1 || pos > size + 1)
        cout << "Invalid position!" << endl;
    else {
 
        
        while (pos--) {
 
            if (pos == 0) {
 
               
                Node* temp = getNode(data);
 
               
                temp->next = *current;
 
                *current = temp;
            }
            else
              
              current = &(*current)->next;
        }
        size++;
    }
}
