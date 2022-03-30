#include<stdio.h>
#include<ctype.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
typedef struct ndoe{
 char id[10];
 char name[10];
 char sex[3];
 char num[10]; 
 struct node *next;
}student;
struct Student{
 student data;
 struct Student *next;
};
/ ************** Create Student Information******************/ 
Student * insert(Student * head){
  Student * s,*r;
  head=(Student *)malloc(sizeof(Student));
 Pritf ("Please enter the number of students:");
  int n;
  scanf("%d",&n);
  r=head;
  Pritf (\ n) input information for each student in the form of  M or G mobile phone number).
  for(int i=0;i<n;i++){
  s=(Student *)malloc(sizeof(Student));
  /*scanf("%s",s->data.id);
  scanf("%s",s->data.name);
  scanf("%s",s->data.sex);
  scanf("%s",s->data.num);*/
 scanf("%s%s%s%s",s->data.id,s->data.name,s->data.sex,s->data.num);
  r->next=s;
  r=s;
 }
 r->next=NULL;
 Printf ("successful input \ n");
  return head;
}
/ ************** Increase in Students**********************/
void add(Student *head){
 Student *s;
 s=head->next;
 while(s->next!=NULL)
 s=s->next;
 Student *ad=(Student *)malloc(sizeof(Student));
 ad->next=NULL;
 s->next=ad;
 // printf ("Input new student information:\ n");
 scanf("%s%s%s%s",ad->data.id,ad->data.name,ad->data.sex,ad->data.num);
 Printf ("Add Success\ n");
 return ;
}
/ ******************* Modify Student Information**********************************************************************/ 
void change(Student * head){
 Pritf ("Input 1, search students according to their school number, and modify the information of students\\\\");
 Pritf ("Input 2, search for students by name, and modify the information of students\\\\\\");
 Student * s;
 int n;
 scanf("%d",&n);
 switch(n){
 case 1:{
 Printf ("Please enter the student number:");
 char number[10];
 scanf("%s",number);
  s=head->next;
 while(s!=NULL){
 if(strcmp(s->data.id,number)==0){
  Printf ("Please enter the information to be modified:");
  char phone[10];
  scanf("%s",phone);
  strcpy(s->data.num,phone);
  Printf ("Successful modification\ n");
  break;
 }
 s=s->next;
 } 
 break;
 }
 case 2:{
 Printf ("Please enter your name:");
 char nam[10];
 scanf("%s",&nam);
  s=head->next;
 while(s!=NULL){
 if(strcmp(s->data.name,nam)==0){
  Printf ("Please enter the information to be modified:");
 char phone[10];
  scanf("%s",phone);
  strcpy(s->data.num,phone);
  Printf ("Successful modification\ n");
  break;
 }
 s=s->next;
 } 
 break;
 }
 }
 
 return ;
}
/ ********************** Delete Student Information****************************************************/
void del(Student * head){
 Pritf ("Input 1, search the student according to the student number, and delete the student's information\\\\\\");
 Pritf ("Enter 2, search for the student by name, and delete the student's information\\\\\\\\");
 Student * s,*r;
 int n;
 scanf("%d",&n);
 switch(n){
 case 1:{
 Printf ("Please enter the student number:");
 char number[10];
 scanf("%s",number);
  s=head->next;
  r=head;
 while(s!=NULL){
 if(strcmp(s->data.id,number)==0){
  r->next=s->next;
  free(s);
  Printf ("Delete Successfully\ n");
  break;
 }
 r=s;
 s=s->next;
 } 
 break;
 }
 case 2:{
 Printf ("Please enter your name:");
 char nam[10];
 scanf("%s",&nam);
  s=head->next;
  r=head;
 while(s!=NULL){
 if(strcmp(s->data.name,nam)==0){
  r->next=s->next;
  free(s);
  Printf ("Delete Successfully\ n");
  break;
 }
 r=s;
 s=s->next;
 } 
 break;
 }
 }
 return ;
}
/ ******************** Query for Student Information****************************************************/
void check(Student * head){
 Pritf ("Input 1, search the student according to the student number, and display the student's information\\\\\\\\");
 Pritf ("Input 2, search the student by name, and display the student's information\\\\\\\\\\\\\\
 Student * s,r;
 int n;
 scanf("%d",&n);
 switch(n){
 case 1:{
 Printf ("Please enter the student number:");
 char number[10];
 scanf("%s",number);
  s=head->next;
 while(s!=NULL){
 if(strcmp(s->data.id,number)==0){
  printf("%s %s %s %s\n",s->data.id,s->data.name,s->data.sex,s->data.num);
  break;
 }
 s=s->next;
 } 
 break;
 }
 case 2:{
 Printf ("Please enter your name:");
 char nam[10];
 scanf("%s",&nam);
  s=head->next;
 while(s!=NULL){
 if(strcmp(s->data.name,nam)==0){
  printf("%s %s %s %s\n",s->data.id,s->data.name,s->data.sex,s->data.num);
  break;
 }
 s=s->next;
 } 
 break;
 }
 }
 if(s==NULL)
 Printf ("the student does not exist \ n");
 return ;
}
 
int main(){
 Student *head=NULL;
 Student *a;
 Printf ("*** Welcome to Student Management System *** n");
 Printf ("***1: Enrollment information *** n");
 Printf ("***2: Please modify student information ***\ n");
 Printf ("***3: Please delete student information ***\ n");
 Printf ("***4: Please inquire about student information ***\ n");
 Printf ("***5: Please add new student information **\n");
 Printf ("***6: Exit management system ***\n");
 printf("*************************\n");
 Printf ("Please enter the command:");
 int n;
 while(scanf("%d",&n)&&n!=6){
 switch(n){
 case 1:{
 Pritf ("Enrollment Information:\ n");
 head=insert(a);
 break;
 }
 case 2:{
 Pritf ("Please change student information:\ n");
 change(head);
 break;
 }
 case 3:{
 Court < < "Please delete student information:""endl;
 del(head);
 break;
 }
 case 4:{
 Cout < < "Please check the student information:""endl;
 check(head); 
 break;
 }
 case 5:{
 Cout < < "Please add new student information:""endl;
 add(head);
 break;
 } 
 default :
 break;
 }
 Printf ("Please continue to enter the command:"); 
 }
 Student *s,*r;
 s=head->next;
 while(s!=NULL){
 r=s->next;
 free(s);
 s=r;
 }
 free(head);
 return 0;
}
