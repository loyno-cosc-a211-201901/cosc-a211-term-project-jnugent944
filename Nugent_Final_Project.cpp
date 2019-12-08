//Project Name: Final Project
//Program purpose: allows a player to play a game based off of the Phoenix Wright series
//Name: Joseph Michael Nugent Jr.
//Date Last Modified: 12/8/19

//This program is meant to be a game based off of the Phoenix Wright Series. It is a roleplaying game
//in which the player plays as a lawyer trying to get his client out of trouble. It uses three functions
//aside from the main function to help get the job done. The testimony function is basically where the 
//player inputs where he/she thinks the contradictions lie. The courtRecord function shows all of the evidence
//accrued thus far. The gameOver function runs the game over protocall, basically you lost and can retry, or
//just close the program. The player should be able to see all lines of dialogue, and the end result will be
//the player getting a NOT GUILTY verdict.

#include <iostream>
#include <fstream>
using namespace std;

bool testimony(int answer, int count, int correctStatement, int numOfStatements);
void courtRecord(int count);
void gameOver();

int main()
{
    int life = 5;
    int press;
    bool finalpress = false;
    int answer;
    int choice;
    int numStatements;
    int statement;
    int count = 0;
    bool correctEvidence = true;
    string next;

    cout << "AFTER EVERY LINE OF DIALOGUE, YOU MUST MIT ENTER TO CONTINUE." << endl;
    getline(cin, next);
    cout << "December 1, 2024. 9:15 PM" << endl;
    cout << "Hollow Museum: Guard's Station" << endl;
    getline(cin, next);
    cout << "*BANG*" << endl;
    getline(cin, next);
    cout << "???: Now to make off with my prize! Damnit! It's covered in Blood!" << endl;
    cout << "     Whatever, I'll pin this on the newbie and escape scott free." << endl;
    getline(cin, next);
    cout << endl;

    cout << "December 4, 2024. 9:20 AM" << endl;
    cout << "Hollow Courthouse: Defendant's Lobby" << endl;
    getline(cin, next);
    cout << "Cynthia: You think your ready for this, newbie?" << endl;
    getline(cin, next);
    cout << "Joseph: Of Course! I'll take care of this case like it's nothing!" << endl;
    cout << "        (I am terrified)" << endl;
    getline(cin, next);
    cout << "My name's Joseph Nugent, and that's my mentor, Cynthia Mars." << endl;
    cout << "I am a fledgeling lawyer, and this will be my first trial!" << endl;
    cout << "In this case I'll be defending my best friend, Shawn DeBlanc." << endl;
    cout << "I wasn't sure if I could take this case, but when I heard that Shawn was the defendant," << endl;
    cout << "I had to take it!" << endl;
    getline(cin, next);
    cout << "Cynthia: Don't be too overconfident, you still have a lot to grow." << endl;
    cout << "         If you need any help, I'll be there as your assistant." << endl;
    getline(cin, next);
    cout << "Guard: We're about to start, time for you to come in." << endl;
    getline(cin, next);
    cout << "Joseph: Right, guess it's time to go!" << endl;
    cout << "        (I will help Shawn!)" << endl;
    getline(cin, next);

    cout << "December 4, 2024. 9:30 AM" << endl;
    cout << "Courtroom C" << endl;
    getline(cin, next);
    cout << "Judge: Good morning, all. Are the prosecution and defense ready to proceed?" << endl;
    getline(cin, next);
    cout << "Joseph: The defense is ready, your honor." << endl;
    getline(cin, next);
    cout << "Shane: The prosection is ready, your honor." << endl;
    getline(cin, next);
    cout << "Judge: Right then, prosecutor Shane, your opening statement please." << endl;
    getline(cin, next);
    cout << "Shane: Yes, your honor. On the first of December, William Reed was found dead." << endl;
    cout << "       Having been shot in the head, his death was instant. Having been" << endl;
    cout << "       recently inducted as a police officer, the gun he was issued matched the bullet shot." << endl;
    cout << "       Hense why he was arrested so soon. The cameras were able to snap a picture of before and" << endl;
    cout << "       After the shot was taken, but the culprit was standing in a blind spot. This case is as" << endl; 
    cout << "       good as closed. Especially since my opponent is such a newbie." << endl;
    getline(cin, next);
    count++;
    cout << "Autopsy report added to the court record." << endl;
    getline(cin, next);
    count++;
    cout << "Gun and bullet added to the court record." << endl;
    getline(cin, next);
    count++;
    cout << "Crime scene photos added to the court record." << endl;
    getline(cin, next);
    cout << "Joseph: (Was that really neccessary. I don't even know you...)" << endl;
    getline(cin, next);
    cout << "Judge: Hmm, alright, you may present your first witness, prosecutor Shane." << endl;
    getline(cin, next);
    cout << "Joseph: (What!? You're not even going to correct him!?)" << endl;
    getline(cin, next);
    cout << "Shane: Yes, your honor. I would like to call the defendant, Shawn DeBlanc, to the stand." << endl;
    getline(cin, next);
    cout << "Shane: Pleas state your name and occupation, guilty party." << endl;
    getline(cin, next);
    cout << "Joseph: (Is this guy and the judge for real?)" << endl;
    getline(cin, next);
    cout << "Shawn: Shawn DeBlanc, Hollow town police officer." << endl;
    getline(cin, next);
    cout << "Shane: Let's cut to the chase, shall we?" << endl << endl;
    getline(cin, next);

    cout << "-----WITNESS TESTIMONY-----" << endl;
    cout << "What happened that night" << endl << endl;
    getline(cin, next);
    cout << "1) On the night of the murder, I was coming in to relieve one of my partners around 10 PM." << endl << endl;
    getline(cin, next);
    cout << "2) That night, I did not notice anything strange, aside from Will's corpse." << endl << endl;
    getline(cin, next);
    cout << "3) The security camera in the room was what provided the crime scene photos you have." << endl << endl;
    getline(cin, next);
    cout << "4) My gun was the only one discharged, even though I had it with me and did not shoot it." << endl << endl;
    getline(cin, next);
    cout << "-----END OF TESTIMONY-----" << endl;
    getline(cin, next);

    cout << "Shane: And there you have it, from the horse's mouth himself." << endl;
    getline(cin, next);
    cout << "Joseph: (Damnit! Shawn was always honest to a fault.)" << endl;
    getline(cin, next);
    cout << "Cynthia: Don't worry, Joseph, There's always a way out. Now, it's time for" << endl;
    cout << "         your cross examination. Let me just give you a refresher." << endl;
    getline(cin, next);
    cout << "Cynthia: To begin with, you'll have three options:" << endl;
    cout << "         1) Present your evidence." << endl;
    cout << "         2) Press the witness for more testimony." << endl;
    cout << "         3) Open the court record to examine the evidence so far." << endl;
    cout << "         I suggest doing the last two first before trying to present any evidence." << endl;
    cout << "         When you want to present, just select the statement and sealect your evidence. Remeber, your looking for contradictions." << endl;
    cout << "         Got it?" << endl;
    getline(cin, next);
    cout << "Joseph: Ya, I think I got it." << endl;
    getline(cin, next);
    cout << "Judge: Alright, the defense may begin with the cross examination." << endl << endl;
    getline(cin, next);
    cout << "-----CROSS EXAMINATION-----" << endl << endl;
    getline(cin, next);

    answer = 3;
    numStatements = 4;
    statement = 4;

    while(correctEvidence)
    {
        cout << "Life: " << life << endl << endl;
        cout << "1) On the night of the murder, I was coming in to relieve one of my partners around 10 PM." << endl << endl;
        cout << "2) That night, I did not notice anything strange, aside from Will's corpse." << endl << endl;
        cout << "3) The security camera in the room was what provided the crime scene photos you have." << endl << endl;
        cout << "4) My gun was the only one discharged, even though I had it with me and did not shoot it." << endl << endl;
        cout << "1: present. 2: press. 3: court record." << endl;
        cout << "Select your action: ";
        cin >> choice;
        if(choice == 1)
        {
            correctEvidence = testimony(answer, count, statement, numStatements);
            if(correctEvidence)
            {
                life--;
            }
        }
        else if(choice == 2)
        {
            cout << "Enter the statement to press: ";
            cin >> press;
            if(press == 1)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: So there was someone else present?" << endl << endl;
                getline(cin, next);
                cout << "Shawn: Just the offficer I was relieving." << endl;
                getline(cin, next);
                cout << "Shawn: Yes, but his gun was also a different caliber than mine, and he told me that Will was dead." << endl;
                getline(cin, next);
                cout << "Joseph: (Well, at least there was someone else present, but the gun...)" << endl;
                getline(cin, next);
            }
            else if(press == 2)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: What do you mean by nothing out if the ordinary?" << endl << endl;
                getline(cin, next);
                cout << "Shawn: That eveything was in place, no one was there that wasn't supposed to be, etc., etc." << endl;
                cout << "       Also, I immediately rushed in when I heard Will was dead, to which I found Will's dead body..." << endl;
                getline(cin, next);
                cout << "Joseph: (That was of no help...)" << endl;
                getline(cin, next);
                cout << "Cynthia: Don't worry, that just wasn't a good statement to press." << endl;
                getline(cin, next);
                cout << "Joseph: Right, let's just move on." << endl;
                getline(cin, next);
            }
            else if(press == 3)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: Are there any security cameras that show the perpetrator of the crime?" << endl << endl;
                getline(cin, next);
                cout << "Shawn: Sadly no, that was the only one to get a glimpse of the crimescene." << endl;
                cout << "       and the murderer was standing in the blindspot." << endl;
                getline(cin, next);
                cout << "Joseph: Ah, I see... (Still nothing, huh?)" << endl;
                getline(cin, next);
            }
            else if(press == 4)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: Where there any other guns at the crimescene?" << endl << endl;
                getline(cin, next);
                cout << "Shawn: Other than William's, no. And our guns are a different caliber." << endl;
                getline(cin, next);
                cout << "Joseph: (Hmm, I think there might be something in the court evidence that can help out this statement." << endl;
                getline(cin, next);
                cout << "Cynthia: Ah, you seem to have noticed it, too." << endl;
                getline(cin, next); 
                cout << "Joseph: Right, now to just present the proper evidence." << endl;
            }
            else
            {
                cout << "System: Invalid Input." << endl;
            }
        }
        else if(choice == 3)
        {
            courtRecord(count);
            getline(cin, next);
        }
        else
        {
            cout << endl;
            cout << "System: Invalid Input" << endl;
            getline(cin, next);
        }

        if(life == 0)
        {
            gameOver();
            life = 5;
            getline(cin, next);
        }
    }

    cout << "OBJECTION!" << endl;
    getline(cin, next);
    cout << "Joseph: So your gun was the only one discharged, right?." << endl;
    getline(cin, next);
    cout << "Shawn: Yes, why?" << endl;
    getline(cin, next);
    cout << "Joseph: And there was another person you were relieving?" << endl;
    getline(cin, next);
    cout << "Shane: Just where are you going with this?" << endl;
    getline(cin, next);
    cout << "Joseph: Well, there's something about this piece of evidence that caught my eye." << endl;
    getline(cin, next);
    cout << "Judge: Oh, what is it?" << endl;
    getline(cin, next);
    cout << "*The thing I find odd about this picture is:*" << endl;
    getline(cin, next);

    choice = 1000;

    while(choice != 2)
    {
        cout << "1) Autopsy Report." << endl;
        cout << "2) Gun and Bullet." << endl;
        cout << "3) Crime scene photos." << endl << endl;
        cout << "Present your evidence: ";
        cin >> choice;
        cout << endl;

        if(choice != 2)
        {
            cout << "Joseph: (Wait, that's not right...)" << endl << endl;
            getline(cin, next);
        }
    }

    cout << "Joseph: Your gun was in the locker around the time of the murder, BEFORE your shift," << endl;
    cout << "        and yet, the time of death was 9:15 PM. Then your gun is missing at 9:25 PM." << endl;
    cout << "        This can only mean one thing: that the guard you were relieving used your gun during that time!" << endl << endl;
    getline(cin, next);
    cout << "Shawn: Oh, that's right! I had forgotten it on my previous shift. I almost forget about that as well." << endl;
    cout << "       Thanks for catching that!" << endl;
    getline(cin, next);
    cout << "Joseph: (Shawn always was as forgetful as he is honest.)" << endl;
    getline(cin, next);
    cout << "Judge: Oh my!" << endl;
    getline(cin, next);
    cout << "Cynthia: Nice one, Joseph! We have some leeway now." << endl;
    getline(cin, next);
    cout << "Shane: Hmph! Don't celebrate yet, I had caught this hiccup myself before the trial, and as such," << endl;
    cout << "       I brought someone here who can prove this man's guilt." << endl;
    getline(cin, next);
    cout << "Joseph: (Another witness, huh. Well, he's just another chance to prove Shawn's innocence!)" << endl;
    cout << "        No objections here, your honor." << endl;
    getline(cin, next);
    cout << "Judge: Alright, bailif, bring in the next witness." << endl;
    getline(cin, next);
    cout << "Joseph:..." << endl;
    getline(cin, next);
    cout << "Cynthia:..." << endl;
    getline(cin, next);
    cout << "Shane:..." << endl;
    getline(cin, next);
    cout << "Judge:..." << endl;
    getline(cin, next);
    cout << "Joseph: (This guy's kinda wierd...)" << endl;
    getline(cin, next);
    cout << "Alrich: HOWDY, EVERYONE!!!!!!" << endl;
    getline(cin, next);
    cout << "Joseph: (Ouch, my ears! He's loud, too...)" << endl;
    getline(cin, next);
    cout << "Shane: Will the witness please state his name and occupation." << endl;
    getline(cin, next);
    cout << "Joseph: (Well, at least Shane seems rather ticked off, too.)" << endl;
    getline(cin, next);
    cout << "Alrich: My names Alrich Underwood, and I am a Hollow Town police officer!" << endl;
    getline(cin, next);
    cout << "Cynthia: Hmm, something about this guy seems off. Keep an open ear, Joseph." << endl;
    getline(cin, next);
    cout << "Joseph: Well, I'll certainly try. (I hope I don't go deaf.)" << endl;
    getline(cin, next);
    cout << "Shane: Enough talk! Please, demonstrate why only the defendant could have killed the victim." << endl;
    getline(cin, next);

    cout << "-----WITNESS TESTIMONY-----" << endl;
    cout << "Why it was Shawn." << endl;
    getline(cin, next);
    cout << "1) On the night in question, I had went away to briefly do my nightly patrol." << endl;
    getline(cin, next);
    cout << "2) During my patrol, I had heard a gunshot, and immediately rushed back to check on Will." << endl;
    getline(cin, next);
    cout << "3) When I had returned, Will was dead, and Shawn's locker had been opened, and only Shawn know's the lock's combination." << endl;
    getline(cin, next);
    cout << "4) It is clear that Shawn was the one who committed the crime!" << endl;
    getline(cin, next);
    cout << "-----END OF TESTIMONY-----" << endl;
    getline(cin, next);

    cout << "Joseph: Hang on, have we even considered Shawn's motive, why would he have killed Will?" << endl;
    getline(cin, next);
    cout << "Shane: Alrich?" << endl;
    getline(cin, next);
    cout << "Alrich: Right! It seems Will had won on a scatch off ticket worth $100,000. He had texted Shawn" << endl;
    cout << "        in his excitement. They were good friends, but it appears Shawn values money more than people!" << endl;
    getline(cin, next);
    cout << "Bloody scratch off ticket added to court record." << endl;
    getline(cin, next);
    count++;
    cout << "Joseph: That's simply not true! That's not who Shawn is!" << endl;
    getline(cin, next);
    cout << "Judge: Well, then prove it!" << endl;
    getline(cin, next);
    cout << "Joseph: With Pleasure! (I will prove Shawn innocent!)" << endl;
    getline(cin, next);
    cout << "-----CROSS EXAMINATION-----" << endl;

    answer = 5;
    correctEvidence = true;
    numStatements = 4;
    statement = 3;

    while(correctEvidence)
    {
        cout << "Life: " << life << endl << endl;
        cout << "1) On the night in question, I had went away to briefly do my nightly patrol." << endl << endl;
        cout << "2) During my patrol, I had heard a gunshot, and immediately rushed back to check on Will." << endl << endl;
        cout << "3) When I had returned, Will was dead, and Shawn's locker had been opened, and only Shawn knows the lock's combination." << endl << endl;
        cout << "4) It is clear that Shawn was the one who committed the crime!" << endl << endl;
        cout << "1: present. 2: press. 3: court record." << endl;
        cout << "Select your action: ";
        cin >> choice;
        if(choice == 1)
        {
            correctEvidence = testimony(answer, count, statement, numStatements);
            if(correctEvidence)
            {
                life--;
            }
        }
        else if(choice == 2)
        {
            cout << "Enter the statement to press: ";
            cin >> press;
            if(press == 1)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: Is there anything special you need to do during the patrol?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: Well, there's a toolbox we use incase something needs fixing." << endl;               
                getline(cin, next);
                cout << "Joseph: What's in that toolbox?" << endl;
                getline(cin, next);
                cout << "Alrich: Here, you can see it in the crime scene photos." << endl;
                getline(cin, next);
                cout << "Joseph: Ah, I see it." << endl;
                getline(cin, next);
                cout << "Picture of toolbox added to court record." << endl;
                getline(cin, next);
                count = 5;
                cout << "Shane: Is your foolhardy attempts to prove a guilty man's innocence done yet?" << endl;
                getline(cin, next);
                cout << "Joseph: Nope, not by a longshot!" << endl;
                getline(cin, next);
            }
            else if(press == 2)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: Did you run into anybody on your way back?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: No, and the fact that there are plenty of exits doesn't help. But the fact that" << endl;
                cout << "        the perp didn't show up in any of the security cameras means that it was someone" << endl;
                cout << "        who knew their blindspots." << endl;
                getline(cin, next);
                cout << "Joseph: (Oof, that's not good, time to move on.)" << endl;
                getline(cin, next);
            }
            else if(press == 3)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: Do you have any idea if anyone else could have opened Shawn's locker?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: Well, seeing as Shawn is the only one who knows the combination to his lock..." << endl;
                getline(cin, next);
                cout << "Shane: BAHAHAHAHAHA. Quit while you're ahead, rookie, you've done a decent showing so far, don't ruin it." << endl;
                getline(cin, next);
                cout << "Joseph: (Hmm, I'm not convinced yet, there's still more statements to press and more evidence to present.)" << endl;
                getline(cin, next);
            }
            else if(press == 4)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: I'm not so sure." << endl << endl;
                getline(cin, next);
                cout << "Alrich: Sorry, kid, that's just how it seems." << endl;
                getline(cin, next);
                cout << "Joseph: (This isn't going to go anywhere.)" << endl;
                getline(cin, next);
            }
            else
            {
                cout << "System: Invalid Input." << endl;
            }
        }
        else if(choice == 3)
        {
            courtRecord(count);
            getline(cin, next);
        }
        else
        {
            cout << endl;
            cout << "System: Invalid Input" << endl;
            getline(cin, next);
        }

        if(life == 0)
        {
            gameOver();
            life = 5;
            getline(cin, next);
        }
    }

    cout << "OBJECTION!" << endl;
    cout << "Joseph: So, you think Shawn did it because he was the only one capable of opening his locker?" << endl << endl;
    getline(cin, next);
    cout << "Alrich: That and the fact the perp knew all of the security camera's blind spots." << endl;
    getline(cin, next);
    cout << "Joseph: Well, that's interedting, considering you had a pair of bolt cutters in the toolbox you pointed out." << endl;
    getline(cin, next);
    cout << "Shane: OH!" << endl;
    getline(cin, next);
    cout << "Judge: MY!" << endl;
    getline(cin, next);
    cout << "Alrich: GOD!" << endl;
    getline(cin, next);
    cout << "Cynthia: Nice catch! Now real it in!" << endl;
    getline(cin, next);
    cout << "Alrich: Well, care to explain what my motive was?" << endl;
    getline(cin, next);
    cout << "Joseph: (Seems as if his guise is slipping!) Have you already forgotten?";
    getline(cin, next); 
    cout << "*This clearly shows your motive:*" << endl;
    
    choice = 333;

    while (choice != 1)
    {
        cout << "1) The bloody lottery ticket." << endl;
        cout << "2) Will was mean to you." << endl;
        cout << "3) You secretly are Will in disguise!" << endl << endl;
        cout << "Present your evidence:";
        cin >> choice;

        if(choice != 1)
        {
            cout << "Joseph: (What am I thinking! That makes no sense!)" << endl;
            getline(cin, next);
        }
    }

    cout << "Joseph: The bloody lotter ticket. It's so obvious. You were deflecting your own motive onto Shawn!" << endl;
    getline(cin, next);
    cout << "Shane: HAHAHAHAHA! Well, megaphone, have anything to say?" << endl;
    getline(cin, next);
    cout << "Alrich: ... Alright then. I was hoping to not have to use this, but here, take this." << endl;
    getline(cin, next);
    cout << "Questionable photo added to court record." << endl;
    getline(cin, next);
    count++;
    cout << "Joseph: What's this?" << endl;
    getline(cin, next);
    cout << "Alrich: Isn't it obvious? Fine, I'll just have to tell you what it is." << endl;
    getline(cin, next);

    cout << "-----WITNESS TESTIMONY-----" << endl;
    cout << "The questionable photo." << endl;
    getline(cin, next);
    cout << "1) I lied a bit in my previous testimony." << endl;
    getline(cin, next);
    cout << "2) I walked in as Shawn was committing the crime." << endl;
    getline(cin, next);
    cout << "3) In my panic, I managed to snag that photo with my phone." << endl;
    getline(cin, next);
    cout << "4) It shows the moment Shawn murdered Will, shot right in the gut." << endl;
    getline(cin, next);
    cout << "5) I managed to sneak away before he noticed me." << endl;
    getline(cin, next);
    cout << "-----END OF TESTIMONY-----" << endl;
    getline(cin, next);

    cout << "Judge: Watch it, witness! I'm not too fond of perjury in my court." << endl;
    getline(cin, next);
    cout << "Joseph: I won't let this stand!" << endl;
    getline(cin, next);
    cout << "Cynthia: Stay cool, Joseph. There's something clearly wrong with his testimony and the photo." << endl;
    getline(cin, next);
    cout << "Shane: She's right. Just bring this to an end, attourney. I'm growing tires of these shenanigans." << endl;
    getline(cin, next);
    cout << "Joseph: Gladly." << endl;
    getline(cin, next);
    cout << "Judge: Right, then. You may proceed with the cross examination." << endl;
    cout << "-----CROSS EAMINATION-----" << endl;
    getline(cin, next);

    answer = 1;
    numStatements = 5;
    statement = 4;
    correctEvidence = true;

    while(correctEvidence)
    {
        cout << "Life: " << life << endl << endl;
        cout << "1) I lied a bit in my previous testimony." << endl << endl;
        cout << "2) I walked in as Shawn was committing the crime." << endl << endl;
        cout << "3) In my panic, I managed to snag that photo with my phone." << endl << endl;
        cout << "4) It shows the moment Shawn murdered Will, shot right in the gut." << endl << endl;
        cout << "5) I managed to sneak away before he noticed me." << endl << endl;
        cout << "1: present. 2: press. 3: court record." << endl;
        cout << "Select your action: ";
        cin >> choice;
        if(choice == 1)
        {
            correctEvidence = testimony(answer, count, statement, numStatements);
            if(correctEvidence)
            {
                life--;
            }
        }
        else if(choice == 2)
        {
            cout << "Enter the statement to press: ";
            cin >> press;
            if(press == 1)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: How can we still trust you if you lied under oath?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: You just gotta." << endl;               
                getline(cin, next);
                cout << "Judge: While I'm afraid you're right, it is our duty to listen to him." << endl;
                getline(cin, next);
                cout << "Joseph: (Fine by me, I'll just use his own words to fuel the fire!)" << endl;
                getline(cin, next);
            }
            else if(press == 2)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: Why didn't you show this photo before?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: I didn't want to believe it, but now, I gotta." << endl;
                getline(cin, next);
                cout << "Cynthia: Joseph, this guy's got 'liar' written all over his face." << endl;
                cout << "Joseph: Right, just gotta find the right statement and evidence to present!" << endl;
                getline(cin, next);
            }
            else if(press == 3)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: So, in the middle of witnessing a murder, you just so happened to have your phone out with the camera open?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: I'm just as shocked as you, to be honest." << endl;
                getline(cin, next);
                cout << "Shane: Please, just end this man's blathering already." << endl;
                getline(cin, next);
                cout << "Joseph: Working on it." << endl;
                getline(cin, next);
            }
            else if(press == 4)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: In the gut, you say?." << endl << endl;
                getline(cin, next);
                cout << "Alrich: Yep, just as shown in the picture." << endl;
                getline(cin, next);
                cout << "Joseph: (Somethings wrong here, very wrong.)" << endl;
                getline(cin, next);
            }
            else if(press == 5)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: He didn't notice you at all?" << endl;
                getline(cin, next);
                cout << "Alrich: It seemed as if he was in too much shock to notice me." << endl;
                getline(cin, next);
                cout << "Joseph: (Hmm, I guess that would be reasonable, if it did happen. I'm not getting anything from this statement." << endl;
                getline(cin, next); 
            }
            else
            {
                cout << "System: Invalid Input." << endl;
            }
        }
        else if(choice == 3)
        {
            courtRecord(count);
            getline(cin, next);
        }
        else
        {
            cout << endl;
            cout << "System: Invalid Input" << endl;
            getline(cin, next);
        }

        if(life == 0)
        {
            gameOver();
            life = 5;
            getline(cin, next);
        }
    }

    cout << "OBJECTION!" << endl;
    getline(cin, next);
    cout << "Joseph: Sorry, but that's just a blatant lie." << endl;
    getline(cin, next);
    cout << "Alrich: What do you mean, the picture proves everything." << endl;
    getline(cin, next);
    cout << "Joseph: No, it proves nothing. In that picture, the victim is being shot in the gut, but according to" << endl;
    cout << "        The autopsy report, the victim died from a single shot to the head, with no other wounds found." << endl;
    getline(cin, next);
    cout << "Alrich: GRRRRRRR!" << endl;
    getline(cin, next);
    cout << "Judge: Strike two, witness! You're on thin ice! Strike that from the court record!" << endl;
    getline(cin, next);
    cout << "Questionable photo no longer considered proper evidence." << endl;
    getline(cin, next);
    cout << "Shane: HAHAHA! You just can't seem to stop digging your own grave!" << endl;
    getline(cin, next);
    cout << "Joseph: I would like to point out to the court that the witness' behavior is extremely suspicious. I would like" << endl;
    cout << "        To formally indite Alrich Underwood under the suspicion of murdering William Reed!" << endl;
    getline(cin, next);
    cout << "Cynthia: Nice way to pounce while we have the momentum going!" << endl;
    getline(cin, next);
    cout << "Alrich:..." << endl;
    getline(cin, next);
    cout << "Joseph: (Whoa! It's as if he's a completly different person than before!)" << endl;
    getline(cin, next);
    cout << "Alrich: Don't make me laugh, child! There's nothing indicating me as the culprit." << endl;
    getline(cin, next);
    cout << "Judge: While his behavior is suspicious, I'm afraid he's right." << endl;
    getline(cin, next);
    cout << "Joseph: (Drat... Wait, I remeber something from before!" << endl;
    getline(cin, next);
    cout << "-That and the fact the perp knew all of the security camera's blind spots-" << endl;
    getline(cin, next);
    cout << "Joseph: (I just might have something to save this!)" << endl;
    cout << "        Hang on! There just might be something to help prove that this man is the real perpetrator!" << endl;
    getline(cin, next);
    cout << "Alrich: Alright then, let's see it, child!" << endl;
    getline(cin, next);
    cout << "Joseph: Here it is:" << endl;
    getline(cin, next);
    cout << "*This shows that the culprit could have been you:*" << endl;
    getline(cin, next);
    
    choice = 10;
    while(choice != 2)
    {
        cout << "1) Gun and bullet." << endl;
        cout << "2) Crime scene photos." << endl;
        cout << "3) Picture of a Toolbox." << endl << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice != 2)
        {
            cout << "Joseph: (That's... not quite right...)" << endl;
            getline(cin, next);
        }
    }

    cout << "Joseph: 'That and the fact the perp knew all of the security camera's blind spots.' Those were your own words." << endl;
    getline(cin, next);
    cout << "Alrich: Oh no!" << endl;
    getline(cin, next);
    cout << "Joseph: Oh yes! It seems that your own deflections have been what's been proving your guilt!" << endl;
    getline(cin, next);
    cout << "Cynthia: Nice, keep going!" << endl;
    getline(cin, next);
    cout << "Judge: Well, it certainly seems as if we have a new suspect." << endl;
    getline(cin, next);
    cout << "HOLD IT!" << endl;
    getline(cin, next);
    cout << "Joseph: !" << endl;
    getline(cin, next);
    cout << "Cynthia: !" << endl;
    getline(cin, next);
    cout << "Shane: !" << endl;
    getline(cin, next);
    cout << "Judge: !" << endl;
    getline(cin, next);
    cout << "Alrich: This is mere conjecture. It could have been pure coincidence. I do not appreciate this slander!" << endl;
    getline(cin, next);
    cout << "Joseph: There's more than enough here to point to you as the culprit?" << endl;
    getline(cin, next);
    cout << "Alrich: Really, then? How about some hard evidence?" << endl;
    getline(cin, next);

    cout << "-----WITNESS TESTIMONY-----" << endl;
    cout << "You can't prove it was me!" << endl;
    getline(cin, next);
    cout << "1) You're out of luck! You have no hard evidence proving it was me!" << endl;
    getline(cin, next);
    cout << "2) There's nothing in the photos, nothing in terms of the weapon..." << endl;
    getline(cin, next);
    cout << "-----END OF TESTIMONY-----" << endl;
    getline(cin, next);

    cout << "Joseph: ...Is... Is that all?" << endl;
    getline(cin, next);
    cout << "Cynthia: We have him on the ropes! Don't give in now!" << endl;
    getline(cin, next);
    cout << "Alrich: Sorry, but if you can't prove it was me, which it wasn't anyways, than Shawn's still the only suspect!" << endl;
    getline(cin, next);
    cout << "Shane: Lawyer! Finish this case, already, I'm tired of hearing this man's incessant blathering." << endl;
    getline(cin, next);
    cout << "Joseph: (This is it, this is the final nail in the coffin! This is where I prove Shawn's innocence!)" << endl;
    getline(cin, next);
    cout << "HOLD IT!" << endl;
    getline(cin, next);
    cout << "All: !" << endl;
    getline(cin, next);
    cout << "Guard: I've come to deliver something to the court, it will be very usefull." << endl;
    getline(cin, next);
    cout << "Judge: Oh, what is it?" << endl;
    getline(cin, next);
    cout << "Guard: It's an updated autopsy report, turns out the victim was drugged before being shot." << endl;
    getline(cin, next);
    cout << "Updated autopsy report added to court record." << endl;
    getline(cin, next);
    count = 7;
    cout << "Guard: The victim was shot, but beforehand trace amounts of drugs were found in his system. The victim also has" << endl;
    cout << "       no previous medical history. No major surgeries, no medication, no nothing." << endl;
    getline(cin, next);
    cout << "Judge: I see, thank you. Now defense, you may proceed." << endl;
    getline(cin, next);
    cout << "-----CROSS EXAMINATION-----" << endl << endl;
    getline(cin, next);

    statement = 3;
    numStatements = 2;
    answer = 7;
    correctEvidence = true;

    while(correctEvidence)
    {
        cout << "Life: " << life << endl << endl;
        cout << "1) You're out of luck! You have no hard evidence proving it was me!" << endl << endl;
        cout << "2) There's nothing in the photos, nothing in terms of the weapon..." << endl << endl;
        if(finalpress)
        {
            cout << "3) This is just my medication! Nothing more!" << endl << endl;
        }
        cout << "1: present. 2: press. 3: court record." << endl;
        cout << "Select your action: ";
        cin >> choice;
        if(choice == 1)
        {
            correctEvidence = testimony(answer, count, statement, numStatements);
            if(correctEvidence)
            {
                life--;
            }
        }
        else if(choice == 2)
        {
            cout << "Enter the statement to press: ";
            cin >> press;
            if(press == 1)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: How can you still say that after everything?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: Because it wasn't me, and you can't prove it!" << endl;
                getline(cin, next);
                cout << "Joseph: (Hmm, he's holding something back from me. This isn't the statement to press...)" << endl;
                getline(cin, next);
            }
            else if(press == 2)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: What about the drug used on Will?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: Had nothing to do with me." << endl;
                getline(cin, next);
                cout << "Shawn: Hang on, what's that in your pocket?" << endl;
                getline(cin, next);
                cout << "Alrich: Oh, that's just my medication, nothing more!" << endl;
                getline(cin, next);
                cout << "Joseph: Your medication, huh? Your honor, this statement is vital." << endl;
                getline(cin, next);
                cout << "Judge: Ok, if you say so. Witness, please add that statement to your testimony." << endl; 
                finalpress = true;
                numStatements = 3;
            }
            else if(press == 3 && finalpress)
            {
                cout << "HOLD IT!" << endl;
                cout << "Joseph: Your medication, huh?" << endl << endl;
                getline(cin, next);
                cout << "Alrich: Yep, nothing more." << endl;
                getline(cin, next);
                cout << "Joseph: (All the pieces of the puzzle have finally come together, now to present the final piece of evidence!)" << endl;
                getline(cin, next);
            }
            else
            {
                cout << endl;
                cout << "System: Invalid Input" << endl;
                getline(cin, next);
            }
        }
        else if(choice == 3)
        {
            courtRecord(count);
            getline(cin, next);
        }
        else
        {
            cout << "System: Invalid Input" << endl;
        }

        if(life == 0)
        {
            gameOver();
            life = 5;
            getline(cin, next);
        }
    }

    cout << "OBJECTION!" << endl;
    getline(cin, next);
    cout << "Joseph: Looks like it's game over for you Alrich." << endl;
    getline(cin, next);
    cout << "Alrich: Huh?" << endl;
    getline(cin, next);
    cout << "Joseph: All we need to do is check that medication for the drug used in Will's body, then we'll know who the real culprit is!" << endl;
    getline(cin, next);
    cout << "Alrich: What!? No, Don't-" << endl;
    getline(cin, next);
    cout << "Judge: Bailif, sieze him!" << endl;
    getline(cin, next);
    cout << "Alrich: NONONONONONONONONONO! AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHHHHHHHHHHHHHHHHHHHHH!" << endl;
    getline(cin, next);
    cout << "Some time later." << endl;
    getline(cin, next);
    cout << "Judge: Ah, the test results are finally back... Oh my, it appears the drugs were a match!" << endl;
    getline(cin, next);
    cout << "Joseph: All right!" << endl;
    getline(cin, next);
    cout << "Shane: hmph." << endl;
    getline(cin, next);
    cout << "Judge: In the light of this new revelation, I am ready to hand down my verdict. Will the defendant please take the stand." << endl;
    getline(cin, next);
    cout << "Shawn: Yes, your honor." << endl;
    getline(cin, next);
    cout << "Judge: I find the defendant, Shawn DeBlanc..." << endl;
    getline(cin, next);
    cout << "NOT GUILTY" << endl;
    getline(cin, next);
    cout << "Judge: Court is now adjourned." << endl;
    getline(cin, next);

    cout << "December 4, 2024. 11:00 AM" << endl;
    cout << "Hollow Courthouse: Defendant's Lobby" << endl;
    getline(cin, next);
    cout << "Cynthia: Excellent job on your first case, Joseph!" << endl;
    getline(cin, next);
    cout << "Shawn: Ya, thanks for proving my innocence!" << endl;
    getline(cin, next);
    cout << "Joseph: Aw, thanks guys! But I couldn't have done it without your guidence, Cynthia, or your keen eye, Shawn!." << endl;
    getline(cin, next);
    cout << "Cynthia: Don't sell yourself short, you always believed in your client and proved his innocence." << endl;
    getline(cin, next);
    cout << "Shawn: Hey, I'm hungry, and it's almost lunchtime, you guys wanna grab a bite?" << endl;
    getline(cin, next);
    cout << "Cynthia: Sure, and since this is Joseph's first victory, he should pay!" << endl;
    getline(cin, next);
    cout << "Shawn: Agreed!" << endl;
    getline(cin, next);
    cout << "Joseph: (Wait, I don't get a say in this!? Well, I guess there's only one thing to say.)" << endl << endl;
    cout << "Press enter to object!" << endl;
    getline(cin, next);
    cout << "OBJECTION!" << endl;

    return 0;
}

