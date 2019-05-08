#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#define BUFFER_SIZE 1024

int halp(char *self){
printf("Convert letters in a string to phonetics\n");
printf("Usage: %s [-bdhinsuwy] string\n", self);
printf("\t-b British RAF (1924-42) and Royal Navy (1917) phonetics\n");
printf("\t-d German phonetics\n");
printf("\t-h Hebrew phonetics\n");
printf("\t-i Italian phonetics\n");
printf("\t-n NATO phonetics (default)\n");
printf("\t-s Swahili phonetics\n");
printf("\t-u U.S. Army (1916) and U.S.Navy (1940) phonetics\n");
printf("\t-w Western Union phonetics\n");
printf("\t-y New York City Police phonetics\n");
return 0;
}

int british(char *string, int stringLen) {
    printf("Using British RAF (1924-42) and Royal Navy (1917) standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAc or Apples\n");break;
            case 'B': printf("\tBeer or Butter\n");break;
            case 'C': printf("\tCharlie\n");break;
            case 'D': printf("\tDon or Duff\n");break;
            case 'E': printf("\tEdward\n");break;
            case 'F': printf("\tFreddie\n");break;
            case 'G': printf("\tGeorge\n");break;
            case 'H': printf("\tHarry\n");break;
            case 'I': printf("\tInk\n");break;
            case 'J': printf("\tJohnnie\n");break;
            case 'K': printf("\tKing\n");break;
            case 'L': printf("\tLondon\n");break;
            case 'M': printf("\tMonkey\n");break;
            case 'N': printf("\tNuts\n");break;
            case 'O': printf("\tOrange\n");break;
            case 'P': printf("\tPip or Pudding\n");break;
            case 'Q': printf("\tQueen or Queenie\n");break;
            case 'R': printf("\tRobert\n");break;
            case 'S': printf("\tSugar\n");break;
            case 'T': printf("\tToc or Tommy\n");break;
            case 'U': printf("\tUncle\n");break;
            case 'V': printf("\tVic or Vinegar\n");break;
            case 'W': printf("\tWilliam or Willie\n");break;
            case 'X': printf("\tX-ray or Xerxes\n");break;
            case 'Y': printf("\tYorker or Yellow\n");break;
            case 'Z': printf("\tZebra\n");break;
        }
    }
    return 0;
}

int deutch(char *string, int stringLen) {
    printf("Using German standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAnton\n");break;
            case 'B': printf("\tBerta\n");break;
            case 'C': printf("\tCaesar\n");break;
            case 'D': printf("\tDora\n");break;
            case 'E': printf("\tEmil\n");break;
            case 'F': printf("\tFriedrich\n");break;
            case 'G': printf("\tGustav\n");break;
            case 'H': printf("\tHeinrich\n");break;
            case 'I': printf("\tIda\n");break;
            case 'J': printf("\tJulius\n");break;
            case 'K': printf("\tKaufmann\n");break;
            case 'L': printf("\tLudwig\n");break;
            case 'M': printf("\tMartha\n");break;
            case 'N': printf("\tNordpol\n");break;
            case 'O': printf("\tOtto\n");break;
            case 'P': printf("\tPaula\n");break;
            case 'Q': printf("\tQuelle\n");break;
            case 'R': printf("\tRichard\n");break;
            case 'S': printf("\tSamuel\n");break;
            case 'T': printf("\tTheodor\n");break;
            case 'U': printf("\tUlrich\n");break;
            case 'V': printf("\tViktor\n");break;
            case 'W': printf("\tWilhelm\n");break;
            case 'X': printf("\tXanthippe\n");break;
            case 'Y': printf("\tYpsilon\n");break;
            case 'Z': printf("\tZacharias\n");break;
        }
    }
    return 0;
}
int hebrew(char *string, int stringLen) {
    printf("Using Hebrew standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAffula\n");break;
            case 'B': printf("\tBinyamina\n");break;
            case 'C': printf("\tCarmel\n");break;
            case 'D': printf("\tDalia\n");break;
            case 'E': printf("\tEretz\n");break;
            case 'F': printf("\tFrance\n");break;
            case 'G': printf("\tGedera\n");break;
            case 'H': printf("\tHaifa\n");break;
            case 'I': printf("\tIsrael\n");break;
            case 'J': printf("\tJaffa\n");break;
            case 'K': printf("\tKarkur\n");break;
            case 'L': printf("\tLod\n");break;
            case 'M': printf("\tMoledet\n");break;
            case 'N': printf("\tNaan\n");break;
            case 'O': printf("\tOgen\n");break;
            case 'P': printf("\tPardes\n");break;
            case 'Q': printf("\tQueen\n");break;
            case 'R': printf("\tRishon\n");break;
            case 'S': printf("\tSefer\n");break;
            case 'T': printf("\tTveria\n");break;
            case 'U': printf("\tUrim\n");break;
            case 'V': printf("\tVered\n");break;
            case 'W': printf("\tWingate\n");break;
            case 'X': printf("\tExpress\n");break;
            case 'Y': printf("\tYavniel\n");break;
            case 'Z': printf("\tZikhron\n");break;
        }
    }
    return 0;
}

