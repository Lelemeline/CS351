# include <stdio.h>
# include <stdbool.h>
# include <ctype.h>
# include <stdlib.h>
# include <math.h>
# include<string.h>



int myStrlen(char *chaine ){
    int taille=0;
    char a =chaine[0] ;
    while (a!='\0'){
        a = chaine[taille];
        ++ taille ;
    }
    return taille-1;
}

// version 2
int myStrlen2(char *chaine ){
    int a = 0;
    while(chaine[++a]!='\0'){}
    return a;
}

char *myStrcpy(char *dest, const char *src) {
    char *original_dest = dest;
    while ((*dest++ = *src++) != '\0') { // copie src dans dest tant qu'on ne trouve pas le caractère sentinelle (fin de la chaîne)
    }
    return original_dest;
}

int afficherEnHexadecimal(char *mot){
    printf("%x\n",*mot); // affiche le premier caractère
    while((*mot++)!='\0'){ //pour afficher le reste. on demande aussi à ce que s'affiche '0' à l'écran ce qui ocrrespond au caractère sentinelle en hexa
        printf("%x\n",*mot);
    }
    return 0;
}

int affichageEnDecimal(char *mot){
    printf("%d\n",*mot); // affiche le premier caractère
    while((*mot++)!='\0'){ //pour afficher le reste. on demande aussi à ce que s'affiche '0' à l'écran ce qui ocrrespond au caractère sentinelle en hexa
        printf("%d\n",*mot);
    }
    return 0;
}
char *mettreEnMajuscule(char *source, char *dest){
    int i = 0;
    while(source[i]!='\0'){
        if (isalpha(source[i])){ // on passe tous les caractères type : lettre en majuscule
            dest[i]=toupper(source[i]);
        }
        else dest[i]=source[i]; // on ne s'embête pas avec les caractères commme la ponctuation.
        i++;

    }
    dest[i] = '\0'; // on signale la fin de la chaîne
    return dest;
}


// même fonctionnement que la fonction précédente
char *mettreEnMinuscule(char *source, char *dest){
    int i=0;
    while(source[i]!='\0'){
        if (isalpha(source[i])){
                dest[i]= tolower(source[i]);
        }
        else dest[i]=source[i];
        i++;
    }
    dest[i] ='\0';
    return dest;

}

// même fonctionnement hormis le fait que j'ai décidé d'utiliser de bouger dans la table ASCII, histoire de varier
char *transformerMinMaj(char *source, char *dest) {
    int taille = myStrlen(source);
    for (int i=0;i<taille;i++){
        if (isalpha(source[i])){
            if(islower(source[i])){
                dest[i]= source[i]- 32;
            }
            else if(isupper(source[i])) {
                dest[i] = source[i]+32;
            }
        }
        else dest[i]=source[i];

    }
    dest[taille] = '\0';
    return dest;
}

// cette fonction parcourt la source de taille-1 to 0, et la destination de 0 à taille. Ainsi, on ne prend pas le carcatère sentinelle:
// l'avant dernier caractère de la source devient le premier de la destination. Quand on atteint source[0], on rajoute le caractère sentinelle à la dest.
char *retournerMot(char *source, char *dest) {
    int taille = myStrlen(source);
    for (int i=taille-1;i>-1;i--){
            dest[(taille-1)-i] = source[i];
    }
    dest[taille] = '\0';
    return dest;

}

// équivalent à une recherche dans un tableau
int rechercherCaractereG(char *source,char cherche) {
    int taille = myStrlen(source);
    int position = -1;
    for(int i = 0; i<taille;i++){
        if(source[i]==cherche)
        position = i ;
    }
    return position;
}
// même fonction que la précédente, mais dans le sens inverse.
int rechercherCaractereD(char *source,char cherche) {
    int taille = myStrlen(source);
    int position = -1;
    for(int i = taille -1 ; i>-1;i--){
        if(source[i]==cherche)
        position = i ;
    }
    return position;
}

// compare les caractères à partir de 0 et taille-1 et avance en fonction.
int estPalindrome(char * mot, int d, int f) {
    int valeur = 1 ;
    if(f<d) exit(1);
    for (int i=0; i<d;i++){
        if (mot[i]!=mot[f-i]){
        valeur = 0;
        break;
        }
    }
    return valeur ;
}

int comparerChaine(char *chaine1, char *chaine2) {
    int retour ;
    int taille1 = myStrlen(chaine1);
    int taille2 = myStrlen(chaine2);
    int somme1 = 0;
    int somme2;
    for (int i = 0; i<(taille1 + taille2);i++){
        if (chaine1[i]==chaine2[i]) retour = 0;
        else {
            somme1+= chaine1[i];
            somme2+= chaine2[i];
            if(somme1>somme2) retour = 1 ;
            else retour = -1;
        }

    }
    return retour ;
}


