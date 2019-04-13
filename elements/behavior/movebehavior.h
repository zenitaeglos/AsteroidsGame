#ifndef MOVEBEHAVIOR_H
#define MOVEBEHAVIOR_H

/*
virtual class to describe automatic move and manual move of objects
in the game. Automatic will be system generated and manual is
controlled by the user
This is a strategy pattern for these behaviors
*/
class MoveBehavior
{
public:
    enum Move {
        Automatic,
        Manual
    };
    MoveBehavior();
    virtual ~MoveBehavior();
    virtual Move getType() const = 0;

};

#endif // MOVEBEHAVIOR_H
