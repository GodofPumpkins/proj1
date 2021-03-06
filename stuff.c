/*This function makes an array of 26 chars. It then goes through the caital text and 
    counts each letter assigning the totals to an element (0 is A total, 1 is 
    B total etc.) This array is then used to determine the 3 most common letters.*/

#include <stdio.h>

int main()  {
    char originalText[] = "abcdefghijklmnopqrstuvwxyz  aBcD gf\0hjh";
    char capitalText[strlen(originalText)];
    int i;
    
    
// Converts any lower case letters to capital
    for(i = 0; i < strlen(originalText); i++)  {
        if(originalText[i] >= 97 && originalText[i] <= 122) {
            capitalText[i] = originalText[i] - 32;
        }
        else  {
            capitalText[i] = originalText[i];
        } 
    }

    char letterCount[26];
    int firstCommon = 0;
    int secondCommon = 0;
    int thirdCommon = 0;
    
    for(i = 0; i < 26; i++)  {
        letterCount[i] = 0
    }

    for(i = 0; i < strlen(originalText); i++)  {
        switch(capitalText[i])  {
            case 65:    letterCount[0]++
            case 66:    letterCount[1]++
            case 67:    letterCount[2]++
            case 68:    letterCount[3]++
            case 69:    letterCount[4]++
            case 70:    letterCount[5]++
            case 71:    letterCount[6]++
            case 72:    letterCount[7]++
            case 73:    letterCount[8]++
            case 74:    letterCount[9]++
            case 75:    letterCount[10]++
            case 76:    letterCount[11]++
            case 77:    letterCount[12]++
            case 78:    letterCount[13]++
            case 79:    letterCount[14]++
            case 80:    letterCount[15]++
            case 81:    letterCount[16]++
            case 82:    letterCount[17]++
            case 83:    letterCount[18]++
            case 84:    letterCount[19]++
            case 85:    letterCount[20]++
            case 86:    letterCount[21]++
            case 87:    letterCount[22]++
            case 88:    letterCount[23]++
            case 89:    letterCount[24]++
            case 90:    letterCount[25]++
        }
    }

    for(i = 0; i < 26; i++)  {
        if(letterCount[i] >= firstCommon)  {
            thirdCommon = secondCommon;
            secondCommon = firstCommon;
            firstCommon = i;
        }
        else if (letterCount[i] < firstCommon && letterCount[i] >= secondCommon) {
            thirdCommon = secondCommon;
            secondCommon = i;
        }
        else if(letterCount[i] < secondCommon && letterCount[i] > thirdCommon) {
            thirdCommon = i;
        }             
    }
    
    printf("%d\n %d\n %d\n", firstCommon, secondCommon, thirdCommon);
    
    switch(originalText[i])  {
                case 'A': encryptedText[i] = key[0]
                    break;
                case 'B': encryptedText[i] = key[1];
                    break;
                case 'C': encryptedText[i] = key[3];
                    break;
                case 'D': encryptedText[i] = key[4];
                    break;
                case 'E': encryptedText[i] = key[5];
                    break;
                case 'F': encryptedText[i] = key[6];
                    break;
                case 'G': encryptedText[i] = key[7];
                    break;
                case 'H': encryptedText[i] = key[];
                    break;
                case 'I': encryptedText[i] = key[];
                    break;
                case 'J': encryptedText[i] = key[];
                    break;
                case 'K': encryptedText[i] = key[];
                    break;
                case 'L': encryptedText[i] = key[];
                    break;
                case 'M': encryptedText[i] = key[];
                    break;
                case 'N': encryptedText[i] = key[];
                    break;
                case 'O': encryptedText[i] = key[];
                    break;
                case 'P': encryptedText[i] = key[];
                    break;
                case 'Q': encryptedText[i] = key[];
                    break;
                case 'R': encryptedText[i] = key[];
                    break;
                case 'S': encryptedText[i] = key[];
                    break;
                case 'T': encryptedText[i] = key[];
                    break;
                case 'U': encryptedText[i] = key[];
                    break;
                case 'V': encryptedText[i] = key[];
                    break;
                case 'W': encryptedText[i] = key[];
                    break;
                case 'X': encryptedText[i] = key[];
                    break;
                case 'Y': encryptedText[i] = key[];
                    break;
                case 'Z': encryptedText[i] = key[];
                    break;
                
    
}