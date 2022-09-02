bool canConstruct(char *ransomNote, char *magazine) {
    int table[26] = {0};
    while (*magazine) {
        table[*magazine-'a']++;
        magazine++;
    }
    while (*ransomNote) {
        table[*ransomNote-'a']--;
        ransomNote++;
    }
    for (int i = 0; i < 26; i++) {
        if (table[i] < 0) return false;
    } return true;
}