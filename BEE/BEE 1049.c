

//                                                                   CONCLUTION : C HARD, C++ EZ


/*#include <stdio.h>
int main(){
    char name1[50], name2[50], name3[50];
    scanf("%s %s %s", name1, name2, name3);
    if (name1 == "vertebrado") {
        if (name2 == "ave"){
            if (name3 == "carnivoro"){
                printf("aguia\n");
            }
            else if (name3 == "onivoro"){
                printf("pomba\n");
            }
        }
        else if (name2 == "mamifero"){
            if (name3 == "onivoro"){
                printf("homem\n");
            }
            else if (name3 == "herbivoro"){
                printf("vaca\n");
            }
        }
    }
    else if (name1 == "invertebrado"){
        if (name2 == "inseto"){
            if (name3 == "hematofago"){
                printf("pulga\n");
            }
            else if (name3 == "herbivoro"){
                printf("lagarta\n");
            }
        }
        else if (name2 == "anelideo"){
            if (name3 == "hematofago"){
                printf("sanguessuga\n");
            }
            else if (name3 == "onivoro"){
                printf("minhoca\n");
            }
        }
    }

    return 0;
    
}/*
#include <stdio.h>
#include <string.h>

int main() {
    char name1[50], name2[50], name3[50];
    scanf("%s %s %s", name1, name2, name3);

    if (strcmp(name1, "vertebrado") == 0) {
        if (strcmp(name2, "ave") == 0) {
            if (strcmp(name3, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(name3, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(name2, "mamifero") == 0) {
            if (strcmp(name3, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(name3, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else if (strcmp(name1, "invertebrado") == 0) {
        if (strcmp(name2, "inseto") == 0) {
            if (strcmp(name3, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(name3, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(name2, "anelideo") == 0) {
            if (strcmp(name3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(name3, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
*/