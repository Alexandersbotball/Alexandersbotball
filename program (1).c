#include <stdio.h>
#include <kipr/wombat.h>

int main()
{
  
   while(digital(0)==0) {
  motor(0,100);
  motor(3,100);
  msleep(100);

   }
   //drive backwards
   motor(0,-100);
   motor(3,-100);
   msleep(1000);
   //stop
   motor(0,0);
   motor(3,0);
   msleep(200);
   //enable servos
   enable_servo(0);
   //open servo
   set_servo_position(0,1300);
   msleep(1000);
  return 0;
}
