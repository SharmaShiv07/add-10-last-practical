#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Type tags for different data types
enum DataType {
    INT,
    FLOAT,
    CHAR,
    STRING
};

// Union representing the generic data container
typedef union {
    int intValue;
    float floatValue;
    char charValue;
    char* stringValue;
} Data;

// Structure representing the generic container
typedef struct {
    enum DataType type;
    Data data;
} GenericContainer;

// Function to set data in the container
void setData(GenericContainer *container, enum DataType type, void *value) {
    container->type = type;

    switch (type) {
        case INT:
            container->data.intValue = *((int*)value);
            break;
        case FLOAT:
            container->data.floatValue = *((float*)value);
            break;
        case CHAR:
            container->data.charValue = *((char*)value);
            break;
        case STRING:
            container->data.stringValue = strdup((char*)value);
            break;
    }
}

// Function to get data from the container
void getData(GenericContainer *container) {
    switch (container->type) {
        case INT:
            printf("Value: %d\n", container->data.intValue);
            break;
        case FLOAT:
            printf("Value: %f\n", container->data.floatValue);
            break;
        case CHAR:
            printf("Value: %c\n", container->data.charValue);
            break;
        case STRING:
            printf("Value: %s\n", container->data.stringValue);
            break;
    }
}

// Function to free memory for string data in the container
void freeContainer(GenericContainer *container) {
    if (container->type == STRING) {
        free(container->data.stringValue);
    }
}

int main() {
    // Example usage

    GenericContainer container;

    // Set integer value
    int intValue = 42;
    setData(&container, INT, &intValue);
    getData(&container);
    freeContainer(&container);

    // Set float value
    float floatValue = 3.14;
    setData(&container, FLOAT, &floatValue);
    getData(&container);

    // Set character value
    char charValue = 'A';
    setData(&container, CHAR, &charValue);
    getData(&container);

    // Set string value
    char stringValue[] = "Hello, Generic Container!";
    setData(&container, STRING, stringValue);
    getData(&container);
    freeContainer(&container);

    return 0;
}
