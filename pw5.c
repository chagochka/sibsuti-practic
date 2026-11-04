#include <stdio.h>
void print_menu(void);

int main(void) {
    int choice, exit;
    double mass, volume, density;
    exit = 0;

    printf("\n--- Density Calculator ---\n");
    print_menu();
    while (!exit) {
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter mass: ");
                scanf("%lf", &mass);

                printf("Enter volume: ");
                scanf("%lf", &volume);

                if (volume == 0) {
                    printf("Volume cannot be zero.\n");
                    break;
                }

                density = mass / volume;
                printf("Density: %.2f\n", density);
                break;

            case 2:
                printf("Enter density: ");
                scanf("%lf", &density);

                printf("Enter volume: ");
                scanf("%lf", &volume);

                mass = density * volume;
                printf("Mass: %.2f\n", mass);
                break;

            case 3:
                printf("Enter mass: ");
                scanf("%lf", &mass);

                printf("Enter density: ");
                scanf("%lf", &density);

                if (density == 0) {
                    printf("Density cannot be zero.\n");
                    break;
                }

                volume = mass / density;
                printf("Volume: %.2f\n", volume);
                break;

            case 4:
                printf("Enter volume: ");
                scanf("%lf", &volume);

                printf("Enter mass: ");
                scanf("%lf", &mass);

                if (mass == 0) {
                    printf("Mass cannot be zero.\n");
                    break;
                }

                printf("Specific volume: %.2f\n", volume / mass);
                break;

            case 5:
                printf("Program finished.\n");
                exit = 1;
                break;

            default:
                printf("Invalid choice. Try again.\n");
                print_menu();
                continue;
        }
    }

    return 0;
}

void print_menu(void){
    printf("1. Calculate density\n");
    printf("2. Calculate mass\n");
    printf("3. Calculate volume\n");
    printf("4. Calculate specific volume\n");
    printf("5. Exit\n");
}