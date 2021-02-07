#include<stdio.h>
#include<string.h>   //���鴦��
#include<Windows.h>  //���ڴ���
#include<time.h>     //ʱ�䴦�������ڲ�������� 
#include<conio.h>    //����̨������������Ǳ�׼��ͷ�ļ�
#include<stdlib.h>

#define up 'w'
#define down 's'
#define left 'a'
#define right 'd'
#define stop 'p'

void First();
void welcome();  //��ʼ����
void Finish(); //��������
void Game();  //��������
void creatmap(); //Χǽ��ӡ
void LoadSnake(); //������ 
void creatfood();   //ʳ�����
void gotoxy(int x,int y);  //�����ת
void gotoprint(int x,int y); //��ת��ӡ
void gotodelete(int x,int y);//��תɾ��
int ClickControl(); //��ȡ�����ź�
int Judge();   //���У���Ϸ�����ж�
void MovingBody(char c); //�ߵ��ƶ�
void Eating();  
void ChangeBody(int a,int b);  //�ߵ�����任����һ������ǰһ��struct��abΪhead֮ǰ����

typedef struct Snakes{
	int x,y;
	struct Snakes *next;
}snake;

snake *head,*tail;

struct Food{
	int x,y;
}food;

char name[20];
int score = 0;
char click = 0;
int speed;
int a=1,cishu=0,sum=0;

int main(){
	First();
	welcome();
	Game();
	if(ClickControl()==0)
	return 0;
}

void Game(){
	int i;
	for(i=0;i<cishu;i++){
		creatmap();
		LoadSnake();
		creatfood();
		if(ClickControl()==0)
			a++;
		system("cls");
		score=0; 
	}
}

void First(){
	int i;
	for (i = 0; i< 110; i += 2){
		gotoprint(i, 0);
		gotoprint(i, 28);
	}
	for (i = 0; i < 28; i++){
		gotoprint(0, i);
		gotoprint(110, i);
	}
	gotoxy(30,15);
	printf("��������ڴ�С���Ա���ʾȫ������"); 
	gotoxy(30,17);
	system("PAUSE");
	system("cls");
}

void welcome(){
	gotoxy(30,10);
	printf("/**************************************/");
	gotoxy(30,20);
	printf("/**************************************/");
	gotoxy(40,12);
	printf("~��ӭ����̰��������~");
	gotoxy(40,14);
	printf("����Ӣ�����뷨�в���");
	gotoxy(40,16);
	printf("WASD���Ʒ���P��ͣ");
	gotoxy(35,18);
	printf("���������ֺ���Ϸ�������ո������");
	scanf("%s %d",&name,&cishu);
	system("cls"); 
}

void creatmap(){
	int i;
	for (i = 0; i<58; i += 2){
		gotoprint(i, 0);
		gotoprint(i, 26);
	}
	for (i = 0; i < 26; i++){
		gotoprint(0, i);
		gotoprint(56, i);
	}
	gotoxy(75,5);
	printf("%s����ӭ��Ϸ��",name);
	gotoxy(75, 10);
	printf("���ǵ� %d ����Ϸ��",a);
	gotoxy(75, 15);
	printf("��WASD��ʼ��Ϸ");
	gotoxy(75, 20);
	printf("��Ŀǰ�ķ����ǣ�%d ",score);
	gotoxy(80, 25);
	printf("Designed by Wenzheng Liu.");
	
	}

void LoadSnake(){
	head = (snake*)malloc(sizeof(snake));   //��ͷ�����ڴ� 
	tail = (snake*)malloc(sizeof(snake));	//��β�ͷ����ڴ� 
	head->x = 16;	
	head->y = 15;	 
	snake *p = (snake*)malloc(sizeof(snake));
	snake *q = (snake*)malloc(sizeof(snake));
	p->x = 16;
	p->y = 16; 
	q->x = 16;
	q->y = 17;
	head->next = p;
	p->next = q;
	q->next = tail;
	tail->next = NULL;
	tail->x = 4;
	tail->y = 2;
}