bool testimony(int answer, int count, int correctStatement, int numOfStatement)
{
    int choiceEv;
    int choiceStat;
    bool badPlay = true;
    string next;

    while(badPlay)
    {
        cout << "Select the statement that contains a contradiction: ";
        cin  >> choiceStat;
        cout << endl;

        if(count >= 1)
        {
            cout << "1: Autopsy Report." << endl;
        }
        if(count >= 2)
        {
            cout << "2: Gun and bullet." << endl;
        }
        if(count >= 3)
        {
            cout << "3: Crime scene photos" << endl;
        }
        if(count >= 4)
        {
            cout << "4: Bloody scratch off ticket." << endl;
        }
        if(count >= 5)
        {
            cout << "5: Picture of a toolbox." << endl;
        }
        if(count == 6)
        {
            cout << "6: Questionable picture." << endl;
        }
        if(count >= 7)
        {
            cout << "6: Discarded." << endl;
            cout << "7: Updated autopsy report." << endl; 
        }

        cout << "Present your evidence: ";
        cin >> choiceEv;
        cout << endl;

        if (choiceEv <= count && choiceEv > 0)
        {
            if (choiceStat <= numOfStatement && choiceStat > 0)
            {
                badPlay = false;
                if(choiceStat == correctStatement)
                {
                    if(choiceEv == answer)
                    {
                        return false;
                    }   
                    else
                    {
                        cout << "OBJECTION!" << endl;
                        cout << "Joseph: This piece of evidence creates a clear contradiction in this statement!" << endl << endl;
                        getline(cin, next);
                        cout << "Shane: Heh, haha, HAHAHAHAHAHAHAHAHAHAHA!!!!" << endl;
                        getline(cin, next);
                        cout << "Cynthia: Are you trying to lose your first case?" << endl;
                        getline(cin, next);
                        cout << "Joseph: (Ouch... tough crowd... guess that wasn't it...)" << endl;
                        getline(cin, next);
                        cout << "Judge: I suggest you start taking this seriously. Penalty!" << endl;
                        getline(cin, next);
                        return true;
                    }
                }
                else
                {
                    cout << "OBJECTION!" << endl;
                    cout << "Joseph: This piece of evidence creates a clear contradiction in this statement!" << endl << endl;
                    getline(cin, next);
                    cout << "Shane: Heh, haha, HAHAHAHAHAHAHAHAHAHAHA!!!!" << endl;
                    getline(cin, next);
                    cout << "Cynthia: Are you trying to lose your first case?" << endl;
                    getline(cin, next);
                    cout << "Joseph: (Ouch... tough crowd... guess that wasn't it...)" << endl;
                    getline(cin, next);
                    cout << "Judge: I suggest you start taking this seriously. Penalty!" << endl;
                    getline(cin, next);
                    return true;
                }
            }
            else
            {
                cout << "System: Invalid Input. Try again." << endl << endl;
            }
        }
        else
        {
            cout << "System: Invalid Input. Try again." << endl << endl;
        }
    }
}
    
