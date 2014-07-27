class Triangular_iterator
{
public:
        Triangular_iterator(int index): _index(index-1){}
        bool operator == (const Triangular_iterator &) const;
       bool operator != (const Triangular_iterator &)const;
       int operator *() const;
       Triangular_iterator *operator++();
       Triangular_iterator & operator ++(int);

private:
       int _index;
       void check_intergrity() const;

};
