#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc,char** argv)
{
    cout<<argv[0] <<"\n";
    cout<<"replacing a letter or digit in a specific place --> ";
    char *c;
    c=argv[0];
    cout<<c[20] <<" to with *c ";
    c+=20;
    *c='b';
    cout<< *c << "\n";
    cout<< " c[20] " << c[20] << "\n";
    cout<< " &c[20] " << &c[20] <<"\n";
    cout<<" and new c as a new modified 'string'  " << c <<"\n";
    cout<<"\n";
    long double sqrt_num;
    long double result_num;
    int preci=-1;
    cout<<"enter number : ";
    cin>>sqrt_num;
    cout<<"\n";
    cout<<"enter result of sqrt number : ";
    cin>>result_num;
    cout<<"\n";
    cout<<"enter precision : ";
    cin>>preci;
    cout<<"\n";

    long double calculate_root;
    calculate_root=sqrt(sqrt_num);
    cout<<"want to change the result num to the precise square root result number ? \n";
    cout<<"the square root result number based on math.h is : " << calculate_root <<"\n";
    cout<<"press 1 to change or 0 to leave as is \n";
    int xc=-1;
    cin>>xc;
    if(xc==1){result_num=calculate_root;}

    cout<<"using only the integer part of the number \n";
    long double rs_one;
    rs_one=sqrt_num/9;
    cout<<std::setprecision(preci) << sqrt_num << " / 9 ::== " <<std::setprecision(preci) << rs_one <<"\n";
    long double xs_one;
    long double fractpart,intpart;
    fractpart=modf(rs_one,&intpart);
    long double fr,intp;
    fr=modf(result_num,&intp);
    xs_one=intpart/intp;
    cout<<std::setprecision(preci) << intpart << " / " << intp <<std::setprecision(preci) << " ::== " << xs_one <<"\n";
    long double xre;
    xre=intp/9;
    cout<<std::setprecision(preci) << intp << " / 9 ::== " <<std::setprecision(preci) << xre <<"\n";

    cout<<"\n";
    cout<<"without intpart \n";
    rs_one=sqrt_num/9;
    cout<<std::setprecision(preci) << sqrt_num << " /9 ::== " << std::setprecision(preci) << rs_one <<"\n";
    xs_one=rs_one/result_num;
    cout<<std::setprecision(preci) << rs_one <<" / " << std::setprecision(preci) << result_num << " ::== " << std::setprecision(preci) << xs_one <<"\n";
    xre=result_num/9;
    cout<<std::setprecision(preci) << result_num  <<  " / " << std::setprecision(preci) << " 9 ::== " << std::setprecision(preci) << xre <<"\n";
    return 0;
}
