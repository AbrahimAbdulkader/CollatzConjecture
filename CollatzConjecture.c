/* Test Cases:
1. If our first input is 1 or the program reaches 1, we exit
2. If 'num' is an even number, we half it and if its an odd number, we multiply that number by 3 and add 1 to it(3(num) + 1
*/


    int main(int args, char **argv){ //A method accepting arguments
       
        int num;
        num = atoi(argv[1]); //atoi is a converter from a char to an int

 //Note: Could have used a scanner but decided to use arg parameters instead in my main

    if(num <= 0){
        printf("\nThe number should be a positive interger.\n\n");
        exit(0);
        }

        if(fork() == 0) { //If the fork system call for child is successful, the child process will execute
            while(num > 1 && num < pow(num, 68)){
                printf("%d ", num);
                  if(num % 2 == 0) {
                    num = num / 2;
                    }
                    
        else if(num % 2 != 0) {
            num = 3 * num + 1;
 }

        else if(args == 1) {
            printf("We reached the last integer needed!\n");
                exit(0);
 //For Collatz Conjecture, the execution stops when we reach 1 hence the exit(0) function
    }
 }

        printf("1\n\n");
            }
            
            else { //wait(null) to allow child process to execute first to prevent 'Zombie proess'
                wait(NULL);
            }

                return 0;
                }
