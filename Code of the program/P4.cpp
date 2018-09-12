#include <iostream>
#include <stdio.h>
using namespace std;

bool isUpper(const char* p1, const char* p2)
{
int i=0;
while(p1[i]==p2[i] && p1[i] != '\0')
i++;
if(p1[i] == '\0' && p2[i] != '\0')
return false;
if(p1[i] > p2[i])
return true;
else
return false;
}

void bubleSort(const char** P, int n)
{
for(int i=0;i<n;i++)
for(int j=0;j<n-i-1;j++)
{
if(isUpper(P[j],P[j+1]))
{
const char* tmp = P[j];
P[j] = P[j+1];
P[j+1] = tmp;
}
}
}

int main()
{
const char** P = new const char*[4];
P[0] = "naa";
P[1] = "lbasdasd";
P[2] = "mcaw";
P[3] = "k";
bubleSort(P,4);
for(int i=0; i < 4; i++)
cout<< P[i]<< endl;

//else
// cout « P[1];
getchar();
return 0;
}