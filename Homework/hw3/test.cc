for (i = 1; i < 5; i++)
{
    for (j = i; j >= 1; j--)
    {
        if (a[j] < a[j-1])
        {
        temp = a[j];
        a[j] = a[j-1];
        a[j-1] = temp;
        }
        else
        break;
    }
}
cout<<"sorted arrayn"<<endl;
for (k = 0; k < 5; k++)
    cout<<a[k]<<endl;

}
