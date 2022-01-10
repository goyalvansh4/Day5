#include<iostrream>
using namespace std;

void multipl(int m, int n){
  if(n==0)
    return 1;
 return m*multipl(m,n-1);

}

int main(){
  
  int m,n;
  cin>>m>>n;
  
  int out=multipl(m,n);
  cout<<out<<endl;
}