void courtRecord(int count)
{
    cout << endl << "-----Court Record-----" << endl << endl;
    if(count >= 1)
    {
        cout << "1: Autopsy Report." << endl;
        cout << "William Reed was found dead from a single shot to his temple. No other wounds. It was an instant death." << endl;
        cout << "Time of death: 9:15 PM. December 1, 2024." << endl << endl;
    }
    if (count >= 2)
    {
        cout << "2: Gun and Bullet." << endl;
        cout << "The gun and bullet the perpetrator used to commit the crime. It belongs to Shawn." << endl << endl;
    }
    if (count >= 3)
    {
        cout << "3: Crime scene photos." << endl;
        cout << "Two photos, one before and one after the crime, are present. Shawn's gun is in his locker" << endl;
        cout << "in the first one taken at 8:50 PM, but missing in the second one taken around 9:25 PM." << endl << endl;
    }
    if (count >= 4)
    {
        cout << "4: Bloody scratch off ticket." << endl;
        cout << "A winning scratch off ticket worth $100,000. It's assumed to be the culprit's motive." << endl << endl;
    }
    if (count >= 5)
    {
        cout << "5: Picture of a toolbox." << endl;
        cout << "A picture of a toolbox located in the guard's room. It contains bolt cutters." << endl << endl;
    }
    if (count == 6)
    {
        cout << "6: Questionable photo." << endl;
        cout << "A picture of an officer shooting someone else in the abdomen." << endl << endl;
    }
    if (count >= 7)
    {
        cout << "6: Discarded" << endl << endl;;
        cout << "7: Updated Autopsy report." << endl;
        cout << "William Reed was found dead from a single shot to his temple. Victim was founded to be drugged. It was an instant death." << endl;
        cout << "Time of death: 9:15 PM. December 1, 2024." << endl << endl;
    }
    cout << endl;
    cout << "-----Court Record-----" << endl << endl;
}

void gameOver()
{
    string next;
    cout << "Judge: I've heard enough, it is clear that there is nothing else to be discussed." << endl;
    cout << "       I find the defendant, Shawn DeBlanc..." << endl;
    getline(cin, next);
    cout << "GUILTY" << endl;
    getline(cin, next);
    cout << "Press enter to retry or exit the program to quit." << endl;
}