#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
struct score
{
  int wkts,nbb,nbp,runs;
};
struct player
{
  char*name;
  int num;
  score card;
}rpsg[11],mi[11],kkr[11],rcb[11],t1[11],t2[11];

int toss(void);
int bat(player &a,player &b);
int bowl(player &a,player &b);
void displaybat(player a);
void displaybowl(player b);


void main()
{ int i;
  clrscr();
  rpsg[0].name="Ajinkya Rahane";
  rpsg[1].name="Shardul Thakur";
  rpsg[2].name="Steven Smith";
  rpsg[3].name="Manoj Tiwary";
  rpsg[4].name="Mayank Agarwal";
  rpsg[5].name="MS Dhoni";
  rpsg[6].name="Rajat Bhatia";
  rpsg[7].name="Daniel Christian";
  rpsg[8].name="Ben Stokes";
  rpsg[9].name="Adam Zampa";
  rpsg[10].name="Ashok Dinda";
  for(i=0;i<11;i++)
   {
     rpsg[i].card.nbp=0;
   }
   for(i=0;i<11;i++)
   {
     rpsg[i].card.runs=0;
   }
   for(i=0;i<11;i++)
   {
     rpsg[i].card.nbb=0;
   }
   for(i=0;i<11;i++)
   {
     rpsg[i].card.wkts=0;
   }

   mi[0].name="Rohit Sharma";
   mi[1].name="Lendl Simmons";
   mi[2].name="Parthiv Patel";
   mi[3].name="Mitchell Mclenghan";
   mi[4].name="Kieron Pollard";
   mi[5].name="Hardik Pandya";
   mi[6].name="Jos Buttler";
   mi[7].name="Krunal pandya";
   mi[8].name="Harbajan Singh";
   mi[9].name="lasith Malinga";
   mi[10].name="tim Southee";
   for(i=0;i<11;i++)
   {
     mi[i].card.nbp=0;
   }
   for(i=0;i<11;i++)
   {
     mi[i].card.runs=0;
   }
   for(i=0;i<11;i++)
   {
     mi[i].card.nbb=0;
   }
   for(i=0;i<11;i++)
   {
     mi[i].card.wkts=0;
   }

   kkr[0].name="Gautam Gambhir";
   kkr[1].name="Robin Uthappa";
   kkr[2].name="Manish Pandey";
   kkr[3].name="shakib al Hassan";
   kkr[4].name="Yusuf Pathan";
   kkr[5].name="chris Woakes";
   kkr[6].name="Darren Bravo";
   kkr[7].name="Andre Russel";
   kkr[8].name="Sunil Narine";
   kkr[9].name="Kuldeep Yadav";
   kkr[10].name="Trent Boult";
   for(i=0;i<11;i++)
   {
     kkr[i].card.nbp=0;
   }
   for(i=0;i<11;i++)
   {
     kkr[i].card.runs=0;
   }
   for(i=0;i<11;i++)
   {
     kkr[i].card.nbb=0;
   }
   for(i=0;i<11;i++)
   {
    kkr[i].card.wkts=0;
   }


   rcb[0].name="Chris Gayle";
   rcb[1].name="Shane Watson";
   rcb[2].name="Virat Kholi";
   rcb[3].name="Kedar Jadhav";
   rcb[4].name="AB de Villiers";
   rcb[5].name="Mandeep Singh";
   rcb[6].name="Sarfarz Khan";
   rcb[7].name="Stuart Binny";
   rcb[8].name="Samuel Badree";
   rcb[9].name="Tymal Mills";
   rcb[10].name="Yu.Chahal";
   for(i=0;i<11;i++)
   {
     rcb[i].card.nbp=0;
   }
   for(i=0;i<11;i++)
   {
     rcb[i].card.runs=0;
   }
   for(i=0;i<11;i++)
   {
     rcb[i].card.nbb=0;
   }
   for(i=0;i<11;i++)
   {
     rcb[i].card.wkts=0;
   }


   int mmchoice,teamchoice,cpuchoice,mtoss,oorn,totalscore=1,a,final=0;
   cout<<"\n---------------------------------------------------------------------------\n\t\t\t INDIAN PREMIER LEAGUE 2018\n\n-----------------------------------------------";
   cout<<"\n\n\n\n\n\n\n\t\t\t\t Please Wait...";
   for(unsigned long int load=0;load<56565431;load++);
   clrscr();
   a:
   clrscr();
   cout<<"\n-----------------------------------------------------------------------------------------\n\t\t\t INDIAN PREMIER LEAGUE 2018\n\n---------------------------------------------------------";
   cout<<"\n\n Main Menu:\n\n1.Quick play\n\n2.Exit\n\n Select";
   cin>>mmchoice;
   switch(mmchoice)
   {
     case 1:
     clrscr();
     cout<<"\n \n Welcome to quick play!\n\n Choose your team.\n\n1.Rising Pune Super giants\n2.Mumbai Indians\n3.Kolkata knight Riders\n 4.Royal Challengers Bangalore:";
     cin>>teamchoice;
     if(teamchoice==1)
     {
       for(i=0;i<11;i++)
       {
	 t1[i]=rpsg[i];
       }
     }
     else if(teamchoice==2)
     {
       for(i=0;i<11;i++)
       {
	 t1[i]=mi[i];
       }
     }
    else if (teamchoice==3)
    {
      for(i=0;i<11;i++)
      {
	t1[i]=kkr[i];
      }
    }
    else
    {
      for(i=0;i<11;i++)
      {
	t1[i]=rcb[i];
      }
    }
    b:
    cout<<"\n Select opponent Team";
    cin>>cpuchoice;
    if(cpuchoice!=teamchoice)
    {
      if(cpuchoice==1)
      {
	for(i=0;i<11;i++)
	{
	  t2[i]=rpsg[i];
	}
      }
      else if(cpuchoice==2)
      {
       for(i=0;i<11;i++)
       {
	 t2[i]=mi[i];
       }
      }
      else if(cpuchoice==3)
      {
	for(i=0;i<11;i++)
	{
	  t2[i]=kkr[i];
	}
      }
      else
      {
	for(i=0;i<11;i++)
	{
	  t2[i]=rcb[i];
	}
      }
    }
      else
      {
       cout<<"\n Enter a Valid Choice";
       goto b;
      }
      clrscr();
      cout<<"\n ------------------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE 2018\n\n----------------------";
      cout<<"\n Youre team Players:\t\t\t\tYoure Opponent Team Players:";
      cout<<"\n--------------------------------------------";
      for(i=0;i<11;i++)
      {
	cout<<"\n"<<t1[i].name;
	cout<<"\t\t\t\t";
	cout<<"\t\t"<<t2[i].name;
      }
      cout<<"\n\n\t\t\tPress Enter To Continue";
      getch();
      clrscr();
      cout<<"\n\n\t\t Toss";
      mtoss=toss();
      if(mtoss==0)// batting first
      {
	clrscr();
	cout<<"\n Get Ready To bat";
	for(i=0;i<11;i++)
	{
	  oorn=bat(t1[i],t2[10-i]);
	  if(oorn==1)
	  {
	    cout<<"\n"<<t1[i].name<<"is out";
	    if(i!=10)
	    continue;
	    else
	    break;
	  }
	}
	clrscr();
	cout<<"\n\n\n\Total Score";
	for(i=0;i<11;i++)
	{
	  totalscore+=(t1[i].card.runs);
	}
	totalscore-=1;
	cout<<totalscore;
	cout<<"\n All The Players in your Team are out.";
	cout<<"\n\n Press Enter To Continue";
	getch();
	clrscr();
	cout<<"\n-------------------------------------\n\t\t\tINDIAN PREMIER LEAGue 2018\n\n-----------------";
	cout<<"\n Batsman Score card:";
	cout<<"\nPlayer\t\tNumber of Runs\t\tNumber of Balls";
	for(i=0;i<11;i++)
	{
	  displaybat(t1[i]);
	}
	getch();
	clrscr();
	cout<<"\n--------------------------------------------------------\n\t\t\tINDIAN PrEmieR LEAGUE 2018\n\n-------------------------";
	cout<<"\n\t\tBowler Score card";
	cout<<"\nPlayer\t\tNumber of balls\t\tNumber of Wickets";
	for(i=0;i<11;i++)
	{
	  displaybowl(t2[i]);
	}
	getch();
	clrscr();
	cout<<"\n-----------------------------------------------------\n\t\t\tINDiAN PREMIER LEAGUE 2018\n\n--------------------------";
	cout<<"\nPress Enter to Continue";
	getch();
	clrscr;
	cout<<"\n------------------------------------------------------------\n\t\t\tInDIAN PREMIER LEAGUE 2018\n\n----------------------";
	cout<<"\n\nIts your turn to Bowl";
	for(i=0;i<11;i++)//bowling second
	{
	  if(final<totalscore)
	  {
	    oorn=bowl(t2[i],t1[10-i]);
	    final+=t2[i].card.runs;
	  }
       }
       clrscr();
       clrscr();
       cout<<"\n--------------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE 2018\n\n-------------------------";



       cout<<"\n Batsman Score card";
       cout<<"\n\nPlayer\t\tNumber of runs\t\tNumber of balls";
       for(i=0;i<11;i++)
       {
	 displaybat(t2[i]);
       }
       getch();
       clrscr();
       cout<<"\n--------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE 2018\n\n-------------------";
       cout<<"\n\t\t\tBowler Score card";
       cout<<"\n\nPlayer\t\tNumber of Balls\t\tNumber of Wickets";
       for(i=0;i<11;i++)
       {
	 displaybowl(t1[i]);
       }
       cout<<"\n\n Press Enter To Continue";
       getch();
       clrscr();
       cout<<"\n Opponents final Score:"<<final;
       if(final>totalscore)
       {
	 cout<<"\n\nYouve Lost the match";
	 cout<<"\n\n Press Enter to Return to Main Menu";
	 getch();
	 goto a;
       }
       else
       {
	 cout<<"\n Youve won the match!";
	 cout<<"\n Press Enter to Return to Main Menu";
	 getch();
	 goto a;
       }
      }
      else if(mtoss==1)        //bowling first
      {
	clrscr();
	cout<<"\n------------------------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE 2018\n\n-----------------";
	cout<<"\n\n Get ready to bowl";
	for(i=0;i<11;i++)
	{
	  oorn=bowl(t2[i],t1[10-i]);
	  final+=t2[i].card.runs;
	  if(oorn==1)
	  {
	    if(i!=0)
	    continue;
	  }
	  else
	  goto m;
       }
	m:
	  cout<<"\n\nAll the Players in the Opponent team is out.";
	  clrscr();
	  clrscr();
	  cout<<"\n-----------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE 2018\n\n----------------------";
	  cout<<"\n\t\t\tBatsman Score card";
	  cout<<"\n\nPlayer\t\tNumber of Runs\t\tNumber of balls";
	  for(i=0;i<11;i++)
	  {
	    displaybat(t2[i]);
	  }
	  getch();
	  clrscr();
	  cout<<"\n--------------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE\n\n-----------------------------";
	  cout<<"\n\t\t\tBowler Score card";
	  cout<<"\nPlayer\t\tNumber of Balss\t\tNumber of Wickets";
	  for(i=0;i<11;i++)
	  {
	    displaybowl(t1[i]);
	  }
	  clrscr();
	  cout<<"\n-----------------------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE\n\n---------------";
	  cout<<"\n\nFinal Score:"<<final;
	  cout<<"\n\n\nPress Enter to Continue";
	  getch();
	  clrscr();
	  cout<<"\n Get ready to bat";
	  for(i=0;i<11;i++)
	  {
	    oorn=bat(t1[i],t2[10-i]);
	    totalscore+=t1[i].card.runs;
	 }
	 clrscr();
	 cout<<"\n\t\t\tBatsman Score Card";
	 cout<<"\nPlayer\t\tNumber of Runs\t\tNumber of balls";
	 for(i=0;i<11;i++)
	 {
	   displaybowl(t2[i]);
	 }
	 clrscr();
	 cout<<"\n---------------------------------------------\n\t\t\tINDIAn PREMIER LEAGUE\n\n-------------------------";
	 cout<<"\nPress Enter to continue";
	 getch();
	 goto g;
	 g:
	 {
	   if(totalscore>final)
	   {
	     cout<<"\n\nyouve Won the match";
	     clrscr();
	     cout<<"\n Press Enter to return to main menu";
	     getch();
	     goto a;
	   }
	   else
	   clrscr();
	   cout<<"\n Youve Lost the Match";
	   cout<<"\n Press Enteer to return to main menu";
	   getch();
	   goto a;
	 }
       }
     else
     goto a;
   }
   getch();
}
int toss(void)
{
   int oe,comp,toss,batorbowl,compbatorbowl;
   cout<<"\n Get ready to Toss";
   cout<<"\n1.Odd \n2.Even \n3.Back to main menu";
   cout<<"\n Enter your Choice:";
   srand(time(NULL));
   cin>>oe;
   if(oe==1)
   {
      cout<<"\nEnter a no from 1 to 6:";
      cin>>toss;
      comp=(rand()%2)+1;;
      cout<<"\nThe Computered Entered:"<<comp;
      if((comp+toss)%2==1)
      {
	cout<<"\n youve won the toss";
	cout<<"\n1.Bat\n2.Bowl\nSelect:";
	cin>>batorbowl;
	if(batorbowl==1)
	{
	  cout<<"\n Press Enter to continue:";
	  getch();
	  return 0;
	}
	else
	{
	  cout<<"\n Press Enter to continue";
	  getch();
	  return 1;
	}
      }
      else
      {
	 cout<<"\nThe opponent has won the toss";
	 compbatorbowl=(rand()%2)+1;
	 if(compbatorbowl==1)
	 {
	   cout<<"\n the Opponent has decided to bat";
	   cout<<"\n Press enter to continue";
	   getch();
	   return 1;
	 }
	 else
	 {
	    cout<<"\nThe Opponent has chosen to bowl";
	    cout<<"\n Press Enter to continue:";
	    getch();
	    return (0);
	 }
       }
   }
   else if(oe==2)
   {
     cout<<"\n Enter a Number from 1 to 6";
     cin>>toss;
     comp=(rand()%2)+1;
     cout<<"\n The opponent entered a :"<<comp;
     if((comp+toss)%2==0)
     {
       cout<<"\nYouve won the toss";
       cout<<"\n 1.Bat\n2.Bowl\n\nSelect";
       cin>>batorbowl;
       if(batorbowl==1)
       {
	 cout<<"\nPress Enter to Continune..";
	 getch();
	 return(0);
       }
       else
       {
	 cout<<"\n Press Enter to Continue";
	 getch();
	 return 1;
       }
     }
     else
     {
       cout<<"\n The Opponent has won the Toss";
       if(compbatorbowl==1)
       {
	 cout<<"\nThe Opponent has choosen to Bat";
	 cout<<"\n Press Enter to continue";
	 getch();
	 return 1;
       }
       else
       {
	 cout<<"\n The opponent has choosen to bowl";
	 cout<<"\n Press Enter to continue";
	 getch();
	 return(0);
       }
     }
   }
   else
   {
     return 2;
   }
}

