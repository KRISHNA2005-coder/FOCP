#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct word{
    char word[20];
    char omittedword[30];
};

int main() {
    srand(time(NULL));
    char guess;
    int attempts=3; 
    int correct=0;  

   
    struct word wordlist[]={
        {"accord", "a _ _o r d"},
        {"evident", "e _ i _ _ _ t"},
        {"commit", "c _ _ _ i t"},
        {"approach", "a _ _ r _ a _ _"},
        {"conduct", "c _ _ d _ c t"},
        {"obtain", "_ _ t a i _"},
        {"scarce", "s _ a r _ _"},
        {"policy", "p _ _ i c y"},
        {"stock", "s _ o _ _"},
        {"apparent", "a p _ a _ e _ t"},
        {"property", "p _ o p _ r _ y"},
        {"instance", "i n _ t a _ _ e"},
        {"commission", "c _ _ _ i s _ i o _"},
        {"circumstances", "c i _ _ u m s _ a _ _ e s"},
        {"convince", "c _ n _ i _ c _"},
        {"territory", "t e _ r _ t _ r _"},
        {"undertake", "u _ d e _ t _ _ e"},
        {"humble", "h u _ _ l _"},
        {"despair", "d _ s _ a _ r"},
        {"manifest", "m _ n i _ e _ t"}
    };
    int word_count=sizeof(wordlist)/sizeof(wordlist[0]);
    int random_index=rand()%word_count;
    struct word select=wordlist[random_index];
    printf("you have 3 tries to guess the correct word\n");
    printf("guess the word: %s\n", select.omittedword);
    while(attempts>0 && !correct){
        printf("enter a letter: ");
        scanf(" %c",&guess);
        if(strchr(select.word, guess)){
            printf("'%c' is in the word.\n", guess);
            int g=strlen(select.word);
            for(int i=0;i<g;i++){
                if(select.word[i]==guess){
                    select.omittedword[i*2]=guess; 
                }
            }
            printf("updated word: %s\n",select.omittedword);
            if(strchr(select.omittedword,'_')==NULL){
                printf("you guessed the word, it is '%s'\n", select.word);
                correct=1;
            }
        } 
            else{
            attempts--;
            printf("oops.wrong guess, you have %d attempts left.\n", attempts);
            if(attempts==0){
                printf("    _________ \n");
                printf("   |         | \n");
                printf("   |         O \n");
                printf("   |        /|\\ \n");
                printf("   |        / \\ \n");
                printf("you lost, The correct word was '%s'.The man got hanged, do you feel guilty now?", select.word);
                   
            }
        }
    }
}