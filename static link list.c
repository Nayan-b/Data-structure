#include<stdio.h>


int main()
{
    int array[50], i, element, choose;
    printf("1 to insert \n 2 to delete \n 3 to display \n 4 to search");
    scanf("%d", &choose);
    switch(choose)
    {
        case 1: insert_();
        case 2: delete_();
        case 3: display_();
        case 4: search_();
        default: print("\nEnter valid number\n")
                break;
    }

}
void insert_()
{
    Int tem, item, position;
     If (n = = max) {
         Printf(“list overflow”);
          Return;
           }
      If (position >n+1) {
                Printf(“enter position less than or equal to %d”n+1);
                 Return;
                  }
        If(position = = n+1)  /*insertion at the end */
        {
            Arr [n]= item; N= n+1;
            Return;
        }
        Temp = n-1   //insertion in between
         While (temp>=positon-1)
          {
            Arr[temp+1] = arr [temp];
           Temp - - }

            Arr [positon -1] = item;
             n = n+1;
}
