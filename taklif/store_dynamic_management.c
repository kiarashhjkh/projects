#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int price;
    int quantity;
    char name[50];
} product;

typedef struct {
    char name[50];
    product *products;
    int productCount;
    int totalValue;
} store;


int main() {
    int storeCount;
    printf("how many stores :\n");
    scanf(" %d", &storeCount);
    store *stores = malloc(storeCount * sizeof(store));
    for (int i = 0; i < storeCount; i++) {
        store *current_store = &stores[i];
        printf("store %d name:\n", i + 1);
        scanf("%s", current_store->name);
        printf("store %s product count:\n", current_store->name);
        scanf("%d", &current_store->productCount);
        current_store->products = malloc(current_store->productCount * sizeof(product));
        current_store->totalValue = 0;
        for (int j = 0; j < current_store->productCount; j++) {
            product *current_product = &current_store->products[j];
            printf("[store %s] product %d name:\n", current_store->name, j + 1);
            scanf("%s", current_product->name);
            printf("[store %s] product %d price:\n", current_store->name, j + 1);
            scanf("%d", &current_product->price);
            printf("[store %s] how many product %d:\n", current_store->name, j + 1);
            scanf("%d", &current_product->quantity);
            current_store->totalValue += current_product->quantity * current_product->price;
        }
    }
    int limit;
    int max = 0;
    printf("enter your limit :");
    scanf("%d", &limit);
    printf("products under the limit :\n");
    for (int i = 0; i < storeCount; i++) {
        for (int j = 0; j < stores[i].productCount; j++) {
            product current = stores[i].products[j];
            if (current.price > max) {
                max = current.price;
            }
            if (current.quantity < limit) {
                printf("%s\n", current.name);
            }
        }
    }
    printf("the most expensive product in all the stores is : %d\n", max);
    for (int i = 0; i < storeCount; i++) {
        store current = stores[i];
        printf("%s store has total value of : %d\n", current.name, current.totalValue);
        free(current.products);
    }
    free(stores);
    return 0;
}
