#include<iostream>
#include<string>
#define H 10 
#define W 16  

void patternprint(std::string num)
{
    int i, j, k;

    
    char zero[H][W] = { " ##### ",  
                     " #   # ",  
                     " #   # ", 
                     " #   # ",  
                     " #   # ", 
                     " #   # ", 
                     " ##### " },

        one[H][W] = { "   #   ",
                   "  ##   ",
                   "   #   ",
                   "   #   ",
                   "   #   ",
                   "   #   ",
                   " ##### " },

        two[H][W] = { " ##### ",
                   "     # ",
                   "     # ",
                   " ##### ",
                   " #     ",
                   " #     ",
                   " ##### " },

        three[H][W] = { " ##### ",
                     "     # ",
                     "     # ",
                     " ##### ",
                     "     # ",
                     "     # ",
                     " ##### " },

        four[H][W] = { " #     ",
                    " #   # ",
                    " #   # ",
                    " ##### ",
                    "     # ",
                    "     # ",
                    "     # " },

        five[H][W] = { " ##### ",
                    " #     ",
                    " #     ",
                    " ##### ",
                    "     # ",
                    "     # ",
                    " ##### " },

        six[H][W] = { " ##### ",
                   " #     ",
                   " #     ",
                   " ##### ",
                   " #   # ",
                   " #   # ",
                   " ##### " },

        seven[H][W] = { " ##### ",
                     "     # ",
                     "     # ",
                     "  #### ",
                     "     # ",
                     "     # ",
                     "     # " },

        eight[H][W] = { " ##### ",
                     " #   # ",
                     " #   # ",
                     " ##### ",
                     " #   # ",
                     " #   # ",
                     " ##### " },

        nine[H][W] = { " ##### ",
                    " #   # ",
                    " #   # ",
                    " ##### ",
                    "     # ",
                    "     # ",
                    "     # " };


    if (num.size() > 10)
        std::cout<<"\nYou must enter a number upto 10 digits.\nTry again!\n";

    else
    {
       std::cout<<"\n";
        k = 1;
        j = 0;  
        while (k <= 7)  
        {
            for (i = 0; i < num.size(); i++)  
            {
                if (num[i] == '0')
                    printf("%s", zero[j]);
                else if (num[i] == '1')
                    printf("%s", one[j]);
                else if (num[i] == '2')
                    printf("%s", two[j]);
                else if (num[i] == '3')
                    printf("%s", three[j]);
                else if (num[i] == '4')
                    printf("%s", four[j]);
                else if (num[i] == '5')
                    printf("%s", five[j]);
                else if (num[i] == '6')
                    printf("%s", six[j]);
                else if (num[i] == '7')
                    printf("%s", seven[j]);
                else if (num[i] == '8')
                    printf("%s", eight[j]);
                else if (num[i] == '9')
                    printf("%s", nine[j]);
            }
            printf("\n");
            k++;
            j++;
        }
    }
}

int main()
{
   
    std::string s;
    std::cin >> s;
    patternprint(s);
    system("PAUSE");
    return 0;
}