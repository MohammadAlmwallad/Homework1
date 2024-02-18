#include <stdio.h>

int main() {
    const char *months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December","Muharram", "Safar", "Rabi' al-awwal",
        "Rabi' al-thani", "Jumada al-awwal", "Jumada al-thani",
        "Rajab", "Sha'ban", "Ramadan",
        "Shawwal", "Dhu al-Qi'dah", "Dhu al-Hijjah"
        

    };
    int num_months = sizeof(months) / sizeof(months[0]);
    for(int i = 0; i < num_months; ++i) {
        printf("%s\n", months[i]);
    }
    return 0;
}
