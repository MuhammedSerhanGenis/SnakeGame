//Muhammed Serhan Genis
//Ogulcan Col

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int zorluk;
int skor=0;
int x=7;
int y=15;
char alan[100][100];
int tus=0;
int i=0;
int k=0;
int pass=0;
int yilan_x=3;
int yilan_y=6;
int yilan_boy=0;
int yon=1;//yon 1=yukari,yon 2=asagi,yon 3=sol,yon 4=sag ;
	int yilanx[30];
	int yilany[30];

void duvar(int i,int k)
{
	
	for(i=0;i<x;i++)
		{
			for(k=0;k<y;k++)
			{
				
				alan[i][k]=' ';
				
				
			}
		
			
			
		}
	for(i=0;i<x;i++)
		{
			for(k=0;k<y;k++)
			{
				
			
			if(i==0)
				{
						alan[i][k]='*';
					
				}
			if(i==6)
				{
						alan[i][k]='*';
					
				}
		
			if(k==0)
				{
						alan[i][k]='*';
					
				}
			if(k==14)
				{
						alan[i][k]='*';
					
				}
			
		
				
				
			}
			
			
		}
	
	
	
	
}

void kuyruk(int x,int y)
{
	for(int ik=29;ik>=1;ik--){
	
	yilanx[ik]=yilanx[ik-1];
	yilany[ik]=yilany[ik-1];
	}
	yilanx[0]=x;
	yilany[0]=y;
}

   
void yilan(int yilan_x,int yilan_y)
{
	alan[yilan_x][yilan_y]='o';
	for(i=0;i<yilan_boy;i++)
	alan[yilanx[i]][yilany[i]]='-';
	
		
	
}
int yedi=0;
void cizdir(int i,int k)
{
	
	
	
	
	
		for(i=0;i<x;i++)
		{
			for(k=0;k<y;k++)
			{
				
			//	NOKIA_Out(i,k,alan[i][k]])
				
				printf(" %c ",alan[i][k]);
				
				
			}
			printf("\n");
			
			
		}
	
}




    int elma_okey=1;
	int sol=0;
	int sag=0;
	int ust=0;
	int asagi=0;
	int xe = 2;
	int ye = 1;
	int carpti_mi=0;