int italiano(char *string, int stringLen) {
    printf("Using Italian standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAncona\n");break;
            case 'B': printf("\tBologna\n");break;
            case 'C': printf("\tComo\n");break;
            case 'D': printf("\tDomodossola\n");break;
            case 'E': printf("\tEmpoli\n");break;
            case 'F': printf("\tFirenze\n");break;
            case 'G': printf("\tGenova\n");break;
            case 'H': printf("\tHacca\n");break;
            case 'I': printf("\tImola\n");break;
            case 'J': printf("\tJolly\n");break;
            case 'K': printf("\tKappa\n");break;
            case 'L': printf("\tLivorno\n");break;
            case 'M': printf("\tMilano\n");break;
            case 'N': printf("\tNapoli\n");break;
            case 'O': printf("\tOtranto\n");break;
            case 'P': printf("\tPisa/Palermo\n");break;
            case 'Q': printf("\tQuartomiglio\n");break;
            case 'R': printf("\tRoma\n");break;
            case 'S': printf("\tSavona/Siena\n");break;
            case 'T': printf("\tTorino\n");break;
            case 'U': printf("\tUdine\n");break;
            case 'V': printf("\tVenezia\n");break;
            case 'W': printf("\tWagner\n");break;
            case 'X': printf("\tXilofono\n");break;
            case 'Y': printf("\tYork\n");break;
            case 'Z': printf("\tZara\n");break;
        }
    }
    return 0;
}

int swahili(char *string, int stringLen) {
    printf("Using Swahili standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAali\n");break;
            case 'B': printf("\tBibi\n");break;
            case 'C': printf("\tCyprus\n");break;
            case 'D': printf("\tDaniel\n");break;
            case 'E': printf("\tElfu\n");break;
            case 'F': printf("\tFiwi\n");break;
            case 'G': printf("\tGombe\n");break;
            case 'H': printf("\tHenry\n");break;
            case 'I': printf("\tIda\n");break;
            case 'J': printf("\tJinja\n");break;
            case 'K': printf("\tKenya\n");break;
            case 'L': printf("\tLeso\n");break;
            case 'M': printf("\tMtu\n");break;
            case 'N': printf("\tNairobi\n");break;
            case 'O': printf("\tOlga\n");break;
            case 'P': printf("\tPaul\n");break;
            case 'Q': printf("\tQuebec\n");break;
            case 'R': printf("\tRobert\n");break;
            case 'S': printf("\tSana\n");break;
            case 'T': printf("\tTanga\n");break;
            case 'U': printf("\tUnga\n");break;
            case 'V': printf("\tVictor\n");break;
            case 'W': printf("\tWilliam\n");break;
            case 'X': printf("\tXavier\n");break;
            case 'Y': printf("\tYatima\n");break;
            case 'Z': printf("\tZanzibar\n");break;
        }
    }
    return 0;
}

