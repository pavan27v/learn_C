#include<stdio.h>
/* struct tocreat car details 
  1) Car max speed (400 km/hr )
  2) car weight in kg (max 500kg)
  3) car color (an AsCII code of the color ) 
  4) car price in USD ( max 100,000,000) (28 bits ) */
#include<stdint.h>
struct CarDetails
{
	uint16_t speed;
        uint16_t weight;
        char colour;
        uint32_t price;	

};
int main()
{
	struct CarDetails car;
        car.speed = 400;
	printf("sizeof = %zu", sizeof(car));}
