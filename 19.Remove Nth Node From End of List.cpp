/*��iΪ0����head��ʼ�����������ƶ�һ��node��i++,��i=nʱ��ʱ��node��head�ľ���ǡ����n����
Ȼ��head��nodeһ���ƶ��������ʱhead��ָ���λ�ü��ǵ�����n��*/
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * node=head,*preNode;
        preNode->next=head;
        if(n==0){
            return head;
        }
        int i=0,k=0;
        while(true){
            if(node->next==NULL){
                if(n==1){
                    preNode->next=NULL;
                }else{
                    preNode->next=preNode->next->next;
                    
                }
                if(k==0){
                    head=preNode->next;
                }
                return head;
            }
            if(i!=n-1){
                i++;
            }else{
                preNode=preNode->next;
                k++;
            }
            node=node->next;
        }
        
    }