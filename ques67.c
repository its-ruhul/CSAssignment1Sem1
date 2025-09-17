int main() {

    char check = 'a';

    switch(check){

        case 'a' || 1: printf("Gates");    
        case 'b' || 2: printf("Quiz");
        break;

        default: printf("GatesQuiz");
    }

    return 0;
}