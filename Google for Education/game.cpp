#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

const int kInitialNumberOfCannons = 10;
const double PI  =3.141592653589793238462;
const double kVelocity = 200;
const double kGravity = 32.2;

void StartUp();
int Fire(int killed);
int Enemy_distance();
int Compute_distance(double angle);
double Read_angle();
double Convert_to_radians(double angle);

int main()
{

  int killed;
  char done;
  StartUp();
  killed = 0;
  do
  {
      killed = Fire(killed);
      cout << "I see another one, are you ready? (Y/N) ";
      cin >> done;
  }
  while( done != 'n');
  cout << "You killed " << killed << " of the enemy." << endl;
}
int Fire(int killed)
{
    int enemy_distance = Enemy_distance();
    int distance;
    cout << "The enemy is " << enemy_distance << " feet away!!!" << endl;
    double in_angle;
    int number_of_cannons = kInitialNumberOfCannons;
    bool hit_enemy = false;
    do
    {
        in_angle = Read_angle();
        if (in_angle == -1)
        {
            continue;
        }
        in_angle = Convert_to_radians(in_angle);
        distance = Compute_distance(in_angle);
        if (abs(enemy_distance - distance) <= 1)
        {
        cout << "You hit him!!" << endl;
        hit_enemy = true;
        }
        else
        {
            if(distance > enemy_distance)
            {
                cout << "You over shot by " << (distance - enemy_distance) << endl;
            }
            else if( distance < enemy_distance)
            {
                cout << "You under shot by " << (enemy_distance - distance) << endl;
            }
        }
        number_of_cannons--;
    }
  while( !hit_enemy && number_of_cannons != 0 );
  if (hit_enemy)
  {
      cout << "It took you " << (kInitialNumberOfCannons - number_of_cannons) << " shots." << endl;
      killed++;
  }
  else
  {
      cout << "You missed the enemy, no more cannons left." << endl;
  }
  return killed;
}
double Read_angle()
{
    double in_angle;
    cout << "What angle? ";
    if ( !(cin >> in_angle))
    {
        cout << "please enter a valid angle." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        in_angle = -1;
    }
  return in_angle;
}
int Compute_distance(double angle)
{
    double time_in_air = (2.0 * kVelocity * sin(angle)) / kGravity;
    int distance = round( (kVelocity * cos(angle)) * time_in_air);
    return distance;
}
int Enemy_distance()
{
    srand(time(NULL));
    int random_distance =  rand() % 1000 + 1;
    return random_distance;
}
double Convert_to_radians(double angle)
{
    return (angle * PI) / 180.0;
}
void StartUp()
{
    cout << "Welcome to Artillery."<< endl;
    cout << "You are in the middle of a war and being charged by thousands of enemies."<< endl;
    cout << "You have one cannon, which you can shoot at any angle."<< endl;
    cout << "You only have 10 cannonballs for this target.."<< endl;
    cout << "Let's begin..." << endl;
}