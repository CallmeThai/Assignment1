#include <iostream>
#include <math.h>

using namespace std;
int main(){
    float a, b, c;
    cout<<"Nhap vao ba so a b c:";
    cin>> a >> b >> c ;
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"Phuong trinh vo so nghiem" << endl;
            }
            else{
            cout<<"Phuong trinh vo nghiem" << endl;
        }
        } else{
            cout<<"x = "<< -c /b << endl;
        }
    } else{
        float delta = b*b-(4*a*c);
        if(delta==0){
            float x= -b/ (2 * a );
            cout<<"Phuong trinh co nghiem kep x1=x2=" << x <<endl;
        } else if(delta>0){
                float x1=(-b + sqrt(delta))/ (2 *a);
                float x2=(-b - sqrt(delta))/ (2 *a);
                cout<<"Phuong trinh co 2 nghiem x1="<< x1 <<", x2 = "<< x2 << endl;
        }
    }
    cout<< endl;
}