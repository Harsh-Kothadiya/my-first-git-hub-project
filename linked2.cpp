//linked list
#include<iostream>
#include<conio.h>
using namespace std;

struct linkedlist
{
    int info;
    struct linkedlist *link;
};

typedef struct linkedlist node;
node *Head=NULL;
node *t;

void insertAtBegining(int info)
{
    node *IB;
    IB=new node;
    IB->info=info;
    IB->link=Head;
    Head=IB;
    cout<<"\n\n VALUE INSERTED BEGINING";
    
}

void insertAtLast(int info)
{
    node *IE,*tmp,*save;
    IE=new node;
    IE->info=info;
    IE->link=NULL;
    if(Head==NULL)
    {
        Head=IE;
    }
    else
    {
        t=Head;
        while(t!=NULL)
        {
            save=t;
            t=t->link;
        }
        save->link=IE;
    }
    cout<<"\n\n VALUE INSERTED ENDINING";
    
}

void insertOrder(int info)
{
    node *IO;
    IO=new node;
    IO->info=info;
    IO->link=NULL;

    if(Head==NULL)
     Head=IO;
    else
    {
    	IO->link=Head;
    	Head=IO;
    	
    	node *travel=Head;
    	int p=1;
    	while(1)
    	{
    		travel=travel->link;
    		if(travel==NULL)
    			break;
    		p=p+1;
		}
		int n=p;
		int i,j,Linked_list[n];
		node *t1=Head;
		for(i=0;i<n;i++)
		{
			Linked_list[i]=t1->info;
			t1=t1->link;
		}
		
		int tmp;
		for(i=1;i<n;i++)
		{
			tmp=Linked_list[i];
			for(j=i-1;j>=0&&tmp<Linked_list[j];j--)
			{
				Linked_list[j+1]=Linked_list[j];
			}
			Linked_list[j+1]=tmp;
		}
		
		node *t2=Head;
		cout<<"\n\n ASCENDING ORDER \n\n";
		for(i=0;i<n;i++)
		{
			cout<<Linked_list[i]<<"\t";
			t2->info=Linked_list[i];
			t2=t2->link;
		}
		cout<<"\n\n DESCENDING ORDER \n\n";
		for(i=n-1;i>=0;i--)
		{
			cout<<Linked_list[i]<<"\t";
		}
	}
	
	
}

void Display()
{
    int position=1;
    node *travel;
    if(Head==NULL)
    {
        cout<<"\n\n LIST IS EMPTY";
        
    }
    else
    {
        travel=Head;
        while(travel)//(travel!=NULL)
        {
            cout<<"\n\n POSITION IS :  "<<position<<" : VALUE IS : "<<travel->info;
            travel=travel->link;
            position=position+1;

        }
    }
    
    

}

void deleteAtBegining()
{
    node *DB;
    if(Head==NULL)
        cout<<"\n\n LIST IS EMPTY";
    else
    {
    	int val;
        DB=Head;
        val=DB->info;
        Head=Head->link;
        delete DB;
        cout<<"\n\n NODE DELETED \n\t DELETED NODE INFO PART IS : "<<val;
    }
    
    
}

void deleteAtLast()
{

    if(Head==NULL)
        cout<<"\n\n LIST IS EMPTY";
    else
    {
    	node *t,*DL;
    	t=Head;
    	if(t->link==NULL)
    	{
    		DL=t;
    		Head=NULL;
    		int val;
			val=DL->info;
			delete DL;
			cout<<"\n\n NODE DELETED \n\t DELETED NODE INFO PART IS : "<<val;
		}
		else
		{
			node *t1=Head;
			int p=1;
			while(1)
			{
				if(t1->link==NULL)
					break;
				p=p+1;
				t1=t1->link;
			}
			int n=p;
			node *t2=Head;
			int i,a[n];
			for(i=1;i<=n;i++)
			{
				a[i]=t2->info;
				t2=t2->link;
			}
			
			node *t3=Head;
			for(i=1;i<=n;i++)
			{
				DL=t3;
				t3->info=a[i];
				t3=t3->link;
			}
			
			node *save=Head;
			for(i=1;i<n-1;i++)
			{
				save=save->link;
			}
			save->link=NULL;
			int val=DL->info;
			delete DL;
			cout<<"\n\n NODE DELETED \n\t DELETED NODE INFO PART IS : "<<val;
    
		}
		
		
	}
}

void Reverse ()
{
	if(Head==NULL)
		cout<<"\n\n LINKED LIST IS EMPTY...";
	else
	{
		cout<<"\n\n\t REVEESE VALUE \n";
		node *travel=Head;
		int p=1;
		while(1)
		{
			if(travel->link==NULL)
				break;
			p=p+1;
			travel=travel->link;
		}
		int n=p,i,R[n];
		node *t=Head;
		for(i=1;i<=n;i++)
		{
			R[i]=t->info;
			t=t->link;
		}
		for(i=n;i>=1;i--)
		{
			cout<<R[i]<<"\t";
		}
		
	}
}


