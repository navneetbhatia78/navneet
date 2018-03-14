#include<iostream>
using namespace std;
int main()
{
    int n;
    int b=0;
    int c;
    int d;
    int e=0;
    int f;
    int maxr=0;
    cout<<"\nEnter the no of movies";
    cin>>n;
    int l[n];
    int r[n];
    cout<<"Enter the length of movies\n";
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"Movie "<<i<<" ";
        cin>>l[i];
    }
    cout<<"\nEnter the rating of movies\n";
    for(i=1;i<=n;i++)
    {
        cout<<"Movie "<<i<<" ";
        cin>>r[i];
    }
    int p[n];
    for(i=1;i<=n;i++)
    {
        p[i]=l[i]*r[i];
    }
    int max=0;
    for(i=1;i<=n;i++)
    {
        if(p[i]>max)
        {
            max=p[i];
            c=i;
            b=0;


        }
        else if(p[i]>=max)
        {
            max=p[i];
            b=1;
        }
    }
    if(b==1)
    {
        for(i=1;i<=n;i++)
        {
            if(r[i]>maxr)
            {
                maxr=r[i];
                d=i;
                e=0;
            }
            else if(r[i]>=maxr)
            {
                maxr=r[i];
               e=1;
               f=i;
            }
        }


    if(e==1)
    {
        if(d<f)
        {
            cout<<"Egor will watch movie no "<<d;
        }
        else
        {
            cout<<"\nEgor will watch movie no "<<f;
        }


    }
    else
    {
        cout<<"Egor will watch Movie No: "<<d<<" having maximum Rating i.e. "<<maxr;
    }
    }

    else
    {
        cout<<"Egor will watch Movie No: "<<c<<" having maximum Product i.e "<<max;
    }

    return 0;

}
