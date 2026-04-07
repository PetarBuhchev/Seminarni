//В училището на Ели има 1<=N<=100 000 човека. Някои от тях се познават с други,
//като Ели знае, че съществуват 1<=M<=1 000 000 такива приятелства. Тя иска да
//напише програма, която бързо отговаря кои са приятелите на даден човек. Ако
//хората се подават с номера като цяло число, както и приятелите им изведете при поискан човек
//колко приятели има. (ако 1 е приятел с 3, то и 3 е приятел с 1).
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Create an array of pointers to store friends for each person
    int** friends = (int**)malloc(n * sizeof(int*));
    int* friendCounts = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        friends[i] = NULL; // Initialize friend lists to NULL
        friendCounts[i] = 0; // Initialize friend counts to 0
    }
    
    // Read the friendships and populate the friend lists
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        // Add b to a's friend list
        friendCounts[a]++;
        friends[a] = (int*)realloc(friends[a], friendCounts[a] * sizeof(int));
        friends[a][friendCounts[a] - 1] = b;
        
        // Add a to b's friend list
        friendCounts[b]++;
        friends[b] = (int*)realloc(friends[b], friendCounts[b] * sizeof(int));
        friends[b][friendCounts[b] - 1] = a;
    }
    
    // Now we can answer queries about the number of friends for each person
    int q;
    scanf("%d", &q); // Number of queries
    for (int i = 0; i < q; i++) {
        int person;
        scanf("%d", &person);
        printf("Friends of person %d: %d\n", person, friendCounts[person]);
    }
    
    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(friends[i]);
    }
    free(friends);
    free(friendCounts);
    
    return 0;
}