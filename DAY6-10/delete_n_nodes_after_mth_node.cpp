class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
       if(head==NULL)
       return;
       Node* temp=head;
       Node*prev=NULL;
       Node* nextnode;
       int i=M;
       int j=N;
       
       while(M && temp!=NULL){
           prev=temp;
           temp=temp->next;
           M--;
       }
   while(N  && temp!=NULL){
       prev->next=temp->next;
       Node* todel=temp;
       temp=temp->next;
       N--;
   
   }

   linkdelete(temp, i,j);  
    }
};
