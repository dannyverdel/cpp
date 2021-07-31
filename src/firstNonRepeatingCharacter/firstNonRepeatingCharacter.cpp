//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>
#include <map>

char firstNonRepeatingCharacter(const char *string)
{
    std::map<char, int> map;
    
    for (int i = 0; i < strlen(string); i++)
    {
        map[*(string + i)] += 1;
    }

    for (int i = 0; i < strlen(string); i++)
    {
        std::map<char, int>::iterator count = map.find(*(string + i));
        if (count->second == 1)
            return *(string + i);
    }

    return '_';
}

void LogOutcome(const char *string, char outcome)
{
    std::cout << string << ": " << outcome << std::endl;
}

int main()
{
    LogOutcome("aabccd", firstNonRepeatingCharacter("aabccd"));                                                                               // Should return b
    LogOutcome("aaabbbcddeee", firstNonRepeatingCharacter("aaabbbcddeee"));                                                                   // Should return c
    LogOutcome("akldjfakldfjaldkfjalkdfjlafdjyaldjfakljfalkfj", firstNonRepeatingCharacter("akldjfakldfjaldkfjalkdfjlafdjyaldjfakljfalkfj")); // Should return y
    LogOutcome("abcabcabc", firstNonRepeatingCharacter("abcabcabc"));                                                                         // Should return _
}