int usmil(char *string, int stringLen) {
    printf("Using U.S. Army (1916) and U.S.N. (1940) standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAffirmative or Able\n");break;
            case 'B': printf("\tBaker or Buy\n");break;
            case 'C': printf("\tCast\n");break;
            case 'D': printf("\tDog or Dock\n");break;
            case 'E': printf("\tEasy\n");break;
            case 'F': printf("\tFox\n");break;
            case 'G': printf("\tGeorge\n");break;
            case 'H': printf("\tHypo or Have\n");break;
            case 'I': printf("\tInterrogatory or Item\n");break;
            case 'J': printf("\tJig\n");break;
            case 'K': printf("\tKing\n");break;
            case 'L': printf("\tLove\n");break;
            case 'M': printf("\tMike\n");break;
            case 'N': printf("\tNegative or Nap\n");break;
            case 'O': printf("\tOption or Opal\n");break;
            case 'P': printf("\tPreparatory or Pup\n");break;
            case 'Q': printf("\tQueen or Quack\n");break;
            case 'R': printf("\tRoger or Rush\n");break;
            case 'S': printf("\tSail\n");break;
            case 'T': printf("\tTare or Tape\n");break;
            case 'U': printf("\tUnit\n");break;
            case 'V': printf("\tVictor or Vice\n");break;
            case 'W': printf("\tWilliam or Watch\n");break;
            case 'X': printf("\tXray\n");break;
            case 'Y': printf("\tYoke\n");break;
            case 'Z': printf("\tZed\n");break;
        }
    }
    return 0;
}

int wu(char *string, int stringLen) {
    printf("Using Western Union standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAdams\n");break;
            case 'B': printf("\tBoston\n");break;
            case 'C': printf("\tChicago\n");break;
            case 'D': printf("\tDenver\n");break;
            case 'E': printf("\tEasy\n");break;
            case 'F': printf("\tFrank\n");break;
            case 'G': printf("\tGeorge\n");break;
            case 'H': printf("\tHenry\n");break;
            case 'I': printf("\tIda\n");break;
            case 'J': printf("\tJohn\n");break;
            case 'K': printf("\tKing\n");break;
            case 'L': printf("\tLincoln\n");break;
            case 'M': printf("\tMary\n");break;
            case 'N': printf("\tNew York\n");break;
            case 'O': printf("\tOcean\n");break;
            case 'P': printf("\tPeter\n");break;
            case 'Q': printf("\tQueen\n");break;
            case 'R': printf("\tRoger\n");break;
            case 'S': printf("\tSugar\n");break;
            case 'T': printf("\tThomas\n");break;
            case 'U': printf("\tUnion\n");break;
            case 'V': printf("\tVictor\n");break;
            case 'W': printf("\tWilliam\n");break;
            case 'X': printf("\tX-Ray\n");break;
            case 'Y': printf("\tYoung\n");break;
            case 'Z': printf("\tZero\n");break;
        }
    }
    return 0;
}

int nyc(char *string, int stringLen) {
    printf("Using New York City Police standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAdam\n");break;
            case 'B': printf("\tBoy\n");break;
            case 'C': printf("\tCharlie\n");break;
            case 'D': printf("\tDavid\n");break;
            case 'E': printf("\tEdward\n");break;
            case 'F': printf("\tFrank\n");break;
            case 'G': printf("\tGeorge\n");break;
            case 'H': printf("\tHenry\n");break;
            case 'I': printf("\tIda\n");break;
            case 'J': printf("\tJohn\n");break;
            case 'K': printf("\tKing\n");break;
            case 'L': printf("\tLincoln\n");break;
            case 'M': printf("\tMary\n");break;
            case 'N': printf("\tNora\n");break;
            case 'O': printf("\tOcean\n");break;
            case 'P': printf("\tPeter\n");break;
            case 'Q': printf("\tQueen\n");break;
            case 'R': printf("\tRobert\n");break;
            case 'S': printf("\tSam\n");break;
            case 'T': printf("\tTom\n");break;
            case 'U': printf("\tUnion\n");break;
            case 'V': printf("\tVictor\n");break;
            case 'W': printf("\tWilliam\n");break;
            case 'X': printf("\tX-Ray\n");break;
            case 'Y': printf("\tYoung\n");break;
            case 'Z': printf("\tZebra\n");break;
        }
    }
    return 0;
}

