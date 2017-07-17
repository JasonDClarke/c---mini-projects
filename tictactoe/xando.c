
void noughtsandcrosses()
{
    cout << "Noughts and Crosses:\n";
    reset ();
    printboard();
    while (GAMEOVER == 0 && numberofturns<9) {
        if (noughtsturn == 1) {
        cout << "Noughts' turn:\n";
        noughtsmove();
        }
        else if (noughtsturn ==0)
        {
        cout << "Crosses' turn:\n";
        crossesmove();
        }
    }
    if (GAMEOVER == 0 && numberofturns == 9) {
        cout << "It's a DRAW!";
        GAMEOVER =1;
    }
    cout << "\n\nGAME OVER!";
}

void printboard() {
cout << a << b << c << " 123\n" << d << e << f << " 456\n" << g << h << i << " 789\n\n";
}

void noughtsmove() {
bool validmovegiven=0;
while (validmovegiven == 0) {
int choiceofmove=0;
cin >> choiceofmove;
switch (choiceofmove)
    {
        case 1: if (a == '-') {
                    a='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 2: if (b == '-') {
                    b='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 3: if (c == '-') {
                    c='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 4: if (d == '-') {
                    d='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 5: if (e == '-') {
                    e='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 6: if (f == '-') {
                    f='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 7: if (g == '-') {
                    g='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 8: if (h == '-') {
                    h='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 9: if (i == '-') {
                    i='O';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        default: validmovegiven=0;
            break;
    }
}
    printboard();
    checknoughtswin();
    noughtsturn =0;
    numberofturns++;
}

void crossesmove() {
bool validmovegiven=0;
while (validmovegiven == 0) {
int choiceofmove=0;
cin >> choiceofmove;
switch (choiceofmove)
    {
        case 1: if (a == '-') {
                    a='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 2: if (b == '-') {
                    b='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 3: if (c == '-') {
                    c='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 4: if (d == '-') {
                    d='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 5: if (e == '-') {
                    e='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 6: if (f == '-') {
                    f='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 7: if (g == '-') {
                    g='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 8: if (h == '-') {
                    h='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        case 9: if (i == '-') {
                    i='X';
                validmovegiven=1;
                 }
                else {
                    validmovegiven=0;
                }
                    break;
        default: validmovegiven=0;
            break;
    }
}
    printboard();
    checkcrosseswin();
    noughtsturn =1;
    numberofturns++;
}

void checknoughtswin() {
    if ((a == 'O' && b == 'O' && c == 'O')
    || (d == 'O' && e == 'O' && f == 'O')
    || (g == 'O' && h == 'O' && i == 'O')
    || (a == 'O' && d == 'O' && g == 'O')
    || (b == 'O' && e == 'O' && h == 'O')
    || (c == 'O' && f == 'O' && i == 'O')
    || (a == 'O' && e == 'O' && i == 'O')
    || (c == 'O' && e == 'O' && g == 'O'))
{
        cout << "Noughts WIN!";
        GAMEOVER=1;
    }
}

void checkcrosseswin() {
    if ((a == 'X' && b == 'X' && c == 'X')
    || (d == 'X' && e == 'X' && f == 'X')
    || (g == 'X' && h == 'X' && i == 'X')
    || (a == 'X' && d == 'X' && g == 'X')
    || (b == 'X' && e == 'X' && h == 'X')
    || (c == 'X' && f == 'X' && i == 'X')
    || (a == 'X' && e == 'X' && i == 'X')
    || (c == 'X' && e == 'X' && g == 'X'))
{
        cout << "Crosses WIN!";
        GAMEOVER=1;
    }
}

void reset() {
a='-';
b='-';
c='-';
d='-';
e='-';
f='-';
g='-';
h='-';
i='-';
GAMEOVER=0;
noughtsturn=1;
numberofturns=0;
}

bool playagainyn() {
    enum yesorno {no, yes};
    enum TRUEORFALSE {FALSE, TRUE};
    bool sufficientvalidinputgiven = FALSE;
    do  {
    cout << "\nPlay again? y/n\n";
    char yorn='\0';
    cin >> yorn;
    if (yorn == 'y') {
        cout << "Again! Again!\n";
        sufficientvalidinputgiven=TRUE;
        return yes;
    }
    else if (yorn == 'n') {
        cout << "Miserable sod.";
        sufficientvalidinputgiven=TRUE;
        return no;
    }
    }
    while (sufficientvalidinputgiven == FALSE);
}
