/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H
enum CarType{AIXAM , FIAT_MULTIPLA, JEEP};
enum Color{BLUE,RED,GREEN,BLACK,SILVER,ORANGE};

typedef struct CarImplemantation* Car;

void init();
Car get_car(CarType Car);
enum CarType get_type(Car car);
enum Color get_color(Car car);
double get_fill_level(Car car);
int get_acceleration_rate(Car car);
void  set_acceleration_rate(Car car , double rate);
double get_speed(Car car);


#endif