int main()
{
	
	                duvar(i,k);
	                alan[xe][ye]='A';
					yilan(yilan_x,yilan_y);
					cizdir(i,k);
                    system("cls");
                    yilanx[0]=yilan_x;
                    yilany[0]=yilan_y;

     printf("Hangi zorlukta oynamak istersiniz(1-5 arasi rakam giriniz):");
     scanf("%d",&zorluk);
	system("cls");
	printf("Secilen zorluk seviyesi: %d\n\n",zorluk);
	 printf("OYUN BASLIYOR...");
	 Sleep(3000);
		time_t start,end;
    	time (&start);
    	system("cls");
	 while(1)
    {
    	
    	
    	 if(yilan_x==0||yilan_x==5||yilan_y==0||yilan_y==13) 
	{ 
	 time (&end);
	 carpti_mi=1;
	 duvar(i,k);
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
	 Sleep(200);
	system("cls");
	Sleep(200);
	 duvar(i,k);
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
	 Sleep(200);
	system("cls");
	Sleep(200);
	 duvar(i,k);
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
	 Sleep(200);
	system("cls");
	Sleep(200);
	 duvar(i,k);
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
	 system("cls");
	 printf("Carptiniz \n");
	 printf("Skorunuz: %d \n", skor);
  	 printf ("Oyun oynama sureniz: %.2lf saniye \n", difftime (end,start));
	 Sleep(1000);

	 break;
	}   
	
	for(i=0;i<yilan_boy;i++)
	{
	
	if(yilan_x==yilanx[i]&&yilan_y==yilany[i] )
	{
		carpti_mi=1;
	}
	
}

if(carpti_mi)
{
	 time (&end);
    duvar(i,k);
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
	 Sleep(200);
	system("cls");
	Sleep(200);
	 duvar(i,k);
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
	 Sleep(200);
	system("cls");
	Sleep(200);
	 duvar(i,k);
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
	 Sleep(200);
	system("cls");
	Sleep(200);
	 duvar(i,k);
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
	 system("cls");
	 printf("Carptiniz \n");
	 printf("Skorunuz: %d \n", skor);
	 time (&end);
  	 printf ("Oyun oynama sureniz: %.2lf saniye \n", difftime (end,start));
	 Sleep(1000);
	 break;
	
}


                    kuyruk(yilan_x,yilan_y);
                    
    
    
    if(yilan_x==xe&&yilan_y==ye)
	{
		system("cls");
    	yedi=1;	
    	skor++;
    	yilan_boy++;
    	
	}

	
    	pass=0;
        if(kbhit())
        {
            tus=getch();
            if(tus==224)
            {
                tus=getch();
                switch(tus)
                {
                    
					
					case 72:
                    if(sag!=1){
                    	
                     sol=1;
	                 sag=0;
					 ust=0;
					 asagi=0;
					 
					 
                    yilan_x=yilan_x-1;
                    
					duvar(i,k);

					
					if(yedi==1){
					
             		elma_okey=1;
	 				while(elma_okey){
	 						elma_okey=0;
	 					xe = rand()%4+1;
						ye = rand()%7+1;
						
						for(i=0;i<=yilan_boy;i++)
                   		{
							if((xe==yilanx[i]&&ye==yilany[i]))
								{ elma_okey=1;
									xe = rand()%4+1;
						           ye = rand()%7+1;
								}	
					 
						}
					}
				
					alan[xe][ye]='A';	
					}
					
					else{
						alan[xe][ye]='A';
					}
					yon=1;
					yilan(yilan_x,yilan_y);
					cizdir(i,k);
					Sleep(1000/zorluk);
                     	system("cls");
                     	pass=1;
					}

					
                        break;
                        
                        
                        
                        
                        
                        
                        
                        
                    case 80: 
					 if(sol!=1){
					 sag=1;
	                 sag=0;
					 ust=0;
					 asagi=0;
					 	yilan_x=yilan_x+1;
                         duvar(i,k); 
    	            
    	            
                       if(yedi==1){
                       	
			    elma_okey=1;
	 				while(elma_okey){
	 					elma_okey=0;
	 					xe = rand()%4+1;
						ye = rand()%7+1;
						
						for(i=0;i<=yilan_boy;i++)
                   		{
							if((xe==yilanx[i]&&ye==yilany[i]))
								{ elma_okey=1;
									xe = rand()%4+1;
						           ye = rand()%7+1;
								}	
					 
						}
					}
					alan[xe][ye]='A';	
					}
					
					
					else{
						alan[xe][ye]='A';
					}
                          yon=2;
						  yilan(yilan_x,yilan_y);
                        cizdir(i,k);
					Sleep(1000/zorluk);
                     	system("cls");
                     	pass=1;
					 }                   	
                    	
                        break;
                        
                        
                        
                        
                        
                        
                        
                        
                    case 77:

					 if(ust!=1){
					 sol=0;
	                 sag=0;
					 ust=0;
					 asagi=1;
					 	yilan_y=yilan_y+1;
				      	yon=4;
                         duvar(i,k);
    	            
    	            
    	            
    	            
                        if(yedi==1){

	 				elma_okey=1;
	 				while(elma_okey){
	 					elma_okey=0;
	 					xe = rand()%4+1;
						ye = rand()%7+1;
						
						for(i=0;i<=yilan_boy;i++)
                   		{
							if((xe==yilanx[i]&&ye==yilany[i]))
								{ elma_okey=1;
									xe = rand()%4+1;
						           ye = rand()%7+1;
								}	
					 
						}
					}
				
					alan[xe][ye]='A';	
					}
					else{
						alan[xe][ye]='A';
					}
                         yilan(yilan_x,yilan_y);
						cizdir(i,k);
					  Sleep(1000/zorluk);
                     	system("cls");
                     	pass=1;
					 }
					 					 
				      	
                        break;
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                    case 75:
					 if(asagi!=1){
					 sol=0;
	                 sag=0;
					 ust=1;
					 asagi=0;
    	            
    	            
    	           
    	            
					if(yedi==1){
						
	 				elma_okey=1;
	 				while(elma_okey){
	 						elma_okey=0;
	 					xe = rand()%4+1;
						ye = rand()%7+1;
						
						for(i=0;i<=yilan_boy;i++)
                   		{
							if((xe==yilanx[i]&&ye==yilany[i]))
								{ elma_okey=1;
									xe = rand()%4+1;
						           ye = rand()%7+1;
								}	
					 
						}
					}
					alan[xe][ye]='A';	
					}
					else{
						alan[xe][ye]='A';
					}
					yilan_y=yilan_y-1;
					yon=3;
                         duvar(i,k);
                         yilan(yilan_x,yilan_y);
						cizdir(i,k); 
                      Sleep(1000/zorluk);
                     	system("cls");
                     	pass=1;
					 }	
					
						 break;
						 
						 
						 
						 
						 
                }
            }
        }


if(!pass){
	
if(yon==1){
	
	 yilan_x=yilan_x-1;
	 duvar(i,k);
	 
    	            
	 	if(yedi==1){

	 				elma_okey=1;
	 				while(elma_okey){
	 						elma_okey=0;
	 					xe = rand()%4+1;
						ye = rand()%7+1;
						
						for(i=0;i<=yilan_boy;i++)
                   		{
							if((xe==yilanx[i]&&ye==yilany[i]))
								{ elma_okey=1;
									xe = rand()%4+1;
						           ye = rand()%7+1;
								}	
					 
						}
					}
					alan[xe][ye]='A';	
					}
					else{
						alan[xe][ye]='A';
					}
	 yilan(yilan_x,yilan_y);
	 cizdir(i,k);
Sleep(1000/zorluk);
system("cls");
}
if(yon==2){
	
	 yilan_x=yilan_x+1;
	 duvar(i,k);
	 
    	            
	 	if(yedi==1){

	 				elma_okey=1;
	 				while(elma_okey){
	 					elma_okey=0;
	 					xe = rand()%4+1;
						ye = rand()%7+1;
						
						for(i=0;i<=yilan_boy;i++)
                   		{
							if((xe==yilanx[i]&&ye==yilany[i]))
								{ elma_okey=1;
									xe = rand()%4+1;
						           ye = rand()%7+1;
								}	
					 
						}
					}
					alan[xe][ye]='A';	
					}
					else{
						alan[xe][ye]='A';
					}
	yilan(yilan_x,yilan_y);
	 cizdir(i,k);
Sleep(1000/zorluk);
system("cls");
}
if(yon==4){
	
	 yilan_y=yilan_y+1;
	 duvar(i,k);
    	            
    	            
	 	if(yedi==1){
	 		
	 				elma_okey=1;
	 				while(elma_okey){
	 					elma_okey=0;
	 					xe = rand()%4+1;
						ye = rand()%7+1;
						
						for(i=0;i<=yilan_boy;i++)
                   		{
							if((xe==yilanx[i]&&ye==yilany[i]))
								{ elma_okey=1;
									xe = rand()%4+1;
						           ye = rand()%7+1;
								}	
					 
						}
					}
					alan[xe][ye]='A';	
					}
					else{
						alan[xe][ye]='A';
					}
	yilan(yilan_x,yilan_y);
	 cizdir(i,k);
Sleep(1000/zorluk);
system("cls");
}
if(yon==3){
	
	 yilan_y=yilan_y-1;
	 duvar(i,k);
    	            
    	            
	 	if(yedi==1){
	 		
	 				elma_okey=1;
	 				while(elma_okey){
	 						elma_okey=0;
	 					xe = rand()%4+1;
						ye = rand()%7+1;
						
						for(i=0;i<=yilan_boy;i++)
                   		{
							if((xe==yilanx[i]&&ye==yilany[i]))
								{ elma_okey=1;
									xe = rand()%4+1;
						           ye = rand()%7+1;
								}	
					 
						}
					}
	 				
	 				
	 				

					alan[xe][ye]='A';	
					}
					else{
						alan[xe][ye]='A';
					}
	yilan(yilan_x,yilan_y);
	 cizdir(i,k);
Sleep(1000/zorluk);
system("cls");
}


}
 
yedi=0;

}
	
	
	
	
}
