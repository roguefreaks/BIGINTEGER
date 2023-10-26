#ifndef BIGINTEGER_H
#define BIGINTEGER_H

struct node
{
    int data;
    struct node*next;
};
 struct BigInteger
{
    struct node* h;
    int length;
    int sign;
    
};
struct BigInteger initialize(char*s);
struct BigInteger add(struct BigInteger a,struct BigInteger b);
struct BigInteger sub(struct BigInteger a,struct BigInteger b);
struct BigInteger mul(struct BigInteger a,struct BigInteger b);
struct BigInteger div1(struct BigInteger a,struct BigInteger b);

struct BigInteger mod(struct BigInteger a,struct BigInteger b);
void display(struct BigInteger a);

#endif