int bat(player&a,player&b)
{
  int cpu=0,run=0,i,j=0;
  clrscr();
  cout<<"\n-----------------------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE 2018 \n\n-----------------------------";
  z:
  cout<<"\nBatting:"<<a.name<<"\nBowling:"<<b.name;
  cout<<"\n\n Score a run";
  cin>>run;
  cpu=(rand()%6)+1;
  if((run<7)&&(run!=cpu))
  {
    cout<<"\n the opponent Bowled a:"<<cpu;
    a.card.runs+=run;
    a.card.nbp+=1;
    b.card.nbb+=1;
    goto z;
  }
  else if((run<7)&&(cpu==run))
  {
     a.card.nbp+=1;
     b.card.nbb+=1;
     b.card.wkts+=1;
     cout<<"\n The Opponent Bowled a :"<<cpu;
     cout<<"\n Youre out";
     cout<<"\n Press Enter to Continue:";
     getch();
     return 1;
  }
  else
  {
    b.card.nbb+=1;
    if(j<1)
    cout<<"Warning! You cannot score more than 6!\nIf repeated again,one run will be reduced from the score.";
    else
    {
      cout<<"\n One run has been Reduced from the score!..";
      a.card.runs-=1;
    }
    j++;
    goto z;
  }
}


int bowl(player&a,player&b)
{
  int ball=0,cpu=0,i,j=0;
  clrscr();
  cout<<"\n----------------------------------------------------------\n\t\t\tINDIAN PREMIER LEAGUE\n\n------------------";
  x:
    cout<<"\nBatting:"<<a.name<<"\nBowling:"<<b.name;
    cpu=(rand()%6)+1;
    cout<<"\n Bowl a Ball:";
    cin>>ball;
    if((ball<7)&&(ball!=cpu))
    {
      cout<<"\nThe Opponent scored a :"<<cpu;
      a.card.runs+=cpu;
      b.card.nbb+=1;
      a.card.nbp+=1;
      goto x;
    }
    else if((ball<7)&&(ball==cpu))
    {
       b.card.wkts+=1;
       b.card.nbb+=1;
       a.card.nbp+=1;
       cout<<"\n Youve taken a wicket!";
       cout<<"\n Press Enter to continue..";
       getch();
       return 1;
    }
    else
    {
      b.card.nbb+=1;
      if(j<1)
      cout<<"Warning !You cannot score more than 6!\n If Repeated one run will be added to your opponents score.";
      else
      {
	cout<<"\n One run has been added to the Opponents Score!";
	a.card.runs+=1;
      }
      j++;
      goto x;
    }
}

void displaybat(player a)
{
  cout<<"\n"<<a.name<<"\t\t"<<a.card.runs<<"\t\t\t"<<a.card.nbp;
}


void displaybowl(player b)
{
  cout<<"\n"<<b.name<<"\t\t"<<b.card.nbb<<"\t\t\t"<<b.card.wkts;
}