int nato(char *string, int stringLen) {
    printf("Using NATO standard phonetics\n");
    for (int i = 0; i < stringLen; ++i) {
        char single_char = toupper(string[i]);
        switch(single_char) {
            case 'A': printf("\tAlpha\n");break;
            case 'B': printf("\tBravo\n");break;
            case 'C': printf("\tCharlie\n");break;
            case 'D': printf("\tDelta\n");break;
            case 'E': printf("\tEcho\n");break;
            case 'F': printf("\tFoxtrot\n");break;
            case 'G': printf("\tGolf\n");break;
            case 'H': printf("\tHotel\n");break;
            case 'I': printf("\tIndia\n");break;
            case 'J': printf("\tJuliet\n");break;
            case 'K': printf("\tKilo\n");break;
            case 'L': printf("\tLima\n");break;
            case 'M': printf("\tMike\n");break;
            case 'N': printf("\tNovember\n");break;
            case 'O': printf("\tOscar\n");break;
            case 'P': printf("\tPapa\n");break;
            case 'Q': printf("\tQuebec\n");break;
            case 'R': printf("\tRomeo\n");break;
            case 'S': printf("\tSierra\n");break;
            case 'T': printf("\tTango\n");break;
            case 'U': printf("\tUniform\n");break;
            case 'V': printf("\tVictor\n");break;
            case 'W': printf("\tWhiskey\n");break;
            case 'X': printf("\tXray\n");break;
            case 'Y': printf("\tYankee\n");break;
            case 'Z': printf("\tZulu\n");break;
        }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int arr[1048576] = {0};
    int i=0 ,n=0;
    int c, err=0, count = 0;
    bool optB = false, optD = false, optH = false, optI = false, optS = false, optU = false, optW = false, optY = false, optN = false, noOpt = true;
    char *string;
    int stringLen;
    char *self = argv[0];
    if ((argc > 3) || (argc == 1)){
        halp(self);
        return 1;
    }
    if (argv[2]) {
        string = argv[2];
        stringLen = strlen(string);
        while ((c = getopt(argc, argv, "bdhisuwyn:")) != -1)
            switch (c) {
            case 'b': optB = true; noOpt = false;british(string, stringLen);break;
            case 'd': optD = true; noOpt = false;deutch(string, stringLen);break;
            case 'h': optH = true; noOpt = false;hebrew(string, stringLen);break;
            case 'i': optI = true; noOpt = false;italiano(string, stringLen);break;
            case 's': optS = true; noOpt = false;swahili(string, stringLen);break;
            case 'u': optU = true; noOpt = false;usmil(string, stringLen);break;
            case 'w': optW = true; noOpt = false;wu(string, stringLen);break;
            case 'y': optY = true; noOpt = false;nyc(string, stringLen);break;
            case 'n': optN = true; noOpt = false;nato(string, stringLen);break;
        }
    }
    if ((noOpt == true) && (argv[2])) {
        halp(self);
        return 1;
    }
    if ((noOpt == true) && (argv[1])) {
        char *leadingDash = "-";
        char *invalid = strstr(argv[1], leadingDash);
        if (invalid) {
            halp(self);
            return 0;
        }
        string = argv[1];
        stringLen = strlen(string);
        nato(string, stringLen);
    }
}
