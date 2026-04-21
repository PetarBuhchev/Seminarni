//Харалампий иска да организира рождения си ден, но за целта трябва да закупи инвентар за провеждането, който е следният:
//Стол - 13.99
//Маса за 8 човека - 42.00
//Комплект от 6 чаши - 5.98
//Комплект от 6 чинии с прибори - 21.02
//От клавиатура се въвежда броя на гостите. Следват неща, които са закупени до момента, до въвеждане на PARTY!. Да се пресметне колко пари е похарчил и колко още неща трябва да купи за да може да реализира партито си.
//Всички гости трябва да са на маса, да седят на стол и да разполагат с чиния, прибори и чаша. 
#include <stdio.h>
#include <string.h>

int main() {
    int guests;
    printf("Enter the number of guests: ");
    scanf("%d", &guests);

    float total_spent = 0.0;
    int chair_count = 0, table_count = 0, cup_count = 0, dish_count = 0;
    char item[20];

    while (1) {
        printf("Enter the item purchased (or 'PARTY!' to finish): ");
        scanf("%s", item);
        if (strcmp(item, "PARTY!") == 0) {
            break;
        }
        else if (strcmp(item, "chair") == 0) {
            total_spent += 13.99;
            chair_count++;
        } 
        else if (strcmp(item, "table") == 0) {
            total_spent += 42.00;
            table_count++;
        }
        else if (strcmp(item, "cups") == 0) {
            total_spent += 5.98;
            cup_count += 1;
        }
        else if (strcmp(item, "dishes") == 0) {
            total_spent += 21.02;
            dish_count += 1;
        }
    }
    int chairs_needed = guests - chair_count;
    int tables_needed = (guests + 7) / 8 - table_count;
    int cup_sets_needed = (guests + 5) / 6 - cup_count;
    int plate_sets_needed = (guests + 5) / 6 - dish_count;

    printf("Total spent: %.2f\n", total_spent);
    printf("Chairs needed: %d\n", chairs_needed > 0 ? chairs_needed : 0);
    printf("Tables needed: %d\n", tables_needed > 0 ? tables_needed : 0);
    printf("Cups needed: %d\n", cup_sets_needed > 0 ? cup_sets_needed : 0);
    printf("Dishes needed: %d\n", plate_sets_needed > 0 ? plate_sets_needed : 0);

}