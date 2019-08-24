#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

void towersofhanoi(int n, char from, char to, char aux)
{
  if(n==1){
    cout << "Move disc from rod "<<from<<" to rod"<<to <<endl;
    return;
  }
  towersofhanoi(n-1, from, aux, to);
  std::cout << "moving disc " << n <<" from rod "<<from<<" to rod "<<to<<endl;
  towersofhanoi(n-1, aux, to, from);

}

int main() {
  int n;
  cout<<"Enter number of discs"<<endl;
  cin>>n;
  towersofhanoi(n, 'A', 'B', 'C');
  cout<<"************"<<endl;
  int var= (pow(2, n)-1);
  cout<<"Total number of steps are\t"<<var<<endl;
  return 0;
}