void COUNT ()
{
	if(Head==NULL)
		cout<<"\n\n LINKED LIST IS EMPTY...";
	else
	{
		node *travel=Head;
		int p=1;
		while(1)
		{
			if(travel->link==NULL)
				break;
			p=p+1;
			travel=travel->link;
		}
		cout<<"\n\t TOTAL NODE : "<<p;
	}
}


void SEARCH ()
{
	if(Head==NULL)
		cout<<"\n\n LINKED LIST IS EMPTY...";
	else
	{
		
		node *travel=Head;
		int p=1;
		cout<<"\n\t AVALIABLE POSITION : ";
		while(1)
		{
			cout<<p;
			if(travel->link==NULL)
				break;
				cout<<" OR ";
			p=p+1;
			travel=travel->link;
		}
		int n=p,i,R[n];
		node *t=Head;
		for(i=1;i<=n;i++)
		{
			R[i]=t->info;
			t=t->link;
		}
		cout<<"\n\t ENTER A POSITION : ";
		int p1;
		cin>>p1;
		cout<<"\n\n SEARCH VALIUE IS : "<<R[p1];
		
	}
}



void SORT()
{
    
    if(Head==NULL)
     	cout<<"\n\t LIST IS EMPTY...";
    else
    {
    	node *travel=Head;
    	int p=1;
    	while(1)
    	{
    		travel=travel->link;
    		if(travel==NULL)
    			break;
    		p=p+1;
		}
		int n=p;
		int i,j,Linked_list[n];
		node *t1=Head;
		for(i=0;i<n;i++)
		{
			Linked_list[i]=t1->info;
			t1=t1->link;
		}
		
		int tmp;
		for(i=1;i<n;i++)
		{
			tmp=Linked_list[i];
			for(j=i-1;j>=0&&tmp<Linked_list[j];j--)
			{
				Linked_list[j+1]=Linked_list[j];
			}
			Linked_list[j+1]=tmp;
		}
		
		node *t2=Head;
		cout<<"\n\n ASCENDING ORDER \n\n";
		for(i=0;i<n;i++)
		{
			cout<<Linked_list[i]<<"\t";
			t2->info=Linked_list[i];
			t2=t2->link;
		}
		cout<<"\n\n DESCENDING ORDER \n\n";
		for(i=n-1;i>=0;i--)
		{
			cout<<Linked_list[i]<<"\t";
		}
	}
	
	
}
int main()
{
   int choice;
       
   do
   {
   		
       cout<<"\n--------------------------MENU--------------------\n";
       cout<<"\n\t ENTER 1  : INSERT AT BEGINING ";
       cout<<"\n\t ENTER 2  : INSERT AT LAST ";
       cout<<"\n\t ENTER 3  : DISPLAY ";
       cout<<"\n\t ENTER 4  : INSERT ORDER ";
       cout<<"\n\t ENTER 5  : DELETE AT BEGINING ";
       cout<<"\n\t ENTER 6  : DELETE AT LAST ";
       cout<<"\n\t ENTER 7  : Reverse ";
       cout<<"\n\t ENTER 8  : COUNT ";
       cout<<"\n\t ENTER 9  : SEARCH ";
       cout<<"\n\t ENTER 10 : SORT ";
       cout<<"\n\t ENTER 11 : EXIT ";
       
       cout<<"\n\t ENTER YOUR CHOICE  : ";
       cin>>choice;

       switch(choice)
       {
       case 1 :
           cout<<"\n\t ENTER A NO : ";
           int x;
           cin>>x;
        insertAtBegining(x);
        break;
       case 2 :
        cout<<"\n\t ENTER A NO : ";
        int y;
        cin>>y;
        insertAtLast(y);
        break;
       case 3 :
        Display();
        break;
       case 4 :
        cout<<"\n\t ENTER A NO : ";
        int z;
        cin>>z;
        insertOrder(z);
        break;
       case 5 :
        deleteAtBegining();
        break;
       case 6 :
        deleteAtLast();
        break;
       case 7 : 
       Reverse ();
       	break;
       	case 8 :
       		COUNT();
       		break;
       	case 9 :
       		SEARCH();
       		break;
       	
       	case 10 :
       		SORT();
       		break;
       	case 11 :
       		break;
       default :
       	cout<<"\n\n\n IN_VALIED CHOICE ";
       	
       	

       }

   }while(choice!=11);
    getch();
    return 0;
}

