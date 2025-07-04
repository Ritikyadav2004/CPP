// /*
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4|
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

// */
// #include<iostream>
// #include<unistd.h>
// #include<thread>
// #include<chrono>
// using namespace std;
// int main()
// {   
//     int no = 4;
//     int three = 1;
//     //int two = 1;
//     int k = (2*no-1)/2;
//     for(int i=0;i<(2*no-1);i++)
//     {
//         for(int j=0;j<(2*no-1);j++)
//         {
//             if(i==0 ||j==0 ||j==(2*no-2) || i==(2*no-2))
//             {
//                 cout<<no<<" ";
//                 sleep(0.5);
//                // sleep(1);
//                // cout<<" ";
//             }
//             else if (i>0   &&  i<(2*no-2))
//             {
//                 if(j>0 && j< (2*no-2) )
//                 {  
//                     if(i==k && j==k)  // centre cndition
//                     {
//                         cout<<"1 ";
//                         sleep(0.5);
//                     }
//                     else if(i>1 && i<(2*no-3) && j>1 && j<(2*no-3))
//                     {
//                         cout<<"2 ";
//                         sleep(0.5);
//                     }
                    
//                     else                    
//                    {
//                        cout<<no-three<<" ";
//                        sleep(0.5);

//                    }
//                 }
               

//             }
            
            
//             else
//             {
//             cout<<"  ";
//            // sleep(1);
//             }
//         }
//         cout<<endl;
//     }
    
// }

#include <iostream>
using namespace std;

int main()
{
    int no;
    cout << "Enter a number: ";
    cin >> no;

    int size = 2 * no - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int min = i < j ? i : j; // return minimum value 
            min = min < size - i ? min : size - i - 1;
            min = min < size - j - 1 ? min : size - j - 1;
            cout << (no - min) << " ";
        }
        cout << endl;
    }

    return 0;
}