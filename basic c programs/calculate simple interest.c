                            /*programme to calculate simple interest
                            Author:TARUN
                            date:29-11-21*/
                            #include<stdio.h>
                            #include<conio.h>
                            void main()
                            {
                                int p,t;
                                float r,SI;
                                printf("enter principle,time and rate of interest:\n");
                                scanf("%d %d %f",&p,&t,&r);
                                SI=(p*r*t)/100;
                                printf("the simple interst is in %f",SI);
                                getch();
                            }