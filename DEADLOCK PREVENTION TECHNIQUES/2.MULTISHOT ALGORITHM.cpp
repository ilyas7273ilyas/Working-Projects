#include<iostream>
using namespace std;
int main()
{
	int n,m,att=0;
	cout<<"Enter the number of resources:\n";
	cin>>n;
	int res[n];

	cout<<"\nEnter the \n1 for resource NOT FREE \n0 for resource FREE:\n";
	for(int i=0;i<n;i++){
		cin>>res[i];
	}

	int choice=0;

	while(choice==0){
	cout<<"\n*******************************************************************\n";
	int count=0,q=0,l=0;
	cout<<"\nEnter the resource no. process want to access:\n";
	cin>>m;
	if(att!=0 ){
	cout<<"\nrefuse the request\n";
	cout<<"\nWait till the release of all items held by process\n0 for no \n1 for yes\n";
	cin>>l;
	if( l== 1)
    {
        att=0;
        for(int p=0;p<n;p++)
        {
            res[p]=0;
        }
    }
	}
	else if(m>n || m<1)
	cout<<"\nResource does not exists\n";
	else{
		if(res[m-1]!=0){
			cout<<"\nwait until resource  free \n";

				res[m-1]=0;


		}
		else if(res[m-1]==0){
			cout<<"\ngrant process P exclusive access to resources\n";
			att=1;
			res[m-1]=1;


			cout<<"Process want to leave the resource \n0 for no\n1 for yes ";
            cin>>q;

            if(q==1)
            {
                att=0;

                res[m-1]=0;
            }
		}
	}

	cout<<"\nProcess want to end \n";
	cin>>choice;
}
return 0;
}
