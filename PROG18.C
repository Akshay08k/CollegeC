#include <stdio.h>
#include <conio.h>
void convertAndPrint(float km);

void main()
{
    float distance_km;
    clrscr();
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &distance_km);
    // Call the function
    convertAndPrint(distance_km);

    getch();
}
// Function to convert and print distances
void convertAndPrint(float km)
{
    float meters = km * 1000;         // 1 km = 1000 meters
    float feet = meters * 3.28084;    // 1 meter = 3.28084 feet
    float inches = feet * 12;         // 1 foot = 12 inches
    float centimeters = meters * 100; // 1 meter = 100 centimeters
    printf("Distance in meters: %.2f m\n", meters);
    printf("Distance in feet: %.2f ft\n", feet);
    printf("Distance in inches: %.2f in\n", inches);
    printf("Distance in centimeters: %.2f cm\n", centimeters);
}
