//what the fuck am I doing
//this was a mistake, and I regret nothing
//what the fuck am I doing
typedef bitset<99> fuck;
typedef bitset<1> ass;

//now my code can literally give a fuck
#define give return;

#include <string>

//"fizz" in binary is "01100110011010010111101001111010"
//that's 32 bits
//4*32 = 96
//fuck i need 3 more bits
//101 because i didn't do coding 101
//011001100110100101111010011110100110011001101001011110100111101001100110011010010111101001111010101
//that's the 99 bits representing fizz101
fuck fizz101 = (std::string("011001100110100101111010011110100110011001101001011110100111101001100110011010010111101001111010101"));



//reminder of what fizzbuzz is because i'm too lazy to remember it
/*
"Write a program that prints the numbers from 1 to 100.
 * But for multiples of three print “Fizz” instead of 
 * the number and for the multiples of five print “Buzz”. 
 * For numbers which are multiples of both three and five print “FizzBuzz”." 
 
 */






//gives one fuck
//takes a fuck
fuck generateHash(fuck that)
{    
    fuck *shit = &that;
    //goes from 99 bottles of FizzBuzz to 0 bottles
    for(int bottles=99;bottles>0;bottles--)
    {
        //when bottles is a multiple of three fizz the shit
        if (bottles % 3 == 0)
        {
            fizz(shit);
        }
        //when bottles is a multiple of five buzz the shit
        if (bottles % 5 == 0)
        {
            buzz(shit);
        }
        //if we don't fizz the shit or buzz it then it hits the fan
        //also because for FizzBuzz we need to print the number...
        //so the bottles will represent how many times the fanblades spin
        if(bottles % 3 != 0 && bottles % 5 != 0)
        {
            hitthefan(shit,bottles)
        }

    }
    give *shit;
}

//fizz the fuck called shit

//shit must be slowly heated up
//as it approaches its boiling point it will start to fizz
//please allow the shit to cool before giving it
//we don't want to burn our hands on the shit
fuck fizz(fuck shit)
{
    //I think this xors the shit with fizz101 and stores the result in shit
    //i probably don't even need the loop
    for(int temperature=0; temperature<99; temperature++)
    {
        *(shit+temperature) = *(shit+temperature) ^ fizz101[temperature];
    }
    
    give shit;
}

//buzz the fuck called shit

//when you buzz shit all the bacteria inside get startled
//they mix the shit up on a molecular level
//you can't tell if the shit is different by looking at it
//whatever, i don't give a shit. that's this function's job
fuck buzz(fuck shit)
{
    //the buzzing will reverse every third bit..
    //so 0 and 2 switch, then 3 and 5, etc
    
    //a hole to put a spare bit from a fuck in
    ass hole;
    
    //serenity represents how startled the bacteria in the shit are
    for(int serenity=0;serenity<99;serenity+=3)
    {
        hole = *(shit + serenity);
        *(shit + serenity = *(shit + serenity + 2);
        *(shit + serenity + 2) = hole;
        //I seriously don't know if my pointers are okay
        //if you are watching please help me
    }
    
    give shit;
}


//sometimes shit hits the fan

//step 1: place shit inside of the fan while it is powered off
//step 2: let the fanblade spin for a little bit
//step 3: scrape the shit off the fanblades and cry
fuck hitthefan(fuck shit,int spins)
{
    //do stuff
    fuck air = *shit;//all of the shit gets into the air
    
    
    give shit;
}

//i don't remember how pointers work, mine are probably all fucked up