int valeurDecimale(char *chaine) {
    //première version
    // int resultat =0;
    // char chaine2 [myStrlen2(chaine)*sizeof(int)];
    // retournerMot(chaine,chaine2);
    // int i =1;
    // int nombre = 1;
    // while(chaine[i]!='\0'){
    //     int j  = i-1;
    //     while((j+1)!=0){
    //         nombre *=10;
    //         j--;
    //     }
    //     resultat+= (chaine2[i]- 48)*nombre;
    //     i++;
    //     nombre = 1;
    // }
    // resultat += chaine2[0] -48;
    // return resultat;

    // Version 2

    // int j  = 0;
    // char chaine2[myStrlen2(chaine)] ;
    // retournerMot(chaine,chaine2);
    // int dix=1;
    // for(int i=0;i<myStrlen2(chaine);i++){
    //     j+=(chaine2[i]-48)*dix;
    //     dix*=10;
    // }
    // return j;

    // Version 3
    int i=0;
    int valeur = 0 ;
    if(chaine[i]=='\0') valeur = 0;
    else{
        while(chaine[i]!='\0'){
            valeur = valeur*10 + (chaine[i]-48);
            i++;
        }
    }
    return valeur;
}

char *intVersChaine(int entier, char *chaine){
    int chiffre;
    int i=0 ;
    char chaine2[myStrlen2(chaine)];
    while (entier > 0) {
        chiffre = (entier % 10)+48; //on parcourt de droite à gauche
        chaine2[i] = chiffre;
        entier = entier / 10;
        i++;
    };
    chaine2[i] = '\0';
    retournerMot(chaine2,chaine);
    return chaine;
}
// Pour les fonctions de retour  : 1 indique que le test a été réalisé avec succès, 0 (ou la valeur retournée par la fonction) indique qu'il y a eu un problème.
void fonctionvalide_int(int a, int b){
    int c = 0;
    if(a==b){
        c = 1;
    printf("%i\n",c);
    }
    else printf("%i\n",a);
}

void fonctionvalide_char(char *chaine1, char *chaine2){
    int c = 1;
    int i  = 0;
    while(chaine1[i]!='\0' || chaine2[i]!='\0' ){
        if(chaine1[i]!=chaine2[i]){
            c =0;
            break;
        }
        i++;
    }
    printf("%i\n",c);
}

int main(void){
    //myStrlen
    fonctionvalide_int(myStrlen2("bonjour"),7);
    fonctionvalide_int(myStrlen(""),-1);
    char chaine[0];
    fonctionvalide_int(myStrlen2(chaine),0);

    //myStrcpy
    char mot1[15];
    fonctionvalide_char(myStrcpy(mot1,"Hello"),"Hello");

    //fonction Majuscule
    char mot2[15];
    char mot3[20];
    fonctionvalide_char(mettreEnMajuscule("Hop !",mot2),"HOP !");
    fonctionvalide_char(mettreEnMajuscule("ceci est une chaine",mot3),"CECI EST UNE CHAINE");

    //fonction Minuscule
    char mot4[15];
    char mot5[20];
    fonctionvalide_char(mettreEnMinuscule("HOP !",mot4),"hop !");
    fonctionvalide_char(mettreEnMinuscule("CECI EST UNE CHAINE",mot5),"ceci est une chaine");

    // transformer MINMAJ
    char mot6[15];
    char mot7[20];
    fonctionvalide_char(transformerMinMaj("HoP !",mot6),"hOp !");
    fonctionvalide_char(transformerMinMaj("CeCI esT UNE ChainE",mot7),"cEci ESt une cHAINe");


    // retournerMot
    char mot8[15];
    char mot9[20];
    fonctionvalide_char(retournerMot("eibohphobie",mot8),"eibohphobie");
    fonctionvalide_char(retournerMot("palindrome",mot9),"emordnilap");
    //rechercher Caractère

    fonctionvalide_int(rechercherCaractereG("Hello World",'W'),6);
    fonctionvalide_int(rechercherCaractereG("Hello World",'z'),-1);
    fonctionvalide_int(rechercherCaractereD("Hello World",'o'),4);
    fonctionvalide_int(rechercherCaractereD("Hello World",'z'),-1) ;

    //palindrome
    fonctionvalide_int(estPalindrome("kayak",0,5),1);
    fonctionvalide_int(estPalindrome("kryak",0,5),0);
    // comparer Chaines
    fonctionvalide_int(comparerChaine("toto","toto"),0);
    fonctionvalide_int(comparerChaine("toto","titi"),-1);
    fonctionvalide_int(comparerChaine("titi","toto"),-1);
    //valeurDécimale
    fonctionvalide_int(valeurDecimale("2546"),2546);
    fonctionvalide_int(valeurDecimale("35"),35);
    //intversChaine
    char mot10[15];
    char mot11[15];
    fonctionvalide_char(intVersChaine(2546,mot10),"2546") ;
    fonctionvalide_char(intVersChaine(25,mot11),"25") ;

}
