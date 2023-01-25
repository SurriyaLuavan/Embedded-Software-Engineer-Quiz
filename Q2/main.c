#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Change this value based on the size of expected key: value pairs
#define HASH_TABLE_SIZE 256

void insert_entry(int, char*);
char* mapping_function(int);

struct entry {
    int key;
    char* value;
};

struct entry *hash_table;

int main() {
	// Allocate memory for the hash table
	hash_table = (struct entry *) malloc(HASH_TABLE_SIZE * sizeof(struct entry));
    if (hash_table == NULL) {
        printf("Error allocating memory for hash table.\n");
        return 1;
    }

    // Insert the key-value pairs into the hash table
    int keys[] = {15840, 16465, 17941, 17942, 18898, 19172, 20512, 20626, 20758, 25736, 25893, 26039, 26134, 26345, 26346, 26676, 28161,
                  31622, 31873, 32028, 35260, 36368, 36428, 38716, 38805, 40111, 40893, 40956, 40957, 40958, 40959, 40960, 42541, 47987,
                  49137, 49169, 49443, 49444, 49639, 50047, 50048, 50127, 50128, 50129, 51183, 51184, 51204, 52071, 52977, 54650, 55908,
                  56100, 57924, 60538, 60539, 60540, 61474, 63141, 64436, 64437, 67416, 72677, 73039, 73040, 73211, 73654, 73756, 74037,
                  74038, 76081, 76082, 79467, 79564, 79790, 79791};

    char* values[] = {"cGp", "cmW", "cX3", "cXB", "ctR", "ckN", "PVg", "PD4", "PBR", "MYM", "MSL", "MUk", "MIE", "Mgr", "MgK", "MKd", "GVT",
                      "vNx", "vwP", "vV9", "zAj", "zO9", "zu1", "AcO", "APF", "AHl", "ALW", "AQ9", "AQs", "AQq", "AQL", "AQQ", "Zcz", "yuk",
                      "yh2", "yli", "yau", "yap", "ytL", "T7T", "T7N", "Tx8", "TxE", "Tx2", "Tn2", "Tn1", "Tnf", "T2a", "Thu", "NTO", "N2e",
                      "N9g", "ocd", "oeH", "oe0", "oeO", "okE", "dH6", "dUw", "dUn", "m2D", "wtT", "nCi", "nCc", "nxJ", "nzb", "nZq", "ndz",
                      "ndA", "nIG", "nIv", "VXS", "VYw", "VeK", "Vel" };

    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++) {
        	insert_entry(keys[i], values[i]);
    }

    // Display the results of the mapping function
    printf("%s\n", mapping_function(15840));
    printf("%s\n", mapping_function(16465));
    printf("%s\n", mapping_function(17941));
    printf("%s\n", mapping_function(30001));
    printf("%s\n", mapping_function(55555));
    printf("%s\n", mapping_function(77788));
    printf("%s\n", mapping_function(51183));

    // Freeing the allocated memeory for the table
    free(hash_table);

    return 0;
}

// Function to insert a key-value pair into the hash table
void insert_entry(int key, char* value) {
    int index = key % HASH_TABLE_SIZE;
    hash_table[index].key = key;
    hash_table[index].value = value;
}

// Function to lookup a key in the hash table
char* mapping_function(int key) {
    int index = key % HASH_TABLE_SIZE;
    if(hash_table[index].key == key)
        return hash_table[index].value;
    else
        return "No match found";
}