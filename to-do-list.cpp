#include<iostream>
#include<string>
using namespace std; 
const int MAX_TASKS = 100;
struct task
{
    string description;
    bool isDone;
} ;
int main()
{
    task tasks[MAX_TASKS];
    int numTasks = 0;
      while(true)
    {
        cout<<"to-do list application"<<endl;
        cout<<"1.add task "<<endl;
        cout<<"2.view task "<<endl;
        cout<<"3.mark task as completed "<<endl;
        cout<<"4.remove task"<<endl;
        int choice;
        cout<<"enter your choice: ";
        cin>>choice;

        if(choice == 1)
        {
            //add task
            if(numTasks < MAX_TASKS)
            {
                cout<<("enter task description: ");
                cin.ignore();
                getline(cin,tasks[numTasks].description);
                numTasks++;
                cout<<"task add."<<endl;
            }
            else
            {
                cout<<"task list is full.cannot add more tasks."<<endl;
            }
            cout<<endl;
        }
        else if (choice == 2)
        {
            //view tasks
            cout<<"tasks: "<<endl;
            for(int i=0;i<numTasks;i++)
            {
                cout<<(i + 1)<<".";
                if(tasks[i].isDone)
                {
                    cout<<"[X]";
                }
                else
                {
                    cout<<"[]";
                }
                cout<<tasks[i].description<<endl;
            }
            cout<<endl;
        }
        else if(choice == 3)
        {
            //mark task as completed
            cout<<"enter the task number tp mark as done:";
            int taskNumber;
            cin>>taskNumber;
            if(taskNumber > 0 && taskNumber <= numTasks)
            {
                tasks[taskNumber-1].isDone = true;
                cout<<"task marked as done."<<endl;
            }
            else
            {
                cout<<"invalid task number"<<endl;
            }
            cout<<endl;
        }
        else if (choice == 4)
        {
            //remove task
            cout<<"goodbye!"<<endl;
            break;
        }
        else
        {
            cout<<"invalid choice.please try again."<<endl;
            break;
        }
    } 
    return 0;
}