void gotoxy(int x, int y){
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}

void gotoprint(int x, int y){
	gotoxy(x, y);
	printf("��");
}

void gotodelete(int x,int y){
	gotoxy(x,y);
	printf("  ");
} 

void creatfood(){
	srand((int)time(NULL));
	lable:
		food.y=rand() % (25-1+1)+1;
		food.x=rand() % (54-2+1)+2;
	if (food.x % 2 != 0)
	{
		food.x = food.x+1;
	}	
	snake *judge=head;
	while(1){  //�����ų������ظ� 
	if(judge->next==NULL) break;
	if(food.x==judge->x && food.y==judge->y) goto lable;
	judge=judge->next;
	}
	gotoxy(food.x,food.y);
	printf("��");
}

int ClickControl(){
	while(1){
		if(Judge()==0) return 0;
		if(_kbhit()){
			click=_getch();			
		}
		MovingBody(click);
		Eating();
	}
	return 1;
}

void MovingBody(char c){
	int count = 0;
	int a = head->x, b = head->y;
	snake *p = head;
	while (1){
	if (p->next == NULL) break;
	gotodelete(p->x, p->y);
	count++;
	p = p->next;
	}
	switch(c){
		case up:
			head->y-=1;
			ChangeBody(a,b);
			break;
		case down:
			head->y+=1;
			ChangeBody(a,b);
			break;
		case left:
			head->x-=2;
			ChangeBody(a,b);
			break;
		case right:
			head->x+=2;
			ChangeBody(a,b);
			break;
		case stop:
			_getch();
			break;
	}
	p=head;
	while(1){
		if(p->next==NULL) break;
		gotoprint(p->x,p->y);
		p=p->next;
	}
	p=head;
	gotoxy(0,28);
	if(count<=10) speed=150;
	else if(count>10 && count<=20) speed=120;
	else if(count>20 && count<=40) speed=100;
	else speed=60;
	Sleep(speed);
}

void Eating(){
	if(head->x==food.x && head->y==food.y){
		creatfood();
		snake *_new=(snake*)malloc(sizeof(snake));
		snake *p;
		p=head;
		while(1){
			if(p->next->next==NULL) break;
			p=p->next;
		}
		p->next=_new;
		_new->next=tail;
		score+=10;
		gotoxy(75,20);
		printf("��Ŀǰ�ķ����ǣ�%d",score);
	}
}

void ChangeBody(int a,int b){
	snake *p = head->next;
	int mid1, mid2,_mid1,_mid2;
	mid1 = p->x;
	mid2 = p->y;
	while (1){
		if (p->next->next == NULL) break;
		_mid1 = p->next->x;
		_mid2 = p->next->y;
		p->next->x = mid1;
		p->next->y = mid2;
		mid1 = _mid1;
		mid2 = _mid2; 
		p = p->next;
	}
	p = head->next;
	if (p->next!= NULL){
		p->x = a;
		p->y = b;
	}
}


int Judge(){
	if(head->x==0 || head->x==56 || head->y==0 || head->y==26){  //�����߽� 
		Finish();
		return 0;
	}
	snake *p=head->next;
	while(1){
		if(p->next==NULL) break;
		if(head->x==p->x && head->y==p->y){
			Finish();
			return 0;
		}
		p=p->next;
	}
	return 1;
}

void Finish(){
	system("cls");
	gotoxy(30,10);
	printf("/**************************************/");
	gotoxy(30,22);
	printf("/**************************************/");
	sum=score+sum;
	gotoxy(40,14);
	if(a-1==cishu)
		printf("����ܷ��ǣ�%d ~",sum);
	else
		printf("��ı��η����ǣ�%d ~",score);
	gotoxy(40,16);
	if(a-1!=cishu){
		if(score>=0 && score<=50) 
			printf("����Ҫ�����𣡣�");
		else
			printf("������Ŷ������Ŭ����");
	}
	gotoxy(40,18);
	printf("��Ϸ������");
	gotoxy(0,27);
	system("PAUSE"); 
}
