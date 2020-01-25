struct data
{
    int mx,idx;
};
data mergee(data l,data r)
{
    if(l.mx > r.mx)return l;
    else if(l.mx < r.mx)return r;
    else
    {
        if(l.idx < r.idx)return 1;
        else return r;
    